#!/usr/bin/python
import lgpio as GPIO
import pyaudio
import wave
import time

FORMAT = pyaudio.paInt16
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

while True:
    print('waiting for button event')
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
            print('continue')
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



    
