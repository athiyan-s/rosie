import os
import queue
import sounddevice as sd
import vosk
import json

model_path = "/home/rosievoice/main_ws/mic_ws/src/vosk-model-small-en-us-0.15"  # Update this to your model path

if not os.path.exists(model_path):
    print ("Please download the model from https://alphacephei.com/vosk/models and unpack as 'model' in the current folder.")
    exit (1)

q = queue.Queue()

def callback(indata, frames, time, status):
    if status:
        print(status, file=sys.stderr)
    q.put(bytes(indata))

model = vosk.Model(model_path)
recognizer = vosk.KaldiRecognizer(model, 16000)

with sd.RawInputStream(samplerate=16000, blocksize=8000, dtype='int16',
                       channels=1, callback=callback):
    print('#' * 80)
    print('Press Ctrl+C to stop the recording')
    print('#' * 80)

    while True:
        data = q.get()
        if recognizer.AcceptWaveform(data):
            result = recognizer.Result()
            print(json.loads(result)['text'])
        else:
            partial_result = recognizer.PartialResult()
            print(json.loads(partial_result)['partial'])