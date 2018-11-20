# 2. Lecture
## Research on RS232, I2C, SPI, Onewire

* RS232
    * not often used
    * former used in modems, routers, switches, mouses and keyboards
    * speed depends on cable and wanted speed; the more the power, the shorter the cable
    * connections for listen state and communicate state
    * low-capacity ~ 300m; normal capacity ~ 15m
    * modern devices don't have rs232 port, using a adapter mandatory 
* I2C
    * low-speed periphal processors
    * low-cost, low-active bus working with different voltage
    * standard 100 kBit/s, fast mode 400 kBit/s, high-speed 3.4 MBit/s
    * usage
        * change volume of devices
        * for real-time clocks
        * fans in computers
        * two bidirectional connectors, serial data line, serial clock line
        * 7-bit address space
        * master-slave mode
        * message protocol (master <-> slave)
* SPI
    * Serial Peripheral Interface
    * synchronous serial data bus
    * master-slave architecture
    * wires are
    * serial clock
    * master output
    * slave input
    * MOSI, MISO
    * full-duplex capable
    * usage:
        * audio
        * communications between micro controllers
        * air pressure, temperature, Micro SD card reader
        * distance: max. 3m
        * slave-select: enable/disable specific devices
* Onewire
    * provides:
        * low-speed data
        * signaling
        * power over a single conductor (Leiter)
        * similar to I2C, but has lower data rates and longer range
        * used for inexpensive communications like with digital thermometers
        * network of Onewire devices = MicroLAN
        * can use only two wires (data and ground), 3rd possible
        * often included as a single component in a product
        * Each Onewire chip has an unique identifier
        * for example key to open a lock
        * deactivate burglar alarms
    * Examples:
        * iButton (Dallas Key)
        * Java Ring
        * always 1 master in a MircoLAN, multiple slaves
        * cheap, easy to use, simple to use
        * 64 bit address
        * Master communicates over address
        * Master: also commucates with skip-ROM command
        * voltage-based digital system
        * half-duplex, bidirectional
    * Usage:
        * battery monitoring
        * real-time clock
        * flow measurements
        * wheather instruments
		
		
		
* Project Idea: (together with Simon Angerbauer, Anika Seibezeder)
Student: Anika
School officer: Roman
Robber: Simon

Anika just finished her IoT lecture and is on the way to her exercise. 
While chatting on her phone with her friend, Simon grabs her phone and runs away.
Anika screams and pulls her emergency wristband to notify the authorities. 

The wristband automatically determines the location. As Anika is inside, GPS can not be used. 
Therefore the specific room inside the school is found with beacons. 

Roman is eating his donuts, like everyday. 
Suddenly he gets a notification, that Anika has been robbed in FH Hagenberg in the hallway on the first floor. 
Roman is sprinting to the location, tackles Simon and takes him down. The robbery has been avoided. 
Anika is happy and Simon is suspended for three days.