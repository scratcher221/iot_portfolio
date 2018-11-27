# Project 1 report

## Setting things up

At first we only worked directly in the Arduino IDE, without Node Red or another web interface. 

We connected a mechanical relay to the board, and a RGB LED. We coded a loop function that periodically toggled the relay and modified the state of the LED.

## Scenario

The scenario takes places in a secured room in a bank for money printing. There needs to be certainty that the humidity in the room is not too high, otherwise some security features like the watermark can be damaged. Because of this we developed a system that monitors the humidity in this room, combined with a security procedure that is carried out if something goes wrong.

Components:
- Humidity sensor
- Speaker for producing alarm noise
- Air drying device (represented by relay)
- Button to control the system
- RGB LED for indicating state of the system

The humidity sensor is placed close to where the money is created. When the value returned by this sensor reaches a certain threshold, the alarm goes off, which can be heard in the entire facility. The supervisor is notified by this, and makes his way to the money printing room. There he can press a button that turns off the alarm and activates a machine that regulates the moisture in the air. 

Story:

Max (the supervisor) sits at his office table drinking coffee, it is a ususal day. All of a sudden he hears a shrill noise coming from downstairs. He suspects that it comes from the money printing room, so he rushes towards it because an error in this process could cause a lot of trouble in the bank. When he arrives there, he can indeed confirm that the noise was generated from the speaker in the system that is set up there to secure the printing process.
Immediately, he presses a button on his controlling remote, to turn off the alarm, and activate the security procedure. Following that, the device for regulating air moisture is activated, and an RGB indicator LED goes off, to show everyone working in the bank that this regulating device is now active. Also, the money printing process is interrupted while this device is active, because it generates air turbulence in the room, which could cause chaos if the process resumes.
After a while, the air moisture level reaches acceptable levels again, and the regulating device shuts off automatically. The RGB LED also turns off, showing everyone working there that the incident is under control again, and the money printing process can resume.

