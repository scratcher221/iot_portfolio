# Lab Protocol 8

## Project 2 - Testing sensors

### Distance Sensor HC-SR04

We connected the HC-SR04 to the Wemos D1 Mini and wrote code in the Arduino IDE to test it. We logged the output values from the sensor in the debugging console. Distances greater than 5 meters seem to be a challenge, at this point the sensor reports values that are far too great. For instance, measuring to the other wall of the classroom, the sensor reported a value of 3350cm (more than 30m! -> the realistic distance, however, is only around 8-10 meters).
When we conducted experiments with lower distances, everything worked as it should, e.g. measuring the distance of the water in a cup from the sensor in the range of 1 - 10 cm worked fine.

![acoustic_distance](https://github.com/scratcher221/iot_portfolio/tree/master/team/8/images/water_level_acoustic.jpg)

These are the values we observed in the log of the debugging console in the Arduino IDE:

![acoustic_values](https://github.com/scratcher221/iot_portfolio/tree/master/team/8/images/values_acoustic.jpg)

### Raindrop Sensor

The next sensor we tested was the raindrop sensor. 

![raindrop_waterlevel](https://github.com/scratcher221/iot_portfolio/tree/master/team/8/images/water_level_raindrop.jpg)

These are the values we observed:

![raindrop_values](https://github.com/scratcher221/iot_portfolio/tree/master/team/8/images/values_raindrop.jpg)

### Scale

Next up was the scale. We connected the scale to the Wemos D1 Mini. One problem we faced was that the weighing plate was loose, so we had to get a screwdriver to tighten the screw with which it is fixated onto the rest of the unit.
The values we observed were not accurate when we tested it with the standardized metal weights. Some calibration had to be done.
The scale reports the values via MQTT to the broker. To calibrate, one needs to publish onto the topic "scale/scale/calfactor". We had to experiment for a bit to find the right value for this factor. The right factor in our case was 424.

This was the setup for the experiment:

![scale_setup](https://github.com/scratcher221/iot_portfolio/tree/master/team/8/images/scale_setup.jpg)

![scale_setup2](https://github.com/scratcher221/iot_portfolio/tree/master/team/8/images/scale_setup2.jpg)

The values were observed in the MQTT.fx application GUI:

![scale_values](https://github.com/scratcher221/iot_portfolio/tree/master/team/8/images/scale_values.jpeg)

#### Scenario

With the scale we can detect how much liquid is in the container exactly. This could be used for monitoring the amount of excess water in the boat and transmitting this value to the central system monitor.

### Laser Emitter and Photo Resistor

We connected the laser emitter to the Wemos D1 Mini (GND and 3V). This emits a red laser beam. The receiver (photo resistor) is connected to GND and 3V and a digital port. We could have connected the laser emitter to a digital port too (for turning it on and off), however we decided to simply let it on all the time.

The lower values of the photo resister, the more light is received by the sensor. If the values are very high, it means that almost no light is received by it, which indicates that the threshold mark is reached.

Photo of the setup:

![laser_emitter_float](https://github.com/scratcher221/iot_portfolio/tree/master/team/8/images/laser_emitter_float.jpg)

#### Scenario

First thought:
The container is marked at a certain level that indicates whether it is full or not. The laser emitter is pointed at this mark, and the photo resistor is placed at the opposite side of the container. This works well for liquids that interrupt the laser, like very dirty water or thick, dark oil. 
Improving this idea:
A floating object which interrupts light (like a piece of cardboard or something) is put into the water. That way every kind of liquid can be used, even clear water.
In this way, we cannot use this to monitor the exact level of a liquid, but it can be useful for containers that only need to signal when they reach a certain threshold, or fall below a certain threshold (excess water, waste water, oil, gasoline tank)
### Reed Switch

We put a magnet that floats in the water (attached to a cork) in front of the reed switch. This should work by closing the switch when a certain threshold is reached. However, in our case this did not work because the magnet was too weak.

In theory it should work like this:

When the output from the reed switch is LOW then the vessel is full. When the ouput is HIGH, it means that the threshold has not been reached yet.

Photo of the setup:

![reed_switch](https://github.com/scratcher221/iot_portfolio/tree/master/team/8/images/reed_switch_float.jpg)

### Mercury Switch

The mercury switch has a similar functionality to a tilt switch. 

Photo of the setup, position 1:

![mercury_switch1](https://github.com/scratcher221/iot_portfolio/tree/master/team/8/images/mercury_switch_pos1.jpg)

Photo of the setup, position 2:

![mercury_switch2](https://github.com/scratcher221/iot_portfolio/tree/master/team/8/images/mercury_switch_pos2.jpg)

#### Scenario

An arm that is fixed onto a rotational axis rotates as the water level rises. The mercury switch is attached to this arm. When the arm is parallel to the water level, it means the threshold is reached. The mercury switch flips when the arm is at that level and sends a signal which indicates that the container is full.

### Water Level Challenge

| Sensor | Clear Water | Dirty Water | Oil |
|--------|-------------|-------------|-----|
| Acoustic Distance | Works well | Works well | The measurement was not very accurate, because of different reflections |
| Raindrop Sensor | Works reasonably well, but corrodes after a while (metal electrodes in water)   | Works reasonably well, but corrosion is a problem | does not work |
| Scale | Works well | Works well | Works well |
| Laser Emitter and Photo Resistor | Works well | Works well | Works well |
| Reed Switch | Did not work | Did not work | Did not work |
| Mercury Switch | Works well | Works well | Works well |
