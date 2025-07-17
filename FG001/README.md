# Simple object detection circuit

This is a simple embedded system project that uses:
- An **IR sensor** to detect objects
- A **16x2 LCD screen** to display status
- A **buzzer** to alert when an object is detected

### How it works
The IR sensor detects an object and sends a signal to **Arduino pin 8**.  
The Arduino reads this digital input and:
- Displays `"SAFE"` or `"NOT SAFE"` on the LCD
- Activates a buzzer (connected to **pin 9**) when an object is detected

---

## Components Used
- Arduino Uno R3
- IR Obstacle Detection Sensor
- 16x2 LCD (without I2C)
- Active Buzzer
- 10k Potentiometer
- Breadboard + Jumper wires

---

## Wiring Info

### LCD Pins:
| LCD Pin | Function              | Connection         |
|---------|-----------------------|--------------------|
| 1       | GND                   | GND                |
| 2       | VCC                   | +5V                |
| 3       | Contrast (V0)         | Potentiometer wiper|
| 4       | RS                    | Arduino pin 12     |
| 5       | RW                    | GND                |
| 6       | E                     | Arduino pin 11     |
| 11      | D4                    | Arduino pin 5      |
| 12      | D5                    | Arduino pin 4      |
| 13      | D6                    | Arduino pin 3      |
| 14      | D7                    | Arduino pin 2      |
| 15      | Backlight (+)         | +5V                |
| 16      | Backlight (−)         | GND                |

### Potentiometer:
- Left terminal → GND  
- Wiper (center) → LCD pin 3  
- Right terminal → +5V

### Buzzer:
- Positive → Arduino pin 9  
- Negative → GND

---

## Demo

[Watch Demo Video](https://youtube.com/shorts/0UVIwQNi9Zo)
