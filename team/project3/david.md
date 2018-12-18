# Project 3 - Part David

## Automatic Water Refill System

The project was realized and built with Node-RED in combination with the UlnoIOT-Framework

Sensors used:
- Acoutstic Distance Sensor HC-SR04

Actors used:
- Electronic Water Pump
- Relay Module

Setup:

The relay module was interposed to the power supply of an electronic water pump. In this way, the power supply of the pump could be controlled via MQTT messages.
This was the full setup used for testing:

![water_refill_setup](https://github.com/scratcher221/iot_portfolio/blob/master/david/water_refill_setup.jpg)

The control flow was realized in Node-RED:

![water_refill_node_red](https://github.com/scratcher221/iot_portfolio/blob/master/david/water_refill_node_red.PNG)

For programming the two Wemoses UlnoIOT was used.

Structure of the project:

![water_refill_ulnoiot](https://github.com/scratcher221/iot_portfolio/blob/master/david/water_refill_ulnoiot.PNG)

The source code for the two nodes is pretty straightforward.

Water Level Sensor setup.cpp:

```
hcsr04(water_level, D0, D5).with_precision(5);
```

Pump Relay setup.cpp:

```
relais(pump, D1, "pump on", "pump off").set("pump off");
```
