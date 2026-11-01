# Single-Axis Target Tracker

An Arduino-based closed-loop control system that autonomously tracks a light source using a proportional control algorithm. This project serves as the foundational mechanical and algorithmic proof-of-concept for a future autonomous pan-tilt target tracking turret.

## Features
* **Proportional (P) Controller:** Calculates the error margin between two LDR sensors and dynamically adjusts the stepper motor's step size for smooth, jitter-free targeting.
* **Real-Time Telemetry:** Outputs sensor readings and error (deviation) margins continuously to the Serial Monitor.
* **Hardware Setup:** Utilizes an Arduino Uno, a 28BYJ-48 Stepper Motor with ULN2003 driver, and photoresistors in a voltage divider configuration.

## Components
* Arduino Uno
* 28BYJ-48 Stepper Motor & ULN2003 Driver Board
* 2x LDR (Photoresistors) & Resistors
* Breadboard and Jumper Wires

## Future Work
This single-axis mechanism is designed to be upgraded into a dual-axis (pan-tilt) autonomous tracking turret prototype. Future iterations will replace the LDR sensor array with camera-based computer vision tracking algorithms.



## (you can use with breadboard or pcb format)
