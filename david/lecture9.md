# Lecture Report 9

## LoRa Network

Stands for: "Long Range Wide Area Network"

- New transmission standard between distributed devices and distributed gateways.
- Good for low power sensors that can be far from the next gateway.
- Extremely low channel capacity, low power consumption,
- Data rate: 292 Bit/s - 50 kbit/s
- Network Architecture: star topology

## TTN Network

Stands for: "The Things Network"
It is a community initiative for creating a global LPWAN (low power WAN) for IoT.
Uses LoRaWAN as the messaging protocol.
- Coverage:
    - 8.000 LoRaWAN-Gateways in 97 countries

Volunteers administer those gateways. The gateways collect data from far-away sensors and forward this data to a central point. The signals get processed further there and sent to pre-defined receivers. All communication is encrypted end-to-end with AES-128 (because of LoRaWAN).

Example Berlin:
    - 75 registered Gateways
    - 3.500.000 people provided with LoRaWAN access
    
Problems solved:
    - Security
    - Scalability
    - Infrastructure is already provided, developers can built on top of it

## Link Budget:

Definition: A way of quantifying a communication link's performance while accounting for the system's power, gains, losses for both transmitter and receiver. It is usually measures in Bel (dBm).

## Prices

- Client adapter: around 3€
- LORA gateway: 70€ for 4-channel gateway, 8-channel gateway around 200€

## Software support:

- RadioHead: Library for embedded microprocessors, supports LoRa

## Discussion

- What is LoRa good for?
    - Low Power consumption -> good for sensors on battery
    - Good for sensors that are very far from the gateway (e.g. remote train stations)
- What is it bad for?
    - Many devices (low data rate)
    - Flashing firmware -> low data rate
    - Not ideal for real time applications (low latency, jitter required)
- How does it fit into IoT?
    - Can be used for IoT setups with sensors that are far from each other and the gateway
