# Lecture Report 6

## Sensing and Acting

### Research about sensors:

- Smoke sensor mq2:

#### Relay with attached solenoid lock

- Solenoid:
A solenoid is a coil whose winding is cylinder shaped and the winding is quite thin compared to the cylinder diameter. The special purpose of a solenoid is to create a spatially constant magnetic field. When an electric current is applied, this magnetic field can change, thus e.g. attrackting/repulsing other magnets.

- Relay:
A relay is simply a mechanical switch that gets triggered when an electric current is applied. When a solenoid is attached to this relay, it can be used to lock objects, e.g. doors, boxes, etc.

## UlnoIoT Live Demo

### Features:

First 1 and then 5 blinking signals on startup. After that you can move it to a different Wifi network. 
There is a graphical overview of the folder structure in the Web UI.

#### How to connect relay, add display:

All commands are written in a web terminal in the browser
Commands:

```
"initialize" for first setup.
"uhelp" to list available commands.
output(r1, D1).set("off") -> To initialize relay with state off
"deploy" to flash it onto the controller. (OTA update)
edge_counter(left, "b1", D2) -> to count rising and falling edges
deploy
display(dp1, font_large) -> To initialize display
deploy
mqtt_send dp1 hello -> To test the display
mqtt_send dp1 "&&clear &&goto 3 3 hello" -> positioning, deleting
```

Adoption (callback thing with the gauge)?

### Questions for our project:

Does UlnoIoT support mass deployment?
Does it support debugging?
Does it have extensive documentation?
