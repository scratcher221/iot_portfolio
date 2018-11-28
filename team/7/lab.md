# Lab protocol 7

## Contiunue on Lab5, Exercise 1 - Rebuilding Project 1 with UlnoIoT
Yesterday we did set up the nodes with UlnoIoT and flashed them.
![mongoose_dashboard](https://github.com/scratcher221/iot_portfolio/blob/master/team/6/images/relay_led_mqtt_commands.png)

Today we worked on connecting sensors to the WeMos chips and wiring it via Node Red.
The problems we faced were:
* Deployment didn't work, the problem was that the board was in a false state and was rebooting every time it booted up.
* We resetted the device and connected Ground to D3.
* After that, initialize serial -command did solve the problem. After that, deploy did work again.

After setting the sensors up, we were able to get inputs via MQTT:
![picture](https://github.com/scratcher221/iot_portfolio/blob/master/team/7/images/mqtt_temperature.png)

In node red, we had to create a switch to set the rgb lights, cause the set values are "black" and "white" and we were sending 0 and 1.
![picture](https://github.com/scratcher221/iot_portfolio/blob/master/team/7/images/node_red_switch.png)

The final setup looks like that:
![picture](https://github.com/scratcher221/iot_portfolio/blob/master/team/7/images/node_red.png)
![picture](https://github.com/scratcher221/iot_portfolio/blob/master/team/7/images/finished_project_setup.png)
