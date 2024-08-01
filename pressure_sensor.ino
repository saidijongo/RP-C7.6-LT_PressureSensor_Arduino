const int sensorPin = A0;  // Analog input pin for the sensor
const int sensorPower = 5; // Sensor supply voltage
const int resistorValue = 10000; // 10kΩ R

void setup() {
  Serial.begin(115200);
  pinMode(sensorPin, INPUT);
}

void loop() {
  // Read the analog input
  int sensorValue = analogRead(sensorPin);

  // Calculate the voltage from the sensor reading
  float voltage = (sensorValue / 1023.0) * sensorPower;

  // Calculate the sensor resistance
  float sensorResistance = (sensorPower * resistorValue / voltage) - resistorValue;

  // Print the sensor resistance to the Serial Monitor
  Serial.print("Sensor Resistance: ");
  Serial.print(sensorResistance);
  Serial.println(" ohms");

  delay(1000); // 1 sec delay before the next reading
}
