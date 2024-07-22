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
import time
import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node
from prototype.action import AiCamera
from ollama import chat
import ollama
from google.cloud import texttospeech
from pygame import mixer
import logging


logging.basicConfig(level=logging.DEBUG)
try:
    mixer.init()
except Exception as e:
    logging.error(f"An error occurred while initializing the mixer: {e}")


class CoActionServer(Node):

    def __init__(self):
        super().__init__('fibonacci_action_server')
        self._action_server = ActionServer(
            self,
            AiCamera,
            '/AiCamera',
            self.execute_callback)
        self.ai_voice=''
        self.client = texttospeech.TextToSpeechClient()   

    def execute_callback(self, goal_handle):
        self.get_logger().info('Executing goal...')
        goal=goal_handle.request.user_request
        print(f'YOU: "{goal}"')
        feedback_msg=AiCamera.Feedback()
        stream = ollama.chat(
        model='MistCom:latest',
        messages=[{'role': 'user', 'content': f'Below is an instruction that describes a task, paired with an input that provides further context. Write a response that appropriately completes the request.\n### Instruction:\n{goal}\n### Input:\n\n### Response:'}],
        stream=True,
        )

        print(f'ASSISTANT: ')
        for chunk in stream:
            feedback_msg.ai_response=chunk['message']['content']
            self.ai_voice+=chunk['message']['content']+''
            goal_handle.publish_feedback(feedback_msg)     
            print(chunk['message']['content'], end='',flush=True)
           
        print()
        synthesis_input = texttospeech.SynthesisInput(text=self.ai_voice)

        # Build the voice request, select the language code ("en-US") and the ssml
        # voice gender ("neutral")
        voice = texttospeech.VoiceSelectionParams(
            language_code="en-US", ssml_gender=texttospeech.SsmlVoiceGender.FEMALE
        )

        # Select the type of audio file you want returned
        audio_config = texttospeech.AudioConfig(
            audio_encoding=texttospeech.AudioEncoding.LINEAR16
        )

        # Perform the text-to-speech request on the text input with the selected
        # voice parameters and audio file type
        response = self.client.synthesize_speech(
            input=synthesis_input, voice=voice, audio_config=audio_config
        )

        # The response's audio_content is binary.
        with open("/home/tolasing/main_ws/ml_ws/action_server/scripts/output.wav", "wb") as out:
            # Write the response to the output file.
            out.write(response.audio_content)
            print('Audio content written to file "output.wav"')
            mixer.music.load('/home/tolasing/main_ws/ml_ws/ai_server/scripts/output.wav')
            mixer.music.set_volume(10)
            mixer.music.play()
            while mixer.music.get_busy():
                pass


        print(feedback_msg.ai_response)
        goal_handle.succeed()

        result = AiCamera.Result()
        result.ai_end="."
        self.ai_voice=''
        return result
        #rclpy.shutdown()

def main(args=None):
    rclpy.init(args=args)

    fibonacci_action_server = CoActionServer()

    rclpy.spin(fibonacci_action_server)


if __name__ == '__main__':
    main()
    

