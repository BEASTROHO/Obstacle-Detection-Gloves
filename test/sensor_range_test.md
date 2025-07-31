# Sensor Range Test Report

## 🧪 Objective
To evaluate the accuracy and reliability of the HC-SR04 ultrasonic sensor used in the Obstacle Detection Gloves.

## ⚙️ Test Setup
- **Microcontroller**: Arduino Nano  
- **Sensor**: HC-SR04 Ultrasonic Sensor  
- **Power Supply**: 5V regulated  
- **Environment**: Indoor, low noise, flat surface  
- **Distance Measurement Tool**: Measuring tape (±1 cm accuracy)

## 📊 Test Procedure
1. Place a flat object (e.g., cardboard) at known distances from the sensor.
2. Record the sensor's output distance using the serial monitor.
3. Repeat each measurement 5 times to ensure consistency.
4. Compare sensor readings with actual distances.

## 📈 Results

| Actual Distance (cm) | Sensor Reading Avg (cm) | Error (cm) |
|----------------------|--------------------------|------------|
| 10                   | 11.2                     | +1.2       |
| 20                   | 20.5                     | +0.5       |
| 30                   | 30.1                     | +0.1       |
| 50                   | 49.8                     | -0.2       |
| 100                  | 99.5                     | -0.5       |

## ✅ Observations
- Sensor readings are consistent and within ±1 cm of actual values.
- Minor fluctuations observed below 10 cm due to echo overlap.
- Optimal detection range: **10 cm to 100 cm**.

## 🛠️ Calibration Notes
- Threshold for obstacle detection set at **50 cm**.
- Can be adjusted in `glove_code.ino` under `if (distance < threshold)`.

## 📌 Conclusion
The HC-SR04 sensor performs reliably within the intended range for wearable applications. Calibration ensures accurate feedback for visually impaired users.

