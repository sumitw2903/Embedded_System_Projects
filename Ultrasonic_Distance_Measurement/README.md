# Ultrasonic Distance Measurement using ESP32

## Project Overview

This project measures the distance of an object using the HC-SR04 ultrasonic sensor and ESP32.

## Components Used

- ESP32 DevKit V1
- HC-SR04 Ultrasonic Sensor
- Breadboard
- Jumper Wires

## Circuit Diagram

![Circuit Diagram](circuit_diagram.png)

## Project Photo

![Project Photo](Project_image.jpg)

## GPIO Connections

 HC-SR04     ESP32 
 VCC    ->   3.3/5V 
 GND    ->   GND 
 TRIG   ->   GPIO 5 
 ECHO   ->   GPIO 18 

## Working Principle

1. ESP32 sends a trigger pulse to the HC-SR04 sensor.
2. The sensor transmits an ultrasonic wave.
3. The wave reflects from an object and returns to the sensor.
4. ESP32 measures the echo time.
5. Distance is calculated using the speed of sound. 
## Features

- Real-time distance measurement
- Accurate object detection
- Easy ESP32 interfacing
- Serial Monitor output

## Applications

- Obstacle Detection
- Robot Navigation
- Distance Measurement Systems
- Smart Parking Systems
- Automation Projects  

## Source Code
ultrasonic_distance_measurement.ino

## Author
Sumit Waghmare

Watch the project Video:
https://youtu.be/UsXGg_bH8ts?si=-209mZDg69pSJKbB

YouTube Channel:
https://www.youtube.com/@sumitlab8028

 LinkedIn:
https://www.linkedin.com/in/sumit-waghmare-
