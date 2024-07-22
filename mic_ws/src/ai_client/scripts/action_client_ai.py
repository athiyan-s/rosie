#! /usr/bin/env python3

# Copyright 2021 Samsung Research America
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
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

from google.cloud import speech
import wave
import sys

from vosk import Model, KaldiRecognizer, SetLogLevel

FORMAT = pyaudio.paInt16
CHANNELS = 1
RATE = 44100
CHUNK = 512
RECORD_SECONDS = 5
WAVE_OUTPUT_FILENAME = "/home/rosie/main_ws/mic_ws/src/ai_client/rec41000.wav"
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
        self.eye_pub=self.create_publisher(String,'/eye_expression',10)

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
        self.ai_voice=''
        

    def feedback_callback(self,feedback_msg):
        
        #self.get_logger().info(f'Feedback: x={feedback}')
        return
   

    def local_ai_master(self):
        self.timer.cancel(

        )
        #self.send_text(1)

    def transcribe_file(self,speech_file: str):
        global transcription

        wf = wave.open("/home/rosie/main_ws/mic_ws/src/ai_client/rec41000.wav", "rb")
        if wf.getnchannels() != 1 or wf.getsampwidth() != 2 or wf.getcomptype() != "NONE":
            print("Audio file must be WAV format mono PCM.")
            sys.exit(1)

        model = Model(lang="en-us")

        # You can also init model by name or with a folder path
        # model = Model(model_name="vosk-model-en-us-0.21")
        # model = Model("models/en")

        rec = KaldiRecognizer(model, wf.getframerate())
        rec.SetWords(True)
        rec.SetPartialWords(True)

        while True:
            data = wf.readframes(4000)
            if len(data) == 0:
                break
            
            if rec.AcceptWaveform(data):
                rec.Result()
            else:
                rec.PartialResult()
            

        result=rec.FinalResult()
        transcription_dict = json.loads(result)
        text_value = transcription_dict["text"]
        transcription=text_value


def main(args=None):
 rclpy.init(args=args)
 msg=String()
 master_ai=MasterAi()
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
        msg.data="listening"  
        master_ai.eye_pub.publish(msg)
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
        master_ai.send_text(transcription)
 rclpy.spin_once(master_ai)
        
 master_ai.destroy_node()
 rclpy.shutdown()

            
    
if __name__ == "__main__":
    main()
