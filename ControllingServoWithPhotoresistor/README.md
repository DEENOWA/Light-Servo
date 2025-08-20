# LightServo Original Version

## Project Overview
This is the original version of LightServo, an Arduino-based project that uses a photoresistor to measure light intensity and control a servo motor’s position. The servo rotates from 0 to 180 degrees based on the light level, with brighter light moving the servo toward 180 degrees and dimmer light toward 0 degrees. Light values and servo positions are output to the Serial Monitor.

## Components and Features
- **Components**:
  - Photoresistor (LDR, e.g., GL5528)
  - Servo Motor (e.g., SG90)
  - Arduino Board (e.g., Uno)
  - Resistor (10k ohm for photoresistor pull-down)
  - Jumper wires
  - Breadboard (optional)
- **Features**:
  - Measures light intensity (0–1023) using a photoresistor.
  - Maps light intensity to servo position (0–180 degrees).
  - Updates servo position every 100ms.
  - Outputs light value and servo position to the Serial Monitor.

## Hardware Requirements
- Arduino Uno (or compatible board)
- Photoresistor (Light Dependent Resistor, e.g., GL5528)
- Servo Motor (e.g., SG90)
- 10k ohm resistor (for photoresistor pull-down)
- Jumper wires
- Breadboard (optional)

## Setup Instructions
1. **Wiring**:
   - Connect the photoresistor:
     - One leg to Arduino 5V
     - Other leg to Pin A0 and a 10k ohm resistor to GND
   - Connect the servo motor:
     - Signal (orange) to Pin 9
     - VCC (red) to Arduino 5V
     - GND (brown) to Arduino GND
2. **Software**:
   - Install the Arduino IDE from [arduino.cc](https://www.arduino.cc/en/software).
   - Install the `Servo` library:
     - In Arduino IDE, go to Sketch > Include Library > Manage Libraries.
     - Search for "Servo" (built-in, usually pre-installed).
   - Copy the `light_servo.ino` code into the Arduino IDE.
3. **Upload**:
   - Connect your Arduino to your computer via USB.
   - Upload the code to your Arduino board.

## Usage Instructions
1. Open the Serial Monitor in the Arduino IDE (set to 9600 baud).
2. The system will:
   - Read light intensity from the photoresistor every 100ms.
   - Map the light value (0–1023) to a servo position (0–180 degrees).
   - Move the servo to the corresponding position.
   - Display in the Serial Monitor:
     - `Light Value: [value] | Servo Position: [degrees]`
3. Vary the light on the photoresistor (e.g., cover it or shine a light) to observe the servo movement.
