# 🧤 TerraRecon Glove – Hardware Schematic

## 🔌 Components Used

| Component             | Quantity | Description                              |
|----------------------|----------|------------------------------------------|
| Arduino Nano         | 1        | Microcontroller for sensor + motor logic |
| HC-SR04 Ultrasonic   | 2        | Distance sensors (left & right)          |
| Vibration Motor      | 2        | Haptic feedback (left & right)           |
| 9V Battery + Clip    | 1        | Power source                             |
| Breadboard           | 1        | Prototyping connections                   |
| Jumper Wires         | ~15      | Male-to-male for connections             |
| Resistors (220Ω)     | 2        | Optional: current limiting for motors    |

---

## 🧭 Pin Connections

### 🔹 Left Sensor + Motor
- **Trig (Sensor Left)** → D2  
- **Echo (Sensor Left)** → D3  
- **Motor Left** → D4  

### 🔹 Right Sensor + Motor
- **Trig (Sensor Right)** → D5  
- **Echo (Sensor Right)** → D6  
- **Motor Right** → D7  

### 🔋 Power
- **VCC (Sensors + Motors)** → 5V  
- **GND (All components)** → GND  
- **Battery** → VIN + GND (via clip)

---

## 🖼️ Suggested Fritzing Layout

[Arduino Nano]
├── D2  → Trig (Left Ultrasonic Sensor)                                                                                                                                             
├── D3  → Echo (Left Ultrasonic Sensor)                                                        
├── D4  → Motor (Left Vibration)                                              
├── D5  → Trig (Right Ultrasonic Sensor)                                              
├── D6  → Echo (Right Ultrasonic Sensor)                                              
├── D7  → Motor (Right Vibration)                                         
├── 5V  → VCC (Both Sensors + Motors)                                                        
├── GND → GND (All Components)                                                             
└── VIN → 9V Battery (+)                                        
     └── GND → 9V Battery (–)                         


---

## 🛠️ Notes

- Place sensors on glove fingertips or palm for optimal detection.
- Motors can be sewn into the glove near knuckles or wrist.
- Use heat shrink tubing or fabric tape to secure wires.

---
