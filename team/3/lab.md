# Lab protocol 3

## Exercise 1 (COAP)

This is the library that we used: https://github.com/hirotakaster/CoAP-simple-library

We installed the CoAP library in the Arduino IDE, then the IDE needed to be restarted. The esp32 code was modified to match our SSID, which is "iotraspi". The Wifi library to be included was changed to <ESP8266Wifi.h>. We changed the assigned LED to "led_builtin".

### Installing the extension for Chrome

The extension for the chrome browser can be found at: https://github.com/mkovatsc/Copper4Cr
We cloned this repository on the target laptop and executed the install scripts found in the top-level folder (install.sh). Then the extension is installed by loading the extension from the local folder (click "Load unpacked" and select the firstly the folder "app" and secondly the folder "extension"). The last step was to update the app ID in the configuration file (extension/endpoint/ClientPortChrome.js) to the value found in the entry at "chrome://extensions"

We were then able to access the graphical web interface by clicking the "Cu" logo next to the address bar. In this interface one can make GET and POST HTTP requests. To control the LED the following steps were necessary:
- Set the value "0" in the "Payload" field.
- Click the "POST" button to send a HTTP POST request.

Troubleshooting:
- At first we were not able to control the LED, because we did not realize that it was LOW active.
- When we realized that, we sent a "0" instead of a "1" in the POST request.
- After this step, everything worked as it should.

## Exercise 2 (MQTT)

The MQTT.fx we used was obtained from: https://mqttfx.jensd.de/index.php/download

The version 1.7.1 was installed on the target machine. Some configuration had to be done to ensure everything works properly. The following configuration was used:
