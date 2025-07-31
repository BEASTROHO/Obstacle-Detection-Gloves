# System Overview

## 🎯 Purpose
The Obstacle Detection Gloves are designed to assist visually impaired individuals by providing real-time haptic feedback when obstacles are detected. This wearable system enhances spatial awareness and promotes safer mobility.

## 🧠 Core Components
- **Arduino Nano**: Acts as the central controller.
- **Ultrasonic Sensor (HC-SR04)**: Measures distance to nearby objects.
- **Vibration Motor**: Delivers tactile feedback when obstacles are detected.
- **Li-ion Battery + TP4056 Module**: Powers the system and enables safe charging.

## 🔁 Working Principle
1. The ultrasonic sensor emits sound waves and measures the time taken for echoes to return.
2. The Arduino calculates the distance using the time-of-flight formula.
3. If the distance is below a threshold (e.g., 50 cm), the vibration motor is activated.
4. Continuous scanning ensures real-time feedback as the user moves.

## 🔌 Power Management
- Operates on a 3.7V Li-ion battery.
- TP4056 module ensures safe charging and prevents over-discharge.
- System draws minimal current, allowing several hours of use per charge.

## 🧪 Calibration & Testing
- Sensor range tested from 2 cm to 400 cm.
- Threshold distance can be adjusted in firmware (`glove_code.ino`).
- Vibration intensity can be tuned via PWM output.

## 🧤 Wearability
- Components mounted on a comfortable glove.
- Wires routed to minimize discomfort and ensure durability.
- Lightweight design for daily use.

## 📈 Future Improvements
- Add Bluetooth module for remote monitoring.
- Integrate multiple sensors for 360° awareness.
- Use flexible PCBs for better ergonomics.

