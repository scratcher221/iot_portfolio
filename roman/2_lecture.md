# 2. Lecture
## Research on RS232 (1), I2C (2), SPI (3), Onewire(4)
* Onewire(4) = My group
    * provides:
    * low-speed data
    * signaling
power over a single conductor (Leiter)
similar to I2C, but has lower data rates and longer range
used for inexpensive communications like with digital thermometers
network of Onewire devices = MicroLAN
can use only two wires (data and ground), 3rd possible
often included as a single component in a product
Each Onewire chip has an unique identifier
for example key to open a lock
deactivate burglar alarms
Examples:
iButton (Dallas Key)
Java Ring
always 1 master in a MircoLAN, multiple slaves
cheap, easy to use, simple to use
64 bit address
Master communicates over address
Master: also commucates with skip-ROM command
voltage-based digital system
half-duplex, bidirectional
Usage
battery monitoring
real-time clock
flow measurements
wheather instruments
RS232 (1)
not often used
former used in modems, routers, switches, mouses and keyboards
speed depends on cable and wanted speed; the more the power, the shorter the cable
connections for listen state and communicate state
low-capacity ~ 300m; normal capacity ~ 15m
I2C(2)
low-speed periphal processors
low-cost, low-active bus working with different voltage
standard 100 kBit/s, fast mode 400 kBit/s, high-speed 3.4 MBit/s
usage
change volume of devices
for real-time clocks
fans in computers
two bidirectional connectors, serial data line, serial clock line
7-bit address space
master-slave mode
message protocol (master <-> slave)
SPI (3)
Serial Peripheral Interface
synchronous serial data bus
master-slave architecture
wires are
serial clock
master output
slave input
MOSI, MISO
full-duplex capable
usage:
audio
communications between micro controllers
air pressure, temperature, Micro SD card reader
distance: max. 3m
slave-select: enable/disable specific devices