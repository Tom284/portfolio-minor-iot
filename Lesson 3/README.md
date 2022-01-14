# Lesson 3

## Altering light over wifi
* During this lesson I made a remote lightswitch. To switch the light over wifi, I used the previous code. But I also made some new code which can be found in button_press. I struggled a bit with only executing the code if the button ahs been pressed, but this was at first because the hardware wires weren't said up properly. Which I figured out by taking a good look at my breadboard. After that the same thing kind of happend but it was because the power of the button is inverted. So if the button says it is HIGH it is actually LOW. I also struggled a bit with deciding how I should alter what happens between button presses. I ended up with counting everytime a button has been pressed, and depending on if the press count is even or not, I switch the status of the light. So now I can turn the light on with a button press and off with a button press.

![The physical setup.](https://github.com/Tom284/portfolio-minor-iot/blob/main/Lesson%203/setup.jpg)

### Observations
* Just like the LED, the button is also inverted.

## Helping Maltie part 1
* I helped Maltie with setting up her raspberry pi. Since I had already wressled a bit with this the previous 2 days, I knew exectly what we had to do and it was easy to get her raspberry pi setup. It did take a bit of time as there were quite a bit of downloads. 

## Two buttons and 2 lights
* The second assignment of the day was to have 3 ESP8266, one with 2 lights, one with a button and another one with a button. The goal was then to have one button turn on/off the inbuild light of one of the ESP8266's and the other ESP8266 with the button should turn an external led on/off. Building the external led was pretty easy, I just googled how to do it and it seems like it is always one of the first steps that everyone takes when they start learning about IoT, so there were a lot of tutorials on the subject. I used [this](https://www.circuitbasics.com/arduino-basics-controlling-led/) tutorial. After that I could easily re-use the code I wrote this morning, I only had to make new endpoints which would allow me to turn the external led on/off. And I had to make one of the buttons point towards this endpoint instead of to the already existing endpoint which turned the inbuilt led on/off. My biggest struggle was that my laptop only has 2 available usb ports. Luckily on the other side of my room I have another usb endpoint. So I put the 2 buttons in my laptop and the lights on the other side of the room, this also helped increase how cool it felt that I was turning the lights on and off remotely.

![The physical setup.](https://github.com/Tom284/portfolio-minor-iot/blob/main/Lesson%203/multiple_lights_and_buttons.jpg)

## Helping Maltie part 2
* I then helped Maltie with the exercices of today, pretty soon we ran into issues though as Maltie's pc didn't recognize that an ESP8266 had been connected to het device.

#

## Reflection

* .....
