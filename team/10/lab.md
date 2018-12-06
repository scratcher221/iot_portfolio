# Lab Protocol 9

## Setting up WeMos with UlnoIot
Our WeMos was already custom flashed with an other firmware, therefore we had to flash it again in the console via initialize serial.
We had several troubles with getting the sensor data out, after putting the sensor in deep sleep.

The code that finally worked was:
```
dht11(ht01, D1);

void start() {
    deep_sleep(10000, 30000);
}
```

Be careful: OTA Updates aren't possible anymore, if the device is in sleep mode. Every update failed, and we weren't able to find out why.
If you want to update the device after you have put it in sleep mode, you ahve to connect D3 and GND and restart the device.


Our Node Red Configuration is looking like that:
![node_red_configuration](https://github.com/scratcher221/iot_portfolio/tree/master/team/9/images/node_red_configuration.png)

Before deep sleep, the commands came in every few seconds:
![node_red_before_power](https://github.com/scratcher221/iot_portfolio/tree/master/team/9/images/node_red_before_power.png)

After deep sleep, you can see that the device is put into sleep mode, and wakes up after it gets the interrupt.
To get the interrupt, you have to connect D0 to RST.
![node_red_after_power](https://github.com/scratcher221/iot_portfolio/tree/master/team/9/images/node_red_after_power.png)

The power consumption of the WeMos with the temperature sensor was:
Before Low Power
![node_red_after_power](https://github.com/scratcher221/iot_portfolio/tree/master/team/9/images/before_power.jpeg)

After low power mode enabled (it jumped from the state before lower mode but consumed 0.0 after the low power mode was enabled)
![node_red_after_power](https://github.com/scratcher221/iot_portfolio/tree/master/team/9/images/after_power.jpeg)
