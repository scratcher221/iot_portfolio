# IoT Scenarios
## SimpleHomeAutomation (Roman)
According to Alex, opening up the garage via the remote control is not useful at all. Why? Almost every time he drives with his car and comes home, 
he forgets that he has left the remote control inside the house. He has to get out of the car and open the garage manually by typing in the pin code. Yuck!
Also, Alex often isn't quite sure if he has closed the garage after driving to work. Often Alex calls his mother to double-check if he has closed it. Just to make sure.

With SimpleHomeAutomation, these problems would just fade away. Why?
SimpleHomeAutomation has:
	+ Relays that you can control
	+ Sensors that can be programmed and installed in a way you want
	
Alex now doesn't need to think about the remote control every time he leaves his house, he just has to make sure that he has his phone with him.
With the SimpleHomeAutomation-App he gets access to open up his garage remotely and securely.
Furthermore, Alex doesn't need to call his mom every time he isn't sure if he has closed the garage, cause he can simply check it on his own, due to the installed sensor on the back side of the garage door.

The SimpleHomeAutomation-Kit contains of:
+ 1x Raspberry PI Kit
+ 5x WEMOS
+ 2x Relays
+ 2x Open/close Sensor
+ 1x Temperature Sensor


## CO<sub>2</sub> sensor (David)
A CO<sub>2</sub> sensor that is installed somewhere in the room transmits data about CO<sub>2</sub> levels to the broker. 
There can be various subscribers to this broker, in order to carry out desired functions if the fetched data falls below or rises above a certain value. 
The subscriber in this scenario will be an electric motor that opens or closes a window depending on the CO<sub>2</sub> levels. 
Of course, for this to actually be implemented, the window has to be designed in such a way that it is easy for an electric motor to open or close it. 
Ideally, the window has no handle that needs to be turned and it can be controlled by a rotating electric motor, through connecting the rotational axis of the window to the turning pole of the motor. 
Perhaps, an easier to implement method would be to simply connect a long bar to the motor and attaching this bar to the window tightly.

### Concrete scenario

Mike has some sleeping problems, he is never fully refreshed in the morning but always groggy and tired. He suspects that this might be caused by bad air quality in the room, but he doesn't want to keep the window open all night, because it could get cold and he doesn't want to waste energy.

As a result he installs the aforementioned device in his room, in order to open or close the window depending on the air quality. He turns the device on before he goes to bed, and turns it off when he gets up.
