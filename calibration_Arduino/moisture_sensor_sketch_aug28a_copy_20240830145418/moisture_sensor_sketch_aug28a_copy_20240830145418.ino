// Define the pin where the capacitive moisture sensor is connected
const int moistureSensorPin = A0;  // Analog pin A0

// Variables to store sensor reading and moisture level
int sensorValue = 0;
int moistureLevel = 0;

void setup() {
  // Start the serial communication
  Serial.begin(9600);

  // Optionally, you can set up the pin modes here
  // pinMode(moistureSensorPin, INPUT);
}

void loop() {
  // Read the value from the capacitive moisture sensor
  sensorValue = analogRead(moistureSensorPin);

  // Convert the sensor value to a moisture level percentage (0-100%)
  // The conversion might need calibration based on your sensor's range
  moistureLevel = map(sensorValue, 955, 536, 0, 100);

  // Print the sensor value and moisture level to the serial monitor
  Serial.print("Sensor Value: ");
  Serial.print(sensorValue);
  Serial.print(" - Moisture Level: ");
  Serial.print(moistureLevel);
  Serial.println("%");

  // Wait for a bit before taking the next reading
  delay(1000);  // 1 second delay
}
