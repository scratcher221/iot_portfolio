# Lecture Report 3

## Research about exchange formats in IoT

- Binary:
    * Useful if not a lot of bandwith is required (Overhead!)
    * Not suitable for humans
- Text:
    * Data simply transferred as text, can be useful because of simplicity
    * Human readable but no structure, no defined standards
- XML:
    * Well known standard, well structured, standardized
    * Suitable because of interoperability (known standard)
- JSON:
    * Another well known standard, but not as strutured as XML
    * Widely used, easily readable by humans
- YAML:
    * Similar to XML
    * Not as widely used

## Consortiums/Foundations/Alliances

### IEEE IoT Initiative

Purpose: Research, implement and define standards for the usage of the IoT. They hold IoT Conferences and Events, sponsored by IEEE or others.

Membership: You can join the IEEE Technical Community for free.

### Lora Alliance

Stands for: “Long Range”

Members: Alibaba Group, Actility, Cisco, Google Inc., Hangzhou Lowan, IBM

Memebership: 
Adopter: You can join the alliance for 3000$.
Institutional: Free, subject to approval
Contributor: 20,000$
Sponsor: 50,000$


### IoT Eclipse

Purpose: Provide Frameworks, define open standards, open source implementations for IoT protocols, like CoAP, oneM2M, LWM2M, MQTT, OPC-UA. They want to build interoperable IoT solutions.

Members: Bosch, Eurotech, RedHarm Nokia, Ubuntu, ...

Membership:
Strategic Members: Contribute annual dues of 0.12% of revenue, minimum 25,000$
Enterprise Members: 50,000$
Solutions Members: 5,000$ for non-for-profit organizations
Associate Members: Free for non-for-profit organizations
Committer Members: Have to be voted in

## Protocols used in IoT

### MQTT
Stands for “Message Queuing Telemetry Transport”. It is an open messaging protocol for machine-to-machine communication (M2M). The protocol enables the transmission of telemetry data between devices.
IANA standardized the TCP/UDP ports 1883 and 8883 for MQTT communication. Messages can be encrypted with the TLS protocol.
There is always a MQTT-Server (“Broker”) that stores the entire data flow of the communication partners.

Advantages: Quite mature and stable.
Disadvantages: Operates over TCP, TCP was designed for devices with more memory and processing power than IoT devices. Centralized broker, can affect scalability (overhead).

### AMQP
Stands for “Advanced Message Queuing Protocol”. 
Is a binary, application layer protocol.

Advantages: Routing capabilities, Reliability, Security, Flow control.
Disadvantages: Latest versions are not backward compatible with older versions. So developers have to worry about which version is implemented in every component of the communication chain.

### CoAP
Stands for “Constrained Application Protocol”. It is a specialized web transfer protocol for use with constrained nodes and constrained networks in the Internet of Things.

Can carry different types of payloads and identify which payload type is being used. Is transmitted over UDP/IP.
