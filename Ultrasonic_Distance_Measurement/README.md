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

| HC-SR04 Pin | ESP32 Pin |
|------------|-----------|
| VCC | 5V |
| GND | GND |
| TRIG | GPIO 5 |
| ECHO | GPIO 18 |

## Working Principle

The ESP32 sends a pulse through the TRIG pin. The HC-SR04 returns an echo pulse. The ESP32 calculates the distance based on the time taken for the echo to return.

## Source Code

ultrasonic_distance_measurement.ino

## Project Demonstration

📺 YouTube Video:
(Add your YouTube video link here)

## Author

Sumit Waghmare

💼 LinkedIn:
https://www.linkedin.com/in/sumit-waghmare-
