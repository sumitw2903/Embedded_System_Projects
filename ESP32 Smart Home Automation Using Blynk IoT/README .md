# ESP32 Smart Home Automation Using Blynk IoT

## Project Overview

This project implements a Smart Home Automation System using an ESP32 microcontroller, a relay module, and the Blynk IoT platform. The system allows users to control a household light bulb remotely through the Blynk mobile application from anywhere with an internet connection.

## Components Used

* ESP32 DevKit V1
* 1-Channel Relay Module
* AC Light Bulb
* Bulb Holder
* Power Supply
* Jumper Wires
* Breadboard
* Blynk IoT Platform
* Wi-Fi Network

## Circuit Diagram

![Circuit Diagram](circuit_diagram.png)

## Project Photo

![Project Photo](Project_image.jpg)

## GPIO Connections

 Component       ESP32 Pin 
 
 Relay IN   ->   GPIO 23   
 Relay VCC  ->   VIN (5V)  
 Relay GND  ->   GND       

### AC Bulb Connection

 Relay Terminal          Connection       

 COM              ->     AC Phase Input   
 NO               ->     Bulb Phase Input 
 Neutral          ->     Directly to Bulb 

⚠️ **Warning:** This project uses 230V AC mains voltage. Always disconnect power before wiring and follow electrical safety practices.

## Working Principle

1. ESP32 connects to the local Wi-Fi network.
2. ESP32 establishes communication with the Blynk Cloud Server.
3. The user controls a button widget in the Blynk mobile app.
4. Blynk sends the command to the ESP32 through the internet.
5. ESP32 turns the relay ON or OFF.
6. The relay controls the connected light bulb remotely.

## Features

* Remote appliance control using smartphone
* Blynk IoT cloud integration
* Wi-Fi-based communication
* Real-time switching
* Low-cost home automation solution
* Easy to expand for multiple appliances
* ESP32-based implementation

## Source Code

```text
Smart_Home_Automation_Blynk.ino
```

## Applications

* Smart Home Automation
* Remote Light Control
* Home Energy Management
* IoT Learning Projects
* Office Automation
* Smart Building Systems

## Software Requirements

* Arduino IDE
* ESP32 Board Package
* Blynk Library
* Wi-Fi Connection

## Libraries Used

* Blynk Library
* WiFi Library
* BlynkSimpleEsp32 Library

Install all required libraries through the Arduino IDE Library Manager before uploading the code.

## Blynk IoT Setup

1. Create an account on Blynk IoT.
2. Create a new template and device.
3. Copy the Template ID, Device Name, and Auth Token.
4. Add a Button Widget.
5. Set the Datastream to **V0**.
6. Upload the code to ESP32.
7. Connect the device to Wi-Fi and start controlling the bulb remotely.

## Future Improvements

* Multiple relay control
* Fan control
* Voice assistant integration
* Energy monitoring system
* Motion sensor automation
* Mobile notifications
* Scheduling and timer control


### YouTube Channel

https://www.youtube.com/@sumitlab8028


## Author 
### Sumit Waghmare 
Watch the project Video: 
https://youtu.be/FlmqYPFcvGw?si=YPz5wDEqQnj0Zwcu

YouTube Channel:
https://www.youtube.com/@sumitlab8028 

LinkedIn: https://www.linkedin.com/in/sumit-waghmare-
