# 7. Lecture
## Which topic needs to be called with what to
- switch on the coffee machine?
    - kitchen/coffee-machine/switch/set
- set all lights in the living room to blue
    - living_room/leds1/rgb/set blue
    - living_room/leds2/rgb/set blue
- turn the main power off?
    - main/switch/set

## What is the general rule for forming topics in UlnoIoT?
- When you define devices, the names are saved inside setup.cpp

## When does it make sense to change sometihng in system.conf?
- If you move it one level up, myhouse becomes an own topic.
- When the mqtt server is running remotely (somewhere else than on the raspberry)

##What needs to/can go into node.conf?
- Adapt and configure system.conf and node.conf. Especialy make sure to add the correct board in node.conf. If you use a Wemos D1 Mini (this is the default), no change is necessary here, lots of users have the NodeMCU development board. If you want to use a NodeMCU, change the config to NodeMCU.
- Open the sd-card on your pc. You will see a file named config.txt Edit this file and scroll to the bottom. Change and uncomment the options uiot_ap_name and uiot_ap_password to your own values, remember the password you set in uiot_ap_password. This configures the pi as a wifi-router. Make sure that uiot_ap_password is longer than 8 characters.
- Set the board type

## How do config.txt, etc/ulnoiot.conf, system.conf and node.conf influence environment variables for compiling?
- Consider to configure etc/ulnoiot.conf and run accesspoint and mqtt_broker. If you installed from the Raspberry Pi image, this should not be necessary as they are started automatically.
- Adapt and configure system.conf and node.conf. Especialy make sure to add the correct board in node.conf. If you use a Wemos D1 Mini (this is the default), no change is necessary here, lots of users have the NodeMCU development board. If you want to use a NodeMCU, change the config to NodeMCU.
- system.conf --> - Set the MQTT Host, Set the AP Name and Password
- all the variables that are defined in ulnoiot are being loaded, for example the ones from system.conf
- if you start ulnoiot, all variables from etc/ulnoiot.conf and config.txt are loaded. (like environment variables). if you compile something, it reads the system.conf, it reads the config.txt and etc/ulnoiot.conf and just the node.conf at the end overrides everything.

## Count how many of your preferred features are supportd by UlnoIoT- compute vs total?
- in total 70% of the features are supported.

## Read about PlatformIO, in how far does it qualify as IoT Platform?
- its good because you can debug own-written software, which isn't possible inside the arduino ide for example.
- not really an iot platform.
- easy development platform
- many supported devices

## Analyze and understand the analog driver (header and cpp), note down remarkable features
- for example in Output, it created the subdevice out and adds to the construction of the topic
- it adds the functions start, measure, with_threshold, with_precision, read_float, read_int, write_float, write_int

## Analyze and understand the I2C_Device
- What functionality does it add?

## Analyze the new VL530L0X driver
- How could you implement a driver for the BMP180/TSL2561/MPR121 based on this?
- Write a small strategy

## Device
### What are the common functions, devices support?
* Send MQTT messages
* measure values, poll measures
* check for changes
* add subdevices

### What is the “fluent interface”?
* a method for designing object oriented APIS based extensively on method chaining
* goal is making the readability of the source code close to source coe of ordinary writen prose
* creating a domain-specific language
* example
~
mock.expects(once()).method("m").with( or(stringContains("hello"),
                                          stringContains("howdy")) );
~
### Which functions need to be overwritten?
* function virtual void measure_init() {};
* function virtual void start() { _started = true; } 
* function virtual bool measure() { return true; }

### In which order and when are the overwritten functions called?
* order
  * function virtual void measure_init() {};
  * function virtual void start() { _started = true; } 
  * function virtual bool measure() { return true; }

### What is a Subdevice (look at output for example)?
* kind of a subtopic


## How to write a driver

### Analyze and understand the analog driver (header and cpp), note down remarkable features.
* for example in Output, it created the subdevice out and adds to the construction of the topic
* it adds the functions start, measure, with\_threshold, with\_precision, read\_float, read\_int, write\_float, write\_int

### Analyze and understand I2C_Device
* What functionality does it add?
 - start, measure, measure\_init, clear\_bus init\_i2c, i2c\_start
 - to initialize and read devices connected with I2C

### Analyze the new VL53L0X driver
Distance sensor library (Time-of-Flight Distance Sensor)

Register offsets are defined in the header file.
Functions for writing/reading the registers
setAddress -> Can set new adress for the device

Functions for changing signal rate, setting timeouts