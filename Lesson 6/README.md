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

### Button

* I had to add this line "input(button1, D5, "released", "pressed");" in the setup.cpp.
* I also replaced the existing board value to "nodeMCU" in the node.conf.
* After that I used the following commands "iot" -> "cd ~/iot-systems/demo" -> "cd test01" and then "deploy serial".
* After that I could use mqtt and console_serial to see that the button was pressed. 
![iotempower-console_serial](https://github.com/Tom284/portfolio-minor-iot/blob/main/Lesson%206/iotempower-console_serial.PNG)

### LED and Button

* With the following code:
* input(button1, D5, "released", "pressed").with_debounce(5);
* output(blue, ONBOARDLED).inverted();
* I could change the LED in Node-RED and read the button input.
![iotempower-led](https://github.com/Tom284/portfolio-minor-iot/blob/main/Lesson%206/iotempower-led.PNG)
![iotempower-button](https://github.com/Tom284/portfolio-minor-iot/blob/main/Lesson%206/iotempower-button.PNG)

### 2 nodes

* I made a new node tes02 and I added this line of code in the setup.cpp "input(b1, D5, "up", "down");"
* I kept the code in test01 the same.
* I again replaced the existing board value to "nodeMCU" in the node.conf but I did this in test02 this time.
* I then caught the input of test02 in node-red, altered it a bit and send it to test01 so the led would go on and off. The alteration I made was that I needed to change up to off and down to on.

![2-nodes](https://github.com/Tom284/portfolio-minor-iot/blob/main/Lesson%206/2-nodes.PNG)
![test02-turns-led-on](https://github.com/Tom284/portfolio-minor-iot/blob/main/Lesson%206/test02-turns-led-on.PNG)
![node-red-connecting-2-nodes](https://github.com/Tom284/portfolio-minor-iot/blob/main/Lesson%206/node-red-connecting-2-nodes.PNG)
![2-nodes-physical-setup](https://github.com/Tom284/portfolio-minor-iot/blob/main/Lesson%206/2-nodes-physical-setup.jpg)


## Reflection

* Lesson 6 was a fun but busy lesson. Theoratical parts are always necessary, but I enjoy working hands on a lot more. So I am glad that today had both. I definitely learned a few things from the theory. And I learned a lot about working with iotempower. It took me a bit before I got it setup and I understood what the important steps were, but once I got the hang of it, it was really easy and nice to work with and not difficult at all. At first I made my nodeMCU conect to a hotspot but this caused an issue with me not being able to remotely deploy code, likely because of windows 10 firewalls setup. So I connected the nodeMCU to my normal 2.4ghz wifi and then everything worked. The second step with deploying a second node was something I finished in less than 10 minutes once I understood the exercise, as I now understood how to work with iotempower. It really is useful. 

