# Lab protocol

Raspberry Pi tutorial: https://github.com/ulno/ulnoiot

Preparing the Setup for the Raspberry Pi:
- Flash the ulnoiot image to the SD card that will then be inserted into the Raspberry Pi using the tool Etcher. The full name of the image to be written is "ulnoiot-pi.img.xz". The image can be written from the program directly, there is no need to unpack the .xz file.
- There were no issues when flashing the file, however it can take some time to copy all the data to the SD card.
- The next step of configuration is to edit the configuration file on the sd card, namely "config.txt". The name and password of the wifi network need to be configured there.
- The name and password of the network accesspoint to control the pi is "iotraspi"

Accessing the pi over the network
- At first we tried to access the pi over via the address "https://ulnoiotgw", however this didn't work on the first try, so we did it via direct IP addressing.
- Point the Pi to the address "192.168.12.1"

Working with the Arduino:
- The tools for the Arduino board (ESP 8266) were not yet installed on the laptop we were working on, so we had to download the necessary tools first (Arduino IDE 1.8.5).
- The board is connected to the working laptop via a micro USB cable.
- The port "COM3" is selected for the connection via USB.
- A script called "blink" was written to control the LED on the Pi. 
- To initialize, one of the LED pins has to be defined as OUTPUT at first.
- The LED is turned off and on by alternating the voltages between HIGH and LOW
- This is done with the command "digitalwrite"
- There were some issues we encountered during the whole process:
    - The LEDs didn't respond to the instructions on the initial try.
    - We tried to troubleshoot this by installing additional drivers on Windows.
    - However, this didn't fix the problem unfortunately, so we tried to simply restart the IDE.
    - After this, an additional PORT "COM8" appeared in the IDE.
    - When selecting this port instead of "COM3", the LED started blinking.


