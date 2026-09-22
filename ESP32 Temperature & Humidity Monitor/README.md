# ESP32 Temperature & Humidity Monitor with OLED Display and Alert System

## Project Overview

This project monitors temperature and humidity using a DHT11 sensor and displays the readings on an OLED display. A green LED indicates normal conditions, while a red LED and buzzer alert the user when the temperature exceeds a predefined threshold.

## Components Used

- ESP32 DevKit V1
- DHT11 Temperature & Humidity Sensor
- 0.96" OLED Display (SSD1306)
- Green LED
- Red LED
- Active Buzzer
- 220Ω Resistors
- Breadboard
- Jumper Wires

## Circuit Diagram

![Circuit Diagram](circuit_diagram.png)

## Project Photo

![Project Photo](Project_image.jpg)

## GPIO Connections

 Component         ESP32 Pin 

 DHT11 Data  ->    GPIO 4 
 OLED SDA    ->    GPIO 21 
 OLED SCL    ->    GPIO 22 
 Green LED   ->    GPIO 2 
 Red LED     ->    GPIO 15 
 Buzzer      ->    GPIO 18 

## Working Principle

1. The DHT11 sensor measures temperature and humidity.
2. Sensor readings are displayed on the OLED screen in real time.
3. If temperature is within the normal range:
   - Green LED turns ON.
   - Red LED remains OFF.
   - Buzzer remains OFF.
4. If temperature exceeds the threshold:
   - Red LED turns ON.
   - Green LED turns OFF.
   - Buzzer sounds an alert.
5. The system continuously updates the readings and alert status.

## Features

- Real-time temperature monitoring
- Real-time humidity monitoring
- OLED display output
- Green LED for normal condition indication
- Red LED for high temperature warning
- Buzzer alert system
- ESP32-based implementation

## Source Code

`Temperature_Sensor_with_display.ino`

## Applications

- Room Environment Monitoring
- Home Automation
- Weather Monitoring
- Server Room Monitoring
- Industrial Temperature Monitoring

## Libraries Used

- DHT Sensor Library
- Adafruit GFX Library
- Adafruit SSD1306 Library
- Wire Library

These libraries are commonly used for DHT11 and OLED display projects with ESP32. :contentReference[oaicite:0]{index=0}

## Project Demonstration

📺 Watch the Project Video:

(Add your YouTube video link here)

## Author

### Sumit Waghmare

Watch the project Video:
https://youtu.be/kpD8-ZhHqiA?si=uw8NA2s_P5INsQ3r

YouTube Channel:
https://www.youtube.com/@sumitlab8028

LinkedIn:
https://www.linkedin.com/in/sumit-waghmare-
