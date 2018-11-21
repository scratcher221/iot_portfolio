# 4. Lecture
##Scaling and Testing
* What will be issues  scaling(system size, numberof systems, management)?
    * Maintenance (faulty devices?) - How to solve? Heartbeat, central monitor or so
    * Updating those systems
    * Bugfixing on those systems
    * scale up scenarios and find problems there
    * Can you update all devices at once? 
        * Update devices OTA, regarding of configuration
        * simulators allow the simulation of a multitude of devices
* How can we do testing?
    * Exploratory testing
    * Crowdtesting
    * Story driven testing
* What role will play
    * Simulator (components)?
        * those can simulate the things we "want to be tested", but not the things we don't think about that might be failing
        * good, but not the "holy" thing
    * MQTT
    * Stories?
        * same as simulators, they test the things that "have to be tested", but don't think outside of the box
* Think and discuss 10 minutes, write down at least 2 common points for each.
* Open discussion
    * Attention! Simulators are only approximation of real world.
    * Communication, community, consortium --> Bugfixing
    * Use Frameworks, if allowed.
	
##IoT Frameworks
* Eclipse Kura
    * publicly available
    * developed by kura
    * good documentation on github
    * supports every linux-based system
* Node-RED
    * Why node? Cause there are many nodes in the system
    * good examples, huge community, huge amount of tutorials
    * you can use your facebook account to log in into node red
    * support of microcontrollers? no!
* Flogo
    * not an iot platform? :D
    * event driven app
    * handlers, dispatch the events. 
    * documentation is quite good
    * it is not for free
* Alljoyn (maybe also Iotivity)
    * really bad documentation, not really much to find about AllJoyn and Iotivity.
    * AllJoyn merged with OCF
    * Title stands for
        * AllJoyn --> Joyn all
    * Publicy available/open source/ reference implementation:
        * Documentation available at github https://github.com/alljoyn/alljoyn.github.com/wiki
        * 	[ { "href" : "/light/1", "rt":["alpha.light"], "if":["oc.mi.def"], "obs":1}, { "href" : "/light/2", "rt":["alpha.light"], "if":["oc.mi.def"], "obs":1} ]
    * Good documentation?
        * better at https://iotivity.org/getting-started
        * Not that good imo, https://github.com/alljoyn/extras-webdocs/blob/master/docs/learn/core/system-description/index.md
    * Security/privacy?
	    * https://wiki.iotivity.org/iotivity_security_architecture_overview
* Windows IoT
    * Version of Windows 10
	* might, might have not a display
* IoT Value Chain.
* RTI Connext DDS Architecture.
* ThingWorx platform architecture.
* Cisco Cloud Connect Platform.
* SalesForce IoT.
* GE Predix platform.
* IBM Bluemix Deployment options.
* Amazon AWS IoT.