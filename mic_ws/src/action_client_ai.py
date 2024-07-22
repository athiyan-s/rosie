import json
from rclpy.node import Node
from std_msgs.msg import String
import rclpy
from prototype.action import GoTo,FoodMenu,AiCamera
from rclpy.action import ActionClient

import lgpio as GPIO
import pyaudio
import wave
import time
import os
import sounddevice as sd
import vosk
import queue

from google.cloud import speech

#model_path = "/home/rosievoice/main_ws/mic_ws/src/vosk-model-small-en-us-0.15"

#FORMAT = pyaudio.paInt16
CHANNELS = 1
RATE = 44100
CHUNK = 512
RECORD_SECONDS = 5
WAVE_OUTPUT_FILENAME = "rec41000.wav"
#audio_info = p.get_device_info_by_index(0)
#print (audio_info)

#GPIO pin setup for button
ledPin = 18
buttonPin = 23
h = GPIO.gpiochip_open(0)
#set up GPIO using BCM numbering
GPIO.gpio_claim_input(h, buttonPin, GPIO.SET_PULL_UP)
button_state = GPIO.gpio_read(h, buttonPin)

class MasterAi(Node):    

    def __init__(self):
        super().__init__("masterAi_Node")
        self.timer=self.create_timer(1,self.local_ai_master)
        self._action_client = ActionClient(self,AiCamera, '/AiCamera')
        self.ai_voice=''

    def send_text(self,user_input):
        msg=String()
        goal_msg=AiCamera.Goal()
        goal_msg.user_request=user_input
        self._action_client.wait_for_server()
        self._send_goal_future=self._action_client.send_goal_async(goal_msg,feedback_callback=self.feedback_callback)
        rclpy.spin_until_future_complete(self,self._send_goal_future)
        self.goal_handle=self._send_goal_future.result()
        if not self.goal_handle.accepted:
            print('rejected')
            return
        self.result_future=self.goal_handle.get_result_async()
        rclpy.spin_until_future_complete(self,self.result_future)
        self.ai_reply=self.result_future.result().result.ai_end
        #print(self.ai_reply)
        print(self.ai_voice)
        self.ai_voice=''
        

    def feedback_callback(self,feedback_msg):
        print('ok')

        #self.get_logger().info(f'Feedback: x={feedback}')
        return
   

    def local_ai_master(self):
        self.timer.cancel(

        )
        #self.send_text(1)

    def transcribe_file(self,speech_file: str) -> speech.RecognizeResponse:
        """Transcribe the given audio file."""
        global transcription
        client = speech.SpeechClient()
        speech_file='/home/rosie/main_ws/mic_ws/rec41000.wav'
        with open(speech_file, "rb") as audio_file:
            content = audio_file.read()

        audio = speech.RecognitionAudio(content=content)
        config = speech.RecognitionConfig(
            encoding=speech.RecognitionConfig.AudioEncoding.LINEAR16,
            sample_rate_hertz=44100,
            language_code="en-US",
        )

        response = client.recognize(config=config, audio=audio)

        # Each result is for a consecutive portion of the audio. Iterate through
        # them to get the transcripts for the entire audio file.
        if response.results:
            for result in response.results:
                print(f"Transcript: {result.alternatives[0].transcript}")
                transcription=result.alternatives[0].transcript
        else:
            print("No results found in the response.")


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
        master_ai.transcribe_file(WAVE_OUTPUT_FILENAME)
        print(transcription)
        master_ai.send_text(transcription)
 rclpy.spin_once(master_ai)
        
 master_ai.destroy_node()
 rclpy.shutdown()

            
    
if __name__ == "__main__":
    main()
