# Lecture Report 4

## Scaling and Testing

### Simulator:
No hardware devices necessary
Can simulate false values, to see how the system reacts
Unexpected false values can not happen, everything is controlled in the simulator
Help in scaling because it is easy to spawn a lot of devices in simulator
Disadvantage: Simulator is only an approximation of the real system

### MQTT:
Easier to scale than COAP, since there is a broker that manages everything. However at a certain point the broker might be overstressed, and can’t handle all the devices anymore.

### Testing:
Could implement a watchdog on the central server.
Professional testers, communication with the developers.

### Scaling:
Scale up scenarios and contemplate how this could affect reliability, functionality, find problems there.

### Updating:
Can you update everything at once? OTA Update? Need to differentiate the configurations on the individual devices, don’t overwrite them.

Framework for testing and scaling.


## IoT Frameworks

Amazon AWS IoT

Microsoft Azure IoT

OpenHAB

### Alljoyn (Iotivity)

The Alljoyn Framework, developed by Qualcomm, is open source and provides core services for the communication of devices.

The system uses the client-server model to organize itself. 
The “producer” (server) has an XML file called introspection, which is used to advertise the device’s abilities and what it can be asked to do.

The system can for example stream to multiple device sinks in a synchronized way.

The capabilities can be extended by bridging other protocols. The AllJoyn runtime was integrated in Windows 10.

Sponsor: AllSeen Alliance

### Iotivity:

Also open source. Hosted by the Linux Foundation and Open Connectivity Foundation (OCF). The goal is to create a standard that allows billions of wired and wireless devices to connect to each other and the internet. In 2016 Alljoyn merged into Iotivity. 

The Framework delivers an open source reference implementation of the OCF standards.

Documentation:
- Extensive Documentation for various programming languages (there is a wiki)

Operating Systems:
- Linux, Android, Windows, iOS, Tizen

Security:
- Secure Resource Manager, filter for resource requests based on a policy, access control lists

Protocols: CoAP as its application layer, agnostic to the underlying physical layer. Network layer has to be IP.

Features: 
- Discovery (find devices around it and offer its own services)
	Resource Registration (make discoverable) and Resource finding (client sending multicast or unicast 	discovery requests.
- All devices have both, server and client capabilities
- Data Transmission (standardized passing of messages between devices)
- Device management
- Data management

For Resource Registration a URI has to be provided, unique to each resource.
