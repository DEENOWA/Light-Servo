# LightServo Improved Version

## Project Overview
This improved version of LightServo models a street light system using a photoresistor to measure light intensity, controlling a servo motor and an LED. In bright conditions (max photons), the servo rotates to 180° (indicating daylight) and the LED turns off. In darkness (no photons), the servo moves to 0° (indicating night) and the LED shines at maximum brightness. Intermediate light levels adjust the servo angle and LED brightness proportionally. Data is output to the Serial Monitor.

## Components and Features
- **Components**:
  - Photoresistor (LDR, e.g., GL5528)
  - Servo Motor (e.g., SG90)
  - LED (preferably white or yellow to simulate a street light)
  - Arduino Board (e.g., Uno)
  - Resistors (10k ohm for photoresistor pull-down, 220–330 ohm for LED)
  - Jumper wires
  - Breadboard (optional)
- **Features**:
  - Measures light intensity (0–1023) using a photoresistor.
  - Maps light intensity to:
    - Servo position: 0° (dark) to 180° (bright), indicating light conditions.
    - LED brightness: 255 (dark) to 0 (bright), simulating a street light.
  - Updates every 100ms for real-time response.
  - Outputs light value, servo position, and LED brightness to the Serial Monitor.

## Hardware Requirements
- Arduino Uno (or compatible board)
- Photoresistor (Light Dependent Resistor, e.g., GL5528)
- Servo Motor (e.g., SG90)
- LED (white or yellow recommended)
- 10k ohm resistor (for photoresistor pull-down)
- 220–330 ohm resistor (for LED)
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
   - Connect the LED:
     - Anode to Pin 10 (PWM-capable) via a 220–330 ohm resistor
     - Cathode to Arduino GND
2. **Software**:
   - Install the Arduino IDE from [arduino.cc](https://www.arduino.cc/en/software).
   - Install the `Servo` library:
     - In Arduino IDE, go to Sketch > Include Library > Manage Libraries.
     - Search for "Servo" (built-in, usually pre-installed).
   - Copy the `light_servo_improved.ino` code into the Arduino IDE.
3. **Upload**:
   - Connect your Arduino to your computer via USB.
   - Upload the code to your Arduino board.

## Usage Instructions
1. Open the Serial Monitor in the Arduino IDE (set to 9600 baud).
2. The system will:
   - Read light intensity from the photoresistor every 100ms.
   - Adjust the servo: 180° in bright light (daylight indicator), 0° in darkness (night indicator).
   - Adjust the LED: Off in bright light, maximum brightness (255) in darkness, proportional in between.
   - Display in the Serial Monitor:
     - `Light Value: [value] | Servo Position: [degrees] | LED Brightness: [value]`
3. Test by varying light on the photoresistor (e.g., cover it or shine a light) to observe servo movement and LED brightness changes.

## Improvements Over Original
- Added an LED to simulate a street light, brightest in darkness and off in bright light.
- Enhanced Serial output to include LED brightness alongside light value and servo position.
- Improved mapping logic for smoother servo and LED control using the `map` function.
