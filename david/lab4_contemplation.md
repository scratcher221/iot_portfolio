# Contemplation on lab 4
 
## Questions on the YoutTube video
 
### Fog computing
 
Fog computing, also called Edge Computing is a type of communication that is not limited to the cloud-device model, but has more elements of a device-device data flow. So, it is more peer to peer based than traditional cloud computing. This is important for IoT, because if every tiny device out of the billions on the IoT had to send their data to one big centrally managed cloud, there could arise problems with latency, throughput, etc. So, one could argue that fog computing makes the IoT more performant on the whole. To summarize, key points are:
- device-device communication 
- keep data closer to the edge
- logic in devices, not only on cloud

### The edge

The edge can be defined as the outer layer of the Internet of Things. The outer layer consists of a huge number of tiny devices that communicate with each other. Logic for data flow can be implemented in "the edge", which means directly on the end device (e.g. a microcontroller, sensor, switch, ...)

### Categories of open source frameworks

One way to categorize could be: Heavy, Lightweight, Very Lightweight. 
Or: Focus on textual code, visually focused

The presented frameworks and their features were:

| | Kura | Node-Red | Flogo |
|-|------|----------|-------|
| Code availability | Open-Source | Open-Source | Open-Source |
| Age | 3 years old | 3 years old | newer |
| Runs on edge devices | yes | yes | yes |
| Programming language | Java | Node.js | GO |
| Virtual Machine | JVM | V8 | - (compiled) |
| Deployment size | Heavy (~ 200 MB) | Light (~ 20 MB) | Very Light (~ 2 MB) |
| Startup time | ~ 8 sec | ~ 5 sec | ~ 1 sec |

### Which framework did you like best

Personally, I liked the Flogo framework the best. The reason for this is that it is so lightweight. Especially for the IoT code size can be a limiting factor. I think it is important to minimize code size so that nanodevices can make use of the framework. The logic needs to be able to run on very small, computationally weak devices that don't have a lot of storage capacity.

Another reason why I liked Flogo, was that it uses the modern programming language GO. It is very cutting edge, an not bloated because it was designed with a lot of experience from the ground up. There is no need for tons of libraries like in Java, which reduces the size of the final result. Also, the ability to create one simple binary that includes everything is of advantage.
