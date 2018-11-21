# IoT Scenario for Lab 2

A CO<sub>2</sub> sensor that is installed somewhere in the room transmits data about CO<sub>2</sub> levels to the broker. There can be various subscribers to this broker, in order to carry out desired functions if the fetched data falls below or rises above a certain value. The subscriber in this scenario will be an electric motor that opens or closes a window depending on the CO<sub>2</sub> levels. Of course, for this to actually be implemented, the window has to be designed in such a way that it is easy for an electric motor to open or close it. Ideally, the window has no handle that needs to be turned and it can be controlled by a rotating electric motor, through connecting the rotational axis of the window to the turning pole of the motor. Perhaps, an easier to implement method would be to simply connect a long bar to the motor and attaching this bar to the window tightly.

## Concrete scenario

Mike has some sleeping problems, he is never fully refreshed in the morning but always groggy and tired. He suspects that this might be caused by bad air quality in the room, but he doesn't want to keep the window open all night, because it could get cold and he doesn't want to waste energy.

As a result he installs the aforementioned device in his room, in order to open or close the window depending on the air quality. He turns the device on before he goes to bed, and turns it off when he gets up.
