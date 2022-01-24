# Lesson 7

## Exercises

### hcsr04

* I used this "hcsr04(distance, D5, D6).with_precision(10);" command.
* I ran into a few issues because I was trying to use the 3v output. But with the help of the teacher I managed to build a voltage divider.
![distance-exercise](https://github.com/Tom284/portfolio-minor-iot/blob/main/Lesson%207/distance-exercise.PNG)
![distance-gauge](https://github.com/Tom284/portfolio-minor-iot/blob/main/Lesson%207/distance-gauge.PNG)
![distance-physical](https://github.com/Tom284/portfolio-minor-iot/blob/main/Lesson%207/distance-physical.PNG)

### Exercises 2 and 8

* Link to Maltie her portfolio once she has completed them.

### Touch sensor

* The A0 is the touch sensor so there was no physical setup needed.
* I used the normal example code line "analog(touch).with_precision(20).with_threshold(100, "touched", "touchless");" and it worked.
![touch-exercise](https://github.com/Tom284/portfolio-minor-iot/blob/main/Lesson%207/touch-exercise.PNG)

## Project 1

* To get the RFIF to work I configured it like the docs said, and I use this line of code: "mfrc522(reader);"
* I then connected 2 lights. 1 green one and one red 1. During this I had some errors, this came because both the RFID reader and the leds were on the same node. So I know now why I have to create new nodes, because otherwise I ddos my own IoT devices. Once this was fixed both the leds worked with the sliders.
* I then connected a buzzer and I had some issues with this, because the buzzer would always be on. I fixed this by connecting the ground and the VCC to ground. And I connected the I/O to D8.
* My second node used these lines of code: 
"led(green, D6, "on", "off");"
"led(red, D7, "on", "off");"
"pwm(buz, D8, 2000);"
![project_1_leds_and_buzzer](https://github.com/Tom284/portfolio-minor-iot/blob/main/Lesson%207/project_1_leds_and_buzzer.PNG)
![project_1_button](https://github.com/Tom284/portfolio-minor-iot/blob/main/Lesson%207/project_1_button.PNG)
![project_1](https://github.com/Tom284/portfolio-minor-iot/blob/main/Lesson%207/project_1.PNG)
![project_1_physical](https://github.com/Tom284/portfolio-minor-iot/blob/main/Lesson%207/project_1_physical.jpg)






## Reflection

* ...
