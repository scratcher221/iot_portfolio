# Lecture Report 5

## Working with the Node-RED programming tool

In the first part of the lecture we built a simple Hello-World-Application with Node-RED. It is more intuitive than just coding or working with other libraries. The main advantage is that the user has a graphical overview of nodes that can be connected to each other via a line. In this way one can easily comprehend the functionality of the system in one gaze.

There are many different kinds of nodes, some examples are:
- change nodes
- function nodes
    - e.g. rbe (report by exception node): this node blocks unless incoming value changes
- input/output nodes (e.g. buttons and LEDs)
- social nodes
    - e.g. email
- dashboard nodes
    - e.g. graphical switch, button, slider, date picker, etc.
    - the dashboard can be accessed here: https://ulnoiotgw.local/nodered/ui/#/2

There is a sidebar in the overview that has a log output of what's happening in the system.

Deploying onto the system simply works by clicking on the red "Deploy" button on the top right in the user interface.

## SDM4IoT - Story Driven Modeling for IoT

It's an agile method for developing for the internet of things. 

- Tangible Technology (Robotics)

One of main methods for SDM: Graphical specification for software (object diagram, class diagram)
Can design story patterns in a graphical manner

Car2X - tiny robot as model for a car. Drives around in a model of an actual road network (laid out in white sheets of paper).

## IoT Nice to Have

Things I would like to see in an IoT Framework:

- Mass deployment option (to many devices at the same time)
- Over the air flashing of firmware (for updating)
- Good documentation, example tutorials
- Support for different protocols (CoAP, MQTT, AMQP)
- Support for different programming languages (Python, Java, C, C++ ...)
- Graphical front-end and back-end
- Integratable, works with other systems
- Security and Privacy
- Good debugging features
- Testing features

### UlnoIoT features

First go to: https://ulnoiotgw.local

Then go to the folder of the node and edit the logic there.




