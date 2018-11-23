# Project 1 report

## Setting things up

At first we only worked directly in the Arduino IDE, without Node Red or another web interface. 

We connected a mechanical relay to the board, and a RGB LED. We coded a loop function that periodically toggled the relay and modified the state of the LED.

## Scenario

A relay controls both a status LED and an electronic heating unit. The relay is triggered by the following three sensors:
- temperature sensor
- humiture sensor
- light level sensor

When one of the values of the sensors (temperature or humiture) reaches a certain threshold a device for improving the air quality is turned on. When the light value in the room is too low (light level sensor) an RGB LED is turned on, so the information on the air improvement device is readable.
