# Fun Lights

**Project Idea**

We are using an LED panel connected to a webcam to visualize information through color.

Features may include:
* Live conversion of webcam image to 32x32 LED display
* Recognize emotion of person's face and visualize on LED panel using color
* Object recognition: use computer vision to recognize object and display cartoon version on LED panel
* Image capture: allow user to press button and save 32x32 image to a web page
* LCD panel displaying text that describes the image below the LED panel

**Team**

Devon Bain (dwb264)<br>
Christopher Caulfield (ctc98)

**Rough Form**

Paper prototype:

<img src='img/paperprototype.gif'>

Whiteboard sketches:

<img src='img/whiteboard1.JPG'>

<img src='img/whiteboard2.JPG'>

**Expected Parts**

* 32x32 LED Panel
* LED Panel Shield
* Raspberry Pi
* Arduino
* Webcam
* LCD panel
* Button (maybe)

**Interaction Plan**

The webcam will be attached to a wall at face height. The user can stand in front of it or hold an object in front of it. The LED panel will automatically change based on the camera image. There will be a button the user can press to save the image. The LCD will display a URL the user can visit to see their 32x32 image.

# Project Check-In - November 8

**Interaction Diagram**

**Interactive Device**

**Learning Experience**

*Panel shield soldering*

<img src="https://cdn.sparkfun.com//assets/parts/1/2/9/4/4/14721-RGB_Panel_Shield-01.jpg" width="200">

To make our lives easier, we bought a panel shield accessory that allows us to directly plug the LED panel into the Arduino. It required soldering about 30-40 different connections, and one piece was soldered backwards. It had to be de-soldered and flipped around in order to connect the panel correctly.

*Magic smoke*

<img src="https://i.imgur.com/PrfLmPY.png" width="500">

When we first tried to power up the panel and Arduino, we mistakenly used a 9V adapter instead of the recommended 3-5V. This, possibly in combination with the backwards component, caused the panel to start smoking. The panel was partially burnt out as a result, and we have ordered another from SparkFun that should arrive next week.

**Completed Work**

* Figured out correct setup for connecting LED panel and Arduino
* Wrote script to download images and resize to 32x32

**Next Steps**

* Combine image search, Google Vision and image-resizing scripts to resize images retrieved from the API
* Convert 32x32 image into an array of RGB values which can be sent to the LED panel
