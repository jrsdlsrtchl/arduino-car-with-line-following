# Arduino Remote Control Car with Line Following Feature

## Project Overview

This project demonstrates how to build a remote-controlled car using Arduino, which can be operated via a mobile phone. Additionally, the car is equipped with a line-following feature that allows it to autonomously follow a predefined path using infrared (IR) sensors.

## Features

- **Mobile Control**: Control the car's movement (forward, backward, left, right, and stop) through a mobile app using Bluetooth communication.
- **Line Following**: The car is capable of following a black line on a white surface using IR sensors, adjusting its speed and direction to stay on track.
- **Real-time Response**: The system ensures real-time responsiveness, providing smooth control and transitions between remote and autonomous modes.

## Components Used

- Arduino Uno (or compatible)
- L298N Motor Driver
- DC Motors and Wheels
- Bluetooth Module (e.g., HC-05 or HC-06)
- IR Sensors (for line following)
- Power Supply (batteries)
- Chassis for the car
- Jumper Wires and Breadboard (optional)

## How It Works

1. **Remote Control**: Once the Bluetooth module is paired with your phone, you can use the mobile app to send commands (e.g., forward, backward, left, right, stop). The Arduino receives these commands and controls the motors accordingly.
2. **Line Following**: The IR sensors detect the black line, and the Arduino adjusts the car's motors to follow the line, maintaining its position and direction based on sensor input.

## Installation & Usage

1. Upload the Arduino sketch to your board.
2. Connect the Bluetooth module and sensors as per the circuit diagram.
3. Use the mobile app to control the car remotely or let it operate in line-following mode by switching modes.

## Video Link for the Project
https://youtube.com/shorts/venxyQOnEhc?feature=share


