# Lesson 5

## Exercises

### Temperature

* I managed to send the temperature my ESP with am2320 gets over the mqtt broker to node-red. (The code is in the mqtt_esp8266_basic_send folder.)

![mqtt-temp-changing](https://github.com/Tom284/portfolio-minor-iot/blob/main/Lesson%205/mqtt-temp-changing.PNG)
![mqtt-temp-changing-ui](https://github.com/Tom284/portfolio-minor-iot/blob/main/Lesson%205/mqtt-temp-changing-ui.PNG)
![temp-setup](https://github.com/Tom284/portfolio-minor-iot/blob/main/Lesson%205/temp-setup.jpg)

### Remote mqtt LED

* Because I didn't have a working relay, I was allowed to use mqtt to turn a LED on and off. Since the goal of the exercise was to learn about mqtt. I added a switch on the UI so I could use that to turn the light on and off. (The code is in the mqtt_esp8266_led folder.) 

![mqtt-turn-light-on-and-off](https://github.com/Tom284/portfolio-minor-iot/blob/main/Lesson%205/mqtt-turn-light-on-and-off.PNG)
![mqtt-turn-light-on-and-off-ui](https://github.com/Tom284/portfolio-minor-iot/blob/main/Lesson%205/mqtt-turn-light-on-and-off-ui.PNG)

### ESP8266 LED switch based on temperature

* In this exercise I can switch the LED status based on the temperatre the am2320 measures. I have it all in one system as I thought that's what I had to do but the solution still makes the round trip through node-red. (The code is in the mqtt_esp8266_led_and_temperature folder.)

![esp8266-temp-led-switch](https://github.com/Tom284/portfolio-minor-iot/blob/main/Lesson%205/esp8266-temp-led-switch.PNG)
![temp-led-setup](https://github.com/Tom284/portfolio-minor-iot/blob/main/Lesson%205/temp-led-setup.jpg)


#TODO: link to maltie's portfolio (when she uploads it).

## iotempower

### IoT Open Source Integration Comparison (Kura, Node-RED, Flogo, Apache Nifi, StreamSets)

* What are the key challenges of IoT and why? (Question)
* Devices are not connected to the cloud, devices have low bandwidth to connect, latency of connectivity is significant, connectivity is not reliable, connectivity is not cost-effective. It is not an IoT device if it isn't inegrated so connection issues will cause challenges. (Answer)
* What is/are the generic solution(s) for it? (Question)
* Hybrid Integration Platform, MQTT, CoaP, OPC US. Different abstraction levels. (Answer)
* Two examples for used patterns. (Question)
* Enterprise integration pattern (Observer pattern)/Filtering pattern. Fog computing. Dataflow Pipeline. (Answer)

* What are the different categories of the presented frameworks? (Question)
* Stream Processing, Data Pipelines, Process Engine (Answer)
* What are the main features of each category? (Question)
* Sliding windows in context and analyzes, Transfering data from one point to the next, To integrate and wire together different hardware devices, sensors, apis and online services. (Answer)
* Four or more examples of applications. (Question)
* Edge integration, predictive maintenance (Answer)
* Four or more examples of available tools. (Question)
* Nifi, Talend, StreamSets, Pentaho (Answer)

* Three common features (Question)
* open source frameworks, connectivity to IoT technologies, Web ui for visual coding, deployable, for developers / integration specialists, extendable SDKs / APIs. (Answer)
* Target audience (Question)
* Eclipse Kura: developers / integration specialists. 
Node-RED: developers / integration specialists and citizen integrators.(Answer)
* Advantages and disadvantages of each. (Question)
* Eclipse Kura: complex to install, focuses on coding, need Camel to compare it with Node-RED.
Node-RED: there are no binaries to share, easy to install. (Answer)

## Reflection

* Lesson 5 has been my favourite lesson yet. I think the integration of the hardware and software was incredibly fun to do. There were some struggles with finding the correct wiring for the temperature sensor but eventually I got it by looking at different setups and then guessing what it could be for the ESP8266 and it worked. I also tried multiple libraries but the main am one worked with the physical setup from the picture.
I am definitely excited for the next lesson as we will integrate some software like Telegram or Discord and I think it would be really cool to know how to do this. 

