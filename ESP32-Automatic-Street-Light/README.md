# Automatic Street Light System Using ESP32 and LDR Sensor

## Project Overview

This project implements an Automatic Street Light System using an ESP32 microcontroller, an LDR (Light Dependent Resistor) sensor, a relay module, and a light bulb. The system automatically turns the street light ON during low-light conditions (night) and turns it OFF during bright conditions (day).

The LDR continuously monitors ambient light intensity. Based on the measured light level, the ESP32 controls the relay module, which switches the street light automatically without human intervention.

## Components Used

- ESP32 DevKit V1
- LDR (Light Dependent Resistor)
- 10kΩ Resistor
- 1-Channel Relay Module
- AC Light Bulb
- Bulb Holder
- Breadboard
- Jumper Wires
- Power Supply

## Circuit Diagram

![Circuit Diagram](circuit_diagram.png)

## Project Photo

![Project Photo](Project_image.jpg)

## GPIO Connections

 Component         ESP32 Pin 

 LDR Output   ->     GPIO 34 
 Relay IN     ->     GPIO 23 
 Relay VCC    ->     VIN (5V) 
 Relay GND    ->     GND 

### AC Bulb Connection

 Relay Terminal          Connection 

 COM              ->     AC Phase Input 
 NO               ->     Bulb Phase Input 
 Bulb Neutral     ->     AC Neutral 

⚠️ **Safety Warning:** This project uses 230V AC mains voltage. Always disconnect power before wiring and follow proper electrical safety procedures.

## Working Principle

1. The LDR sensor detects the surrounding light intensity.
2. ESP32 continuously reads the LDR value through its ADC pin.
3. During daytime, the light intensity is high:
   - Relay remains OFF
   - Bulb remains OFF
4. During nighttime, the light intensity decreases:
   - Relay turns ON
   - Bulb turns ON automatically
5. The system continuously monitors light conditions and switches the street light accordingly.

## Features

- Automatic day/night detection
- Energy-saving operation
- ESP32-based implementation
- Relay-controlled AC load
- Real-time light monitoring
- Low-cost and easy-to-build project
- Suitable for smart city applications

## Applications

- Street Lighting Systems
- Smart City Projects
- Garden Lighting
- Parking Area Lighting
- Highway Lighting
- Campus Lighting
- Home Outdoor Lighting

## Software Requirements

- Arduino IDE
- ESP32 Board Package
- WiFi Library (Optional)

## Libraries Used

- Arduino Core for ESP32

No additional libraries are required for basic LDR and relay operation.

## Features for Future Improvements

- Blynk IoT Monitoring
- Solar-Powered Street Light System
- Energy Consumption Monitoring
- Motion Sensor Integration
- Smart City IoT Dashboard
- Mobile Notifications

## Author
**Sumit **  

### Project Video Link 
https://youtu.be/dZgkXffLQWQ?si=Dpqr4Dlsl6mXkyYH

### YouTube Channel
https://www.youtube.com/@sumitlab8028

### LinkedIn
https://www.linkedin.com/in/sumit-waghmare-
 
