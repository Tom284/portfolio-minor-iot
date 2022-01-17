# Lesson 4

## Unboxing

* Button analog: one-wired
* Dallas temperature sensor: one-wired
* HX711: I2C bus
* LED strip: one-wired
* small oled display for Arduino: I2C
* DHT22: I2C
* NFC Reader: I2C
* MQ-2 gas sensor: I2C
* Buzzer: one-wired
* ADBS9960: I2C
* Acoustic distance sensor: two-wired analog
* GYUL53L06: I2C

## Buses

* RS232, the classic way of doing communication. It can go into the 100s of meters. It is very resistant to fault. 900.000 bits per second if the length isn't far. Normally use 2 lines + ground. You find it everywhere. You can even run it over usb. 0-3V. Price in the cents.
* RS485, also kind of 2 wires but it has a higher voltage range. Goes from minus to plus voltage. Can reach far heigher lengths and speeds. It goes into the km range. Price in the dollars. Works the same way as a RS232.
* I2C, only uses two wires. Made for simplicity and low cost. Particular strength is that a microcontroller can control a network of chips. Examples:
changing sound volume in intelligent speakers, controlling small displays.
Speed up to 3.4Mbps. Length 1 meter at Kbaud, or 10 meters at 10Kbaud.
Used to establish communication between two or more integrated circuits, hence why it is known as I2C.
* SPI, (see presentation). 
* One-wire, device communication bus system. Mainly used in iButtons, digital thermometers, weather instruments. 
2 wires, low speed 16,3 kbit/s, max length 300-500m. Cheap. Only 2 wires.Can send communication in both directions over 1 wire.

## IoT Communication

* Text: easy to read.
* Binary: takes less data to send.
* XML: has keys, not very readable.
* JSON: has keys, easier to read.
* YAML: has keys, easier to read.

## MQTT theory

* Publish Subscribe (Listener, Observer Pattern)
* One of the most commenly used protocols in IoT.
* Machine 2 Machine.
* Very lightweight.
* Many implementations.
* Built-in security.

![Node-red hello world.](https://github.com/Tom284/portfolio-minor-iot/blob/main/Lesson%204/node-red-hello-world.PNG)

## Notes

* I can access node-red on my laptop by using ssh to start node-red on the raspberry pi. I can then go to the ip of the raspberry pi in my browser on my laptop and and add port '1880'.
* I can use ip r to get the ip's I need for iotempower.
* To start MQTT, I first have to type iot and then I type mqtt_broker.
* You can't send data to a wildcard.

## MQTT practice

### Basic sending messages between MQTT node-red and mosquitto
![send-receive-mqtt-broker-mosquitto](https://github.com/Tom284/portfolio-minor-iot/blob/main/Lesson%204/send-receive-mqtt-broker-mosquitto.PNG)
![send-receive-mqtt-broker-node-red](https://github.com/Tom284/portfolio-minor-iot/blob/main/Lesson%204/send-receive-mqtt-broker-node-red.PNG)

### Basic sending messages between node-red + wildcard
![mqtt-wildcard-node-red-+](https://github.com/Tom284/portfolio-minor-iot/blob/main/Lesson%204/mqtt-wildcard-node-red-+.PNG)

### Basic sending messages between node-red # wildcard
![mqtt-wildcard-mosquitto](https://github.com/Tom284/portfolio-minor-iot/blob/main/Lesson%204/mqtt-wildcard-mosquitto.PNG)
![mqtt-wildcard-node-red](https://github.com/Tom284/portfolio-minor-iot/blob/main/Lesson%204/mqtt-wildcard-node-red.PNG)



## Reflection

* .....
