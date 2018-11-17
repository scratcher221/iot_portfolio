# Lecture Report 2

## Researching some buses

### RS-232

The name RS-232 stands for "Recommended Standard 232". It is a standard defined for a serial interface used to facilitate communications between personal computers. The standard was developed in the early 1960s by the US standardizing committee EIA.

The maximum length of wire depends on the transfer speed. At low speeds (approx. 2.4 kBit/s) up to 900m are possible. At the maximum rate of 115 kBit, the length cannot be more than 2 meters. In this standard, there is a listen state and a communicate (send) state.

An example for this standard being used in practice, was the COM-Port of PCs. This is a RS-232 interface, colored blue green. 

Since this standard is quite old, it is hardly used anymore nowadays. There are more reliable and faster solutions on the marked these days, like USB.

### I2C

I²C is serial databus developed by Philips. The main use case is device internal communication between different parts of the circuitry. An example for this would be controller and peripheral integrated circuits.

Originally, the bus was used by Philips for communication between ICs in e.g. CD Players and TVs. The transfer speed was quite slow initially, namely 100 kbit/s (Standard mode), and 400 kbit/s (Fast mode). Over the years this was improved, for instance version 2.0 enabled transfer speeds up to 3.4 Mbit/s, and version V.4 in 2012, which enabled a transfer rate of up to 5 Mbit/s.

The concept of the bus system is the master-slave-bus. Data transfer is always initiated by the master and the slave that is addressed reacts to it. There is also the option of a multi-master mode. It is possible for a master to be a slave also, in this case one master can communicate directly with another master by referring to it as a slave.

The databus is designed for being half-duplex capable (bidirectional communication possible, however not at the same time).

### SPI

SPI stands for "Serial Peripheral Interface" and was developed by Motorola in 1987. It is a standard for a synchronous, serial data bus. It also works by the master-slave principle.

There are three shared wires that each participant shares:
- SCLK (serial clock), used by master to synchronize.
- MOSI = master output, slave input
- MISO = master input, slave output

One ore more chip-select wires, e.g. SS (slave select), possibly with indexes.

This communication channel is full-duplex capable, so data can be transmitted simultaneously in both directions. Different clock frequencies up to the MHz range are possible.

Usage:
- Audio
- Measurment applications (temperature, pressure)
- Data transmission between microcontrollers

The transmission speed is faster than I2C, implementations over 10MBit/s are known.

### Onewire

Onewire is a serial interface designed by the company "Dallas Semiconductor Corp.". The connection is serial and biderectional, with a shared wire for sending and transmitting. It is half-duplex capable and transmission is done asynchronously, with no synchronizing clock signal.

Data is transmitted according to the One-Master/Multi-Slave principle. There can only be one master, but up to 100 slaves (sensors, storage, etc.).

There is no need for external power input, the slaves get power from an internal capacitor that is charged over the data wire. The voltage varies between 2.8 and 6 Volts.

The speed is slower than I²C, regular mode supports up to 16.3 KBit/s. The overdrive mode enables up to 142 KBit/s.

Usages:
- Measurement applications
- Battery monitoring
- Real time clock
- Small storage




