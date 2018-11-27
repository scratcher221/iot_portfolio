# Lab protocol 5

## Exercise 1 - Rebuilding Project 1 with UlnoIOT
We followed the tutorial at https://github.com/ulno/ulnoiot#first-iot-nodes.
Because flasing the devices to UlnoIOT is mandatory, we had to connect the devides to our raspberry pi and flash them.
How?
- Copy the folder lib/system_templates to a project directory, you can rename system_templates to a project name (i.e. iot-test-project)
- Rename the included node_template to a name for the node you want to configure (i.e. onboard_blinker)
- Adapt and configure system.conf and node.conf. Especialy make sure to add the correct board in node.conf. If you use a Wemos D1 Mini (this is the default), no change is necessary here, lots of users have the NodeMCU development board. If you want to use a NodeMCU, change the config to NodeMCU.
- Now change into your node directory, connect an (only one) esp8266 based microcontroller to your pc or raspberry/orange pi and type initialize serial. This flashes and pre-configures the device. If you use the inbuilt wifi configuration (like described in uhelp wifi), just use initialize to adopt the node via the network.
- If you like, access the debug console with console_serial (if only one esp is connected the serial port will be discovered automatically else supply it as usb1 or acm2).

We had several problems with flashing the device, so we changed the board name to esp8266 first and then back again to wemos d1 mini. After that, the flash process worked like a charm.

The third sensor we had to adapt, means, we should connect it to the wifi via resetting the wemos and then connecting to it via phone.
We resetted the sensor by connecting Ground to D3 twice.
![mongoose_dashboard](https://github.com/scratcher221/iot_portfolio/blob/master/team/5/images/relay.png)
After that, the sensor blinks and we were able to connect to it via wifi. 
![mongoose_dashboard](https://github.com/scratcher221/iot_portfolio/blob/master/team/5/images/wifi_set.png)

