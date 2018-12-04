# Lab Protocol 9

## Setting up LoRa Communication for the Raspberry Pi

First step, we downloaded the necessary software for communicating with the LoRa module from: https://codeload.github.com/dragino/rpi-lora-tranceiver/zip/master

Next step was to unzip the downloaded package, then change into the directory and execute the command "make".

![download_and_build](https://github.com/scratcher221/iot_portfolio/tree/master/team/9/images/clone_unzip.jpeg)

After that we executed the application dragino_lora_app with the flag "rec" for receiving. 

![receiving](https://github.com/scratcher221/iot_portfolio/tree/master/team/9/images/lora_receiving.jpeg)

For sending the command "dragino_lora_app sender "message" is issued. This broadcasts the specified message to all receiving nodes.

![sending](https://github.com/scratcher221/iot_portfolio/tree/master/team/9/images/lora_sending.jpeg)

Here is one of the receiving nodes that got our message:

![receiving_node](https://github.com/scratcher221/iot_portfolio/tree/master/team/9/images/another_team_receives_our_message.jpeg)

The problem that still remains, however, is that the message gets sent in an endless loop once the command is issued. to counter this, we modify the file "main.c" so that it only gets sent once. These are the alterations we conducted in the file:

![change_main_c](https://github.com/scratcher221/iot_portfolio/tree/master/team/9/images/modify_main.jpeg)

After the modification, we sent a message only once as follows:

![sending_once](https://github.com/scratcher221/iot_portfolio/tree/master/team/9/images/sending_once.jpeg)

There were some problems regarding the length of messages, however, so we made some more changes in the main.c file. That is, we changed one line of code, such that received bytes are now terminated by NULL. Before that, after sending long messages, sometimes the message carried over into a new message, as can be seen in the first screenshot where we receive long messages from other nodes. The change can be seen here:

![null_terminate_change](https://github.com/scratcher221/iot_portfolio/tree/master/team/9/images/terminate_null.jpeg)

After that change we tried receiving a long message again. As we can see, there is no more problem with sending long messages, everything gets transmitted correctly:

![message_length_fix](https://github.com/scratcher221/iot_portfolio/tree/master/team/9/images/message_length_fix.jpeg)

## Integrating LoRa communication into Node Red:

The next part of the lab exercise was to call the commands via a UI that we build in Node Red.

- Troubleshooting:
    - We had some issues with permission management and struggled to find out why.
    - The solution was to edit the /etc/sudeors file with the visudo command.

The structure of the system in the backend looks as follows: 

![lora_node_red](https://github.com/scratcher221/iot_portfolio/tree/master/team/9/images/lora_in_node_red.jpeg)

The front end, where we define when to send and when to receive, looks like this:

![nodered_frontend](https://github.com/scratcher221/iot_portfolio/tree/master/team/9/images/nodered_frontend.jpeg)

Here is a screenshot of a successful transmission and reception of a message:

![lora_transmit_receive](https://github.com/scratcher221/iot_portfolio/tree/master/team/9/images/lora_transmit_receive.jpeg)

- Troubleshooting:
    - The messages we received were cryptic and non readable
    - The reason for this was that there were too many processes running on the pi
    - pkill -f dragino_lora_ap kills all those processes
    - There should only be one instance of dragino_lora_ap

## Trying to setup TTN

Resources we studied in trying to figure out how to set this up:

- https://www.thethingsnetwork.org/docs/lorawan/
- https://www.thethingsnetwork.org/docs/lorawan/duty-cycle.html
- http://wiki.dragino.com/index.php?title=Connect_to_TTN

## Installing LoRa Server

- https://www.loraserver.io/guides/debian-ubuntu/

We modified the configuration file a bit, then tried to startup the server. Unfortunately there were some errors:

First there was an error in the config file, the access to the database was wrong:

![lora_startup](https://github.com/scratcher221/iot_portfolio/tree/master/team/9/images/lora_startup_errors.jpeg)

