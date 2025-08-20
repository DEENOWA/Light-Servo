# Light-Servo
LightServo is an Arduino-based project that uses a photoresistor to control a servo motor based on light intensity. The original version adjusts the servo position (0–180°) according to light levels. The improved version adds an LED to model a street light, turning off in bright conditions and shining brightest in darkness, with the servo indicating light conditions (180° for daylight, 0° for night). Both versions output data to the Serial Monitor.

## Repository Structure
- **original_version/**: Basic version with photoresistor and servo control.
- **improved_version/**: Enhanced version with LED for street light simulation.
- **docs/**: (Optional) For wiring diagrams or additional documentation.
- **LICENSE**: MIT License for the project.

## Getting Started
1. Clone or download this repository.
2. Navigate to the desired version’s subfolder (`original_version` or `improved_version`).
3. Follow the `README.md` in each subfolder for specific setup and usage instructions.

## General Hardware Requirements
- Arduino Uno (or compatible board)
- Photoresistor (e.g., GL5528)
- Servo Motor (e.g., SG90)
- LED and 220–330 ohm resistor (improved version only)
- 10k ohm resistor (for photoresistor)
- Jumper wires, breadboard

## General Setup
- Install the Arduino IDE from [arduino.cc](https://www.arduino.cc/en/software).
- Install the `Servo` library via Arduino IDE (Sketch > Include Library > Manage Libraries > Search "Servo").
- Follow wiring and upload instructions in the respective README files.

## Usage
- Both versions measure light intensity and adjust the servo position.
- The improved version adds LED control for street light simulation.
- Refer to each subfolder’s README for detailed usage.

## License
This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## Contributing
Feel free to fork this repository, make improvements, and submit pull requests. Suggestions for new features or bug fixes are welcome!
