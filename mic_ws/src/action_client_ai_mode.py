import os
import queue
import sounddevice as sd
import vosk
import json
import sys
import wave
import time

from rclpy.node import Node
from std_msgs.msg import String
import rclpy
from prototype.action import GoTo, FoodMenu, AiCamera
from rclpy.action import ActionClient

import lgpio as GPIO
import pyaudio

# Set the Vosk model path
model_path = "/home/rosievoice/main_ws/mic_ws/src/vosk-model-small-en-us-0.15"

# GPIO pin setup for button
ledPin = 18
buttonPin = 23
h = GPIO.gpiochip_open(0)
# Set up GPIO using BCM numbering
GPIO.gpio_claim_input(h, buttonPin, GPIO.SET_PULL_UP)

# Audio recording parameters
CHANNELS = 1
RATE = 44100
CHUNK = 512
RECORD_SECONDS = 5
WAVE_OUTPUT_FILENAME = "rec41000.wav"

class MasterAi(Node):

    def __init__(self):
        super().__init__("masterAi_Node")
        self.timer = self.create_timer(1, self.local_ai_master)
        self._action_client = ActionClient(self, AiCamera, '/AiCamera')
        self.publisher_expression=self.create_publisher(String,'/eye_expression',10)
        self.ai_voice = ''

    def send_text(self, user_input):
        goal_msg = AiCamera.Goal()
        goal_msg.user_request = user_input

        self._action_client.wait_for_server()

        self._send_goal_future = self._action_client.send_goal_async(
            goal_msg, feedback_callback=self.feedback_callback
        )
        self._send_goal_future.add_done_callback(self.goal_response_callback)

    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            print('Goal rejected')
            return

        print('Goal accepted')
        self._get_result_future = goal_handle.get_result_async()
        self._get_result_future.add_done_callback(self.get_result_callback)

    def get_result_callback(self, future):
        result = future.result().result
        self.ai_reply = result.ai_end
        print(f'Result: {self.ai_reply}')

    def feedback_callback(self, feedback_msg):
        print('Feedback received:', feedback_msg.feedback)
        return

    def local_ai_master(self):
        self.timer.cancel()

    def transcribe_file(self, speech_file: str) -> str:
        """Transcribe the given audio file using Vosk."""
        global transcription
        speech_file ='/home/rosievoice/main_ws/mic_ws/src/rec41000.wav'
        wf = wave.open(speech_file, "rb")
        if wf.getnchannels() != 1 or wf.getsampwidth() != 2 or wf.getcomptype() != "NONE":
            print("Audio file must be WAV format mono PCM.")
            return ""

        model = vosk.Model(model_path)
        recognizer = vosk.KaldiRecognizer(model, RATE)

        frames = wf.getnframes()
        buffer = wf.readframes(frames)
        
        recognizer.AcceptWaveform(buffer)
        result = json.loads(recognizer.Result())
        transcription = result.get("text", "")
        print(f"Transcript: {transcription}")
        return transcription

    def record_expression(self):
        msg = String()
        msg.data = 'listening'
        self.publisher_expression.publish(msg)
    
        

def main(args=None):
 rclpy.init(args=args)
 master_ai=MasterAi()
 FORMAT = pyaudio.paInt16
 while rclpy.ok():
    #print('waiting for button event')
    p = pyaudio.PyAudio()
    button_state = GPIO.gpio_read(h, buttonPin)
    #wait for button to be pressed
    time.sleep(0.2)
    if button_state==0:
        frames = []
        stream = p.open(format=FORMAT,
                        channels=CHANNELS,
                        rate=RATE,
                        input=True,
                        frames_per_buffer=CHUNK,
                        )

        print('recording')
        #record as long as button held down
        while button_state == 0:
            button_state = GPIO.gpio_read(h, buttonPin)
            data = stream.read(CHUNK)
            master_ai.record_expression()
            frames.append(data)
            #print('continue')
        # button released
        print("* done")
        stream.stop_stream()
        stream.close()
        p.terminate()

        #make wave file from recorded data stream
        wf = wave.open(WAVE_OUTPUT_FILENAME, 'wb')
        wf.setnchannels(CHANNELS)
        wf.setsampwidth(p.get_sample_size(FORMAT))
        wf.setframerate(RATE)
        wf.writeframes(b''.join(frames))
        wf.close()  
        transcription=master_ai.transcribe_file(WAVE_OUTPUT_FILENAME)
        print(transcription)
        master_ai.send_text(transcription)
 rclpy.spin_once(master_ai)
        
 master_ai.destroy_node()
 rclpy.shutdown()

if __name__ == "__main__":
    main()
