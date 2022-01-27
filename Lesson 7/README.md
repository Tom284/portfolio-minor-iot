# Lesson 7

## Exercises

### hcsr04

* I used this "hcsr04(distance, D5, D6).with_precision(10);" command.
* I ran into a few issues because I was trying to use the 3v output. But with the help of the teacher I managed to build a voltage divider.
![distance-exercise](https://github.com/Tom284/portfolio-minor-iot/blob/main/Lesson%207/distance-exercise.PNG)
![distance-gauge](https://github.com/Tom284/portfolio-minor-iot/blob/main/Lesson%207/distance-gauge.PNG)
![distance-physical](https://github.com/Tom284/portfolio-minor-iot/blob/main/Lesson%207/distance-physical.jpg)

### Exercises 2 and 8

* [Maltie her portfolio](https://github.com/maltie01/globalminor_IoT_Maltie/wiki/Lessons)
*  (lesson 7 of Maltie can be found at the bottem, it will link to a .docx document.)

### Touch sensor

* The A0 is the touch sensor so there was no physical setup needed.
* I used the normal example code line "analog(touch).with_precision(20).with_threshold(100, "touched", "touchless");" and it worked.
![touch-exercise](https://github.com/Tom284/portfolio-minor-iot/blob/main/Lesson%207/touch-exercise.PNG)

### Brightness of LED

* I used this "pwm(blue, D8, 2000);" line of code.
![exercise_5_physical](https://github.com/Tom284/portfolio-minor-iot/blob/main/Lesson%207/exercise_5_physical.jpg)
![exercise_5](https://github.com/Tom284/portfolio-minor-iot/blob/main/Lesson%207/exercise_5.PNG)

### Buzzer control

* This is demonstrated in project 1.

### Colorpicker

* I struggled for a bit with the colorpicker mainly because I didn't really know which cable I had to connect to where. I didn't know which rod was red, which was blue and which was green. Eventually I came up with the idea to just add 3 buttons, one for each color. I then circled through the buttons and adjusted the cables. Eventually after a bit of trial and error, sending red gave a red color, sending green gave a green color and sending blue gave a blue color.
* I then added a color picker in the dashboard and that was it.
* The line of code I used: "rgb_single(rgb1, D6, D7, D8);"
![exercise_7](https://github.com/Tom284/portfolio-minor-iot/blob/main/Lesson%207/exercise_7.PNG)
![exercise_7_physical](https://github.com/Tom284/portfolio-minor-iot/blob/main/Lesson%207/exercise_7_physical.jpg)


## Project 1

* To get the RFIF to work I configured it like the docs said, and I use this line of code: "mfrc522(reader);"
* I then used Maltie's code from exercise 2, which allows me to make a difference between the two keycards. 
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
![project_1_physical_access_granted](https://github.com/Tom284/portfolio-minor-iot/blob/main/Lesson%207/project_1_physical_access_granted.jpg)
![project_1_physical_access_denied](https://github.com/Tom284/portfolio-minor-iot/blob/main/Lesson%207/project_1_physical_access_denied.jpg)

### Story

* There are 2 technophobe hotel owners who still use normal metal keys in their hotel. They have been having some issues with this, as keys are getting lost and then they have to remake them. The local key maker also called the hotel owners recently because someone was trying to duplicate one of their hotel keys. Which would mean that that person could access the hotel room after they had already checked out. 
* The owners also stay at hotels while they are on vacation and they noticed that most hotels now a days use these cards that give access to rooms. 
* So the owners asked people to make a system similair like this.
* Maltie and I offered to make a prototype of this system, so we could explain to the owners how it would work. And if they liked the prototype we would develop the entire system for them.



## Helping Maltie

* In the evening I helped Maltie with exercise 8. I helped her with the code from the docs and how we can then send the right data to the nodeMCU that we uploaded code to, so that it executes the malwares function.


## Reflection

* I worked with a lot of different hardware devices today with whom I hadn't yet worked before. By doing this I learned a lot. But it was also a really busy day. I didn't really take any breaks as there were so many tasks that I had to do. This made the learning experience a little less fun than it could have been. I definitely still had a lot of fun, especially once a task was completed as it felt really rewarding. The thing that made it not as enjoyable as it could have been was that I didn't really have the time to enjoy a task once it was completed as I immmediately had to move on to the next task. I am proud of how project 1 turned out as it works great and it feels really cool. It is definitely a big enough project that I feel is worthy of what we have been working towards over the past 2/3 weeks. 
