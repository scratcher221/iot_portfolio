# Project 3 - Part Roman
## Open/Closed Window Detection System
### Description
With the Open/Closed Window Detection System it is possible to detect, as the name already sais, opened windows at home.
With the Android App it is easy to monitor the current state of the window.
The system consists of one esp8266 chip and a reed switch. With the help of a magnet it is now possible to detect the changing states.

### How To
There is a sensor for each window inside the house. It publishes the state (open/closed) in a fixed time interval.
Should the state change, it publishes the changed value immediately with the use of MQTT. 

![reed_switch](https://github.com/scratcher221/iot_portfolio/tree/master/team/project3/windowsensor.jpeg)

It is possible to detect the state due to the fact of using a reed switch. A magnet that is placed on the opposite side of the reed switch, so a state change triggers the switch.

![reed_switch_placed](https://github.com/scratcher221/iot_portfolio/tree/master/team/project3/reed_switch_placed.png)

`Code inside file window_detection_system`


## Garage Door Opening System
### Description
With the Garage Door Opening System it is possible to open and close the garage remotely, without going to the garage and entering the pin manually.
The opening and closing is maintained by a simple android app.
The system consists of an esp8266 chip and a relay. If the MQTT is triggered, the esp8266 switches the relay and the garage opens up.

### How To
The esp8266 listenes to a specific MQTT topic, and if it gets a command, it switches the relay. The relay simply connects two contacts together and enables opening the garage.
In my example, the relay switches a door.

![relay](https://github.com/scratcher221/iot_portfolio/tree/master/team/project3/relay.jpg)

`Code inside file garage_door_opening_system.ino`


## Android App for monitoring window state and opening garage door
### Description
The Android App connects the two systems (Window Detection, Garage Opening System) together.
It is a simple bridge between the user and the systems.

### How To
The Android App was built with a MQTT Support Library. It is possible to send, as also to receive values. What it does, is, that it simply sends commands
to the relais and reads the state of the windows, according to the screens.
![relay](https://github.com/scratcher221/iot_portfolio/tree/master/team/project3/overview.jpg)
![relay](https://github.com/scratcher221/iot_portfolio/tree/master/team/project3/window.jpg)
![relay](https://github.com/scratcher221/iot_portfolio/tree/master/team/project3/garage_relais.jpg)