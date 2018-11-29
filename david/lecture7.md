# Lecture Report 7

## Nodes

### node.conf

- Contains the configuration for a single node of a ulnoiot system.
- The node can be a network node or a device of IoT
- The type of board the node is running on is specified here (e.g. esp8266)
- The name of the MQTT topic is also specified here (for sending/receiving MQTT messages through the broker)
- MQTT access information is specified here if none are given defaults are taken from system configuration
    - mqtt_server
    - mqtt_user
    _ mqtt_password

    
Overrides all information from other config files

    
### config.txt, etc/ulnoiot.conf, system.conf -> how do they influence environment variables for compiling?

config.txt is responsible for the setting of "uiot_ap_name" and "uiot_ap_password". This defines the parameters for the pi as a wifi-router.

system.conf is the configuration file for the ulnoiot system
- set password and name of accesspoint

The impact of the configuration files depends on in what order they are sourced. 

1. system.conf
2. etc/ulnoiot.conf
3. boot.conf
4. node.conf 

### PlatformIO

- IDE for IoT
- Built on top of Atom and VSCode (Plugin for VSCode)
- Open Source
- Cross-platform IDE
- Unified debugger
- Remote unit testing
- Remote firmware updates
- Big Library Registry
- Project Dependency Manager
- Written in Python, does not depend on additional libaries/tools

It is not really a complete IoT framework, but rather just an IDE.

### Trace deploy

Prepares compile cache
Copies source depending on board used (e.g. /lib/node_types/esp8266/*)
Links the sources
Creates WiFi and global config files (wifi-config.h, config.h files)

Why can only one deploy run at once?

- Speed, so it doesn't take 10 minutes to deploy
- Single processing seems to be faster in this case

### What are the common functions a device supports?

### How to write a driver?

#### VL53L0X

Distance sensor library (Time-of-Flight Distance Sensor)

Register offsets are defined in the header file.
Functions for writing/reading the registers
setAddress -> Can set new adress for the device

Functions for changing signal rate, setting timeouts
