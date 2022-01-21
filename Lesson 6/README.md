# Lesson 6

## Scaling and Testing

### What will be issues scaling (system size, number of systems, management)?

* If the ip changes, all of the ip's of every system will have to be changed remotely.
* I need an usb port for all of the systems, I on;y have like 4 available.
* If there is a system update I would have to plug every single system one after the other into my usb port and I have to physically update them.
* Security and privacy

### How can we do testing?

* Manually (with Node-RED).
* Unit testing.
* Stories.

### What would you like to see for scaling up? (What is not so great currently?)

* A way to remotely update systems.
* A way to keep the same ip's.

### What role will play Simulator(-component)s? MQTT? Stories?

* Simulator(-component)s helps test the system in small parts.
* Mqtt is less heavy and very well tested in IoT.
* Using stories you can see pitfalls before you build the system. You can also derive tests from stories.

### What are some features I would like in an IoT Framework

* Remote code uploads (with integrated testing before it uploads the code. If a test percentage isn't hit or tests fail the system won't upload code.).
* Static ip adresses.
* Windows support.
* Docker support.
* Build in security and privacy. 
* Different roles, so that not everyone can create an mqtt endpoint.
* A system that shows how many messages are send, and that keeps track of how much hardware it is using.
* A system that shows if an IoT device goes offline.
* Battery support.
* Integrated environment (less terminals).

## Documentation

* mfrc522: NodeMCU  -  rfid-rc522 board

    3V3  -  3.3V
     D8  -  sda
     D7  -  MOSI
     D6  -  MISO
     D5  -  SCK
     D0  -  RST
      G  -  GND
    N/C  -  IRQ (IRQ is not connected for use in IoTempower)
* PWM: pwm(blue, ONBOARDLED, 2000);
* Servo: servo(m1, D4);
* hcsr04/rcwl-1601: hcsr04(distance, D5, D6).with_precision(10);
WARNING: The HCSR04 usually needs 5V input voltage (some though also work with 3.3V, test first on 3.3V, if it does not work build the voltage divider and try with 5V). To read the Echo Pin with a 3.3V device like the esp8266 or a Raspberry Pi zero, you must use a level shifter or setup a voltage divider for the echo-pin (for example echo pin via 1kOhm to the GPIO-Echo-Input and 2kOhm to ground).
The RCWL-1601 is specified for 3.3V and does not need the voltage divider, do not connect it to 5V!
* LED: led(yellow, D7, "turn on", "turn off");
![iotempower-doc](https://github.com/Tom284/portfolio-minor-iot/blob/main/Lesson%206/iotempower-doc.PNG)

## Deployment

* I had to add this line "input(button1, D5, "released", "pressed");" in the setup.cpp.
* I also replaced the existing board value to "nodeMCU" in the node.conf.
* After that I used command "iot" -> cd ~/iot-systems/demo -> cd test01 and then deploy serial.
* After that I could use mqtt and console_serial to see that the button was pressed. 
![iotempower-console_serial](https://github.com/Tom284/portfolio-minor-iot/blob/main/Lesson%206/iotempower-console_serial.PNG)

## Reflection

* ...

