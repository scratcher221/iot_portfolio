# Lab protocol 1

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

Problems we faced:
- Cable wasn't working properly
- Drivers weren't installed properly (restarting the system solved the problem... yeah it was that easy...)

Remote access:
- https://github.com/esp8266/Arduino/blob/master/libraries/ESP8266WebServer/examples/HelloServer/HelloServer.ino
- Using a webserver example from github, we modified this example to match our parameters for logging in (wifi name and password)


# Lab protocol 2

## Exercise 1

Troubleshooting:
- Unfortunately, the button we used for triggering the remote event, was defective, so we wasted a lot of time trying to figure out why it didn't work.
- We exchanged this defective button to a working one.
- For the button, which triggers a HTTP POST, first we set up the IFTTT WebHook:
    - Download the IFTT Android App.
    - Log into the App using a Google account
    - Create a new applet, which receives requests via a Webhook (Select Webhooks as the trigger service)
    - Define in the applet settings, that a notification should be sent when the trigger is received.
- The notification is only triggered when directly making the HTTP POST request in the browser, pressing the button did not work on the first try.
    - The problem could lie in the fact that we used a library to craft the POST request, instead of creating it ourselves in the script on the ESP 8266 board.
    - We solved this by using a library which implements a simple HTTP client, and defining the POST request ourselves.
- Another problem that occures was spamming of notifications, by failing to declare that the HTTP request should be fired by pressing the button, and instead firing it when the button is NOT pressed. This resulted in hundreds of notifications from the IFTTT app.

## Exercise 2

We use the following tutorial to control the IC2 LCD: https://www.sunfounder.com/learn/Sensor-Kit-v2-0-for-Arduino/lesson-1-display-by-i2c-lcd1602-sensor-kit-v2-0-for-arduino.html

Setting things up:
- Connect the 4 wires from the IC2 LCD to the ESP 8266 board on the required pins. (GND to GND, VCC to 5V, etc...)
- The library <LiquidCrystal_I2C.h> is used to communicate with the display
- The message "HELLO WORLD" is printed to the display.
