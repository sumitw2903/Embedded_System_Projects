# Smart Home Automation Using ESP32, Relay Module and Blynk IoT

## Project Overview

This project demonstrates a Smart Home Automation System using an ESP32 microcontroller, a relay module, and the Blynk IoT platform. The system allows users to remotely control an electrical appliance such as a light bulb through the Blynk mobile application over Wi-Fi.

The ESP32 connects to the Blynk Cloud Server and receives commands from the smartphone app. Based on the user's input, the relay switches the connected appliance ON or OFF.

## Components Used

* ESP32 DevKit V1
* 1-Channel Relay Module
* AC Light Bulb
* Bulb Holder
* Power Supply
* Breadboard
* Jumper Wires
* Smartphone with Blynk App
* Wi-Fi Network

## Circuit Diagram

![Circuit Diagram](circuit_diagram.png)

## Project Photo

![Project Photo](Project_image.jpg)

## GPIO Connections

 Component          ESP32 Pin 

 Relay IN     ->    GPIO 23   
 Relay VCC    ->    VIN (5V)  
 Relay GND    ->    GND       

### AC Load Connection

 Relay Terminal           Connection       

 COM             ->       AC Phase Input   
 NO              ->       Bulb Phase Input 
 Bulb Neutral    ->       AC Neutral       

⚠️ **Safety Warning:** This project involves 230V AC mains voltage. Ensure proper insulation and disconnect power before making any connections.

## Working Principle

1. ESP32 connects to the local Wi-Fi network.
2. The device authenticates with the Blynk IoT Cloud using the Auth Token.
3. A button widget in the Blynk mobile app sends commands to the ESP32.
4. ESP32 receives the command through the internet.
5. The relay module switches ON or OFF based on the received command.
6. The connected bulb responds accordingly.
7. Users can control the appliance from anywhere with internet access.

## Features

* Remote appliance control
* Blynk IoT cloud integration
* Wi-Fi communication
* Real-time ON/OFF switching
* Smartphone-based control
* Easy to expand with multiple relays
* Low-cost smart home solution
* Beginner-friendly IoT project

## Source Code

```text
Smart_Home_Automation_Blynk_IoT.ino
```

## Applications

* Smart Home Automation
* Remote Light Control
* Office Automation
* IoT Learning Projects
* Home Energy Management
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

Install all required libraries from the Arduino IDE Library Manager before uploading the code.

## Blynk IoT Setup

1. Create an account on Blynk IoT.
2. Create a new Template.
3. Create a Device from the template.
4. Copy the Template ID, Device Name, and Auth Token.
5. Add a Button Widget to the dashboard.
6. Assign the button to Virtual Pin **V0**.
7. Upload the code to ESP32.
8. Connect the device to Wi-Fi and start controlling the bulb remotely.

## Future Improvements

* Multiple appliance control
* Voice control integration
* Energy monitoring system
* Motion sensor-based automation
* LDR-based automatic lighting
* Mobile notifications
* Scheduling and timer functionality

### YouTube Channel

https://www.youtube.com/@sumitlab8028


## Project Demonstration 

📺 Watch the Project Video:

(Add your YouTube video link here) 

## Author 
### Sumit Waghmare 

Watch the project Video: 
 

YouTube Channel: 
https://www.youtube.com/@sumitlab8028 

LinkedIn: https://www.linkedin.com/in/sumit-waghmare-
