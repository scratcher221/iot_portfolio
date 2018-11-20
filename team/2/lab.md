# Lab protocol 2

## Exercise 1

Troubleshooting:
* Unfortunately, the button we used for triggering the remote event, was defective, so we wasted a lot of time trying to figure out why it didn't work.
* We exchanged this defective button to a working one.
* For the button, which triggers a HTTP POST, first we set up the IFTTT WebHook:
    * Download the IFTT Android App.
    * Log into the App using a Google account
    * Create a new applet, which receives requests via a Webhook (Select Webhooks as the trigger service)
    * Define in the applet settings, that a notification should be sent when the trigger is received.
* The notification is only triggered when directly making the HTTP POST request in the browser, pressing the button did not work on the first try.
    * The problem could lie in the fact that we used a library to craft the POST request, instead of creating it ourselves in the script on the ESP 8266 board.
    * We solved this by using a library which implements a simple HTTP client, and defining the POST request ourselves.
* Another problem that occures was spamming of notifications, by failing to declare that the HTTP request should be fired by pressing the button, and instead firing it when the button is NOT pressed. This resulted in hundreds of notifications from the IFTTT app.

Result:

![ifttt screenshot](https://github.com/scratcher221/iot_portfolio/blob/master/team/images/screenshot_ifttt.png)

## Exercise 2

We use the following tutorial to control the IC2 LCD: https://www.sunfounder.com/learn/Sensor-Kit-v2-0-for-Arduino/lesson-1-display-by-i2c-lcd1602-sensor-kit-v2-0-for-arduino.html

Setting things up:
- Connect the 4 wires from the IC2 LCD to the ESP 8266 board on the required pins. (GND to GND, VCC to 5V, etc...)
- The library <LiquidCrystal_I2C.h> is used to communicate with the display
- The message "HELLO WORLD" is printed to the display.

Result:

![working display](https://github.com/scratcher221/iot_portfolio/blob/master/team/images/working_display.jpg)
