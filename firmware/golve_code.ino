// 🧤 TerraRecon Smart Glove Firmware
// Detects obstacles using ultrasonic sensors and provides haptic feedback via vibration motors

// --- Pin Definitions ---
const int trigPinLeft = 2;
const int echoPinLeft = 3;
const int motorPinLeft = 4;

const int trigPinRight = 5;
const int echoPinRight = 6;
const int motorPinRight = 7;

// --- Constants ---
const int detectionThreshold = 30; // in centimeters

void setup() {
  // Initialize serial monitor
  Serial.begin(9600);

  // Set pin modes
  pinMode(trigPinLeft, OUTPUT);
  pinMode(echoPinLeft, INPUT);
  pinMode(motorPinLeft, OUTPUT);

  pinMode(trigPinRight, OUTPUT);
  pinMode(echoPinRight, INPUT);
  pinMode(motorPinRight, OUTPUT);
}

void loop() {
  // Measure distances
  int distanceLeft = getDistance(trigPinLeft, echoPinLeft);
  int distanceRight = getDistance(trigPinRight, echoPinRight);

  // Debugging output
  Serial.print("Left: ");
  Serial.print(distanceLeft);
  Serial.print(" cm | Right: ");
  Serial.print(distanceRight);
  Serial.println(" cm");

  // Activate motors based on proximity
  digitalWrite(motorPinLeft, distanceLeft < detectionThreshold ? HIGH : LOW);
  digitalWrite(motorPinRight, distanceRight < detectionThreshold ? HIGH : LOW);

  delay(100); // Small delay to stabilize readings
}

// --- Function to measure distance using ultrasonic sensor ---
int getDistance(int trigPin, int echoPin) {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  long duration = pulseIn(echoPin, HIGH);
  int distance = duration * 0.034 / 2; // Convert to cm
  return distance;
}
