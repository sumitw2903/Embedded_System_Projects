# Motion Detection LED using ESP32

## Project Overview

This project uses an ESP32 and a PIR motion sensor to detect movement. When motion is detected, an LED turns ON automatically. When no motion is detected, the LED remains OFF.

## Components Used

- ESP32 DevKit V1
- PIR Motion Sensor (HC-SR505)
- LED
- 220Ω Resistor
- Breadboard
- Jumper Wires

## Circuit Diagram

![Circuit Diagram](circuit_diagram.png)

## Project Photo

![Project Photo](Project_image.jpg)

## GPIO Connections

 Sensor Pin          ESP32 Pin 

 PIR OUT       ->    GPIO 4 
 LED Positive  ->    GPIO 18  
 PIR VCC       ->    3.3V 
 PIR GND       ->    GND 
 LED Negative  ->    GND (through 220Ω resistor)

## Features

- Real-time motion detection
- Automatic LED control
- Low power consumption
- Simple and cost-effective security application

## Source Code

Motion_Sensor_Program.ino

## Applications

- Home Security Systems
- Smart Lighting
- Motion Activated Devices
- Energy Saving Systems

## Author

### Sumit Waghmare

LinkedIn:
https://www.linkedin.com/in/sumit-waghmare-

Watch the project video:


YouTube Channel:
https://www.youtube.com/@sumitlab8028
