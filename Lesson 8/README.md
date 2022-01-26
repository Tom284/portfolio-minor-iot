# Lesson 8

## Exercises

### LED strip

* In the morning we practiced with an LED strip. Thanks to the practice we could later use it in our project.

## Final project

* For the final project Maltie and I made an IoT device that can measure the Ph value and the device will let the user know if the water is suitable for skin contact. It will show this by changing the color of an LED strip. If the color is red the water isn't suitable for skin contact but if the color is green the water can be used for skin contact.

* The Ph meter communicates with an Arduino UNO. We then plug the Arduino into our raspberry pi, and node-red then reads the serial port. The Arduino writes the (converted to Ph) results it gets from the Ph meter to the serial. Node-red then decides if the Ph value is good for your skin or not, and it will send this result over MQTT to the nodeMCU that controls the LED strip.

* Add gauge in future instead of debugging.

![node-red-final-project](https://github.com/Tom284/portfolio-minor-iot/blob/main/Lesson%208/node-red-final-project.png)
![demo](https://github.com/Tom284/portfolio-minor-iot/blob/main/Lesson%208/Final-project-video.mp4)

### Adding to the course

* Ulrich came up with a possible idea to use the serial in node-red. This allowed us to send the values from the Arduino though node-red to an MQTT topic. Which made it so iotempower has support for pretty much every hardware part that can be attached to an Arduino/ESP8266. 
Maltie and I got this to work, so there is a chance it will be used in future lectures.


## Reflection

* Getting the Ph sensor to work was quite a struggle, but once it worked it was a fun piece of hardware to work with. I enjoyed calibrating the Ph sensor and getting closer and closer to the actual Ph. Helping to create a solution that might be used in future lectures is really cool as well. It feels great to have added something to this amazing course. 
