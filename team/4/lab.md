# Lab protocol 4

## Exercise 1 (MongooseOS)

This is the tutorial we've worked on https://mongoose-os.com/docs/quickstart/setup.md

First, we've cloned the git repo https://github.com/cesanta/mos-tool, built it and started up the mos tool.
It didn't work out the first time, cause we haven't had installed the library govendor on our pc. After installing that package the installation succeeded.
Calling mos displays the GUI of the tool.

Inside the tool, we select the device ESP8266 and the port USB0.

After setting things up, follow the tutorial step-by-step located at the same url as above (https://mongoose-os.com/docs/quickstart/setup.md). 
There, you create an app, build it and flash it on the esp8266 afterwards.

We had issues with editing the init file because it was absent. After researching for an hour, we found out that the file wasn't even missing, but just not being displayed in our window. WOW!
We just simply opened up the file and connected a button to our board. GND to GND, V to V3 and SIG to D3.

We tried to do the Click-Button-And-Turn-On-LED-Thing, but it didn't work at the beginning. We weren't able to build and flash the device. There was a Segmentation Fault error.
Afterwards, we just built and flashed it OTA and it did work, as you can see in the picture.
![mongoose_os](https://github.com/scratcher221/iot_portfolio/blob/master/team/4/images/mongoose_os_altered_firmware.png)

The mongoose-dashboard now shows our device like that:
![mongoose_dashboard](https://github.com/scratcher221/iot_portfolio/blob/master/team/4/images/mongoose_dashboard.png)

---

In order to connect a sensor to our device, we were following that tutorial: https://mongoose-os.com/docs/quickstart/develop-in-c.md

### App 1

The first app was simply a clone of the app template provided in the tutorial, only slightly modified. We modified it in such a way, that a custom message is output on button click, and the blue LED is toggled on/off. The source code can be found here: 

### App 2

The second app was built almost from scratch. We downloaded the skeleton app from the tutorial and modified the logic by editing the main.c source file to be used. We added a timer functionality that reports the output of a certain sensor in a specified time interval. The sensor used was the "Humiture Sensor" (DHT11).

Here is a screenshot of the result:

![mongoose-humidity-log](https://github.com/scratcher221/iot_portfolio/blob/master/team/4/images/mongoose_os_humidity_log.png)

In the screenshot one can see that the app periodically executes a timer that queries data from the humiture sensor.
