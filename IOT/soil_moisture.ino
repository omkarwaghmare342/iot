const int soilMoisturePin = A0; // Analog pin where soil sensor is connected 
const int motorPin = 7; // Digital pin connected to the relay module 
const int moistureThreshold = 900; // Adjust this value based on calibration 
void setup() { 
Serial.begin(9600); // Initialize serial communication for debugging 
pinMode(motorPin, OUTPUT);// Initialize the motor control pin AS Output 
digitalWrite(motorPin, LOW);// Ensure the motor is off 
} 
void loop() { 
int moistureValue = analogRead(soilMoisturePin); // Read the soil moisture value from the sensor 
Serial.print("Soil Moisture Value: ");// Print the moisture value to the Serial Monitor 
Serial.println(moistureValue); 
if (moistureValue < moistureThreshold) { 
digitalWrite(motorPin, LOW);// If soil is dry, turn on the motor 
Serial.println("Soil is too dry - time to water!"); 
} else { 
digitalWrite(motorPin, HIGH);// If soil is wet enough, turn off the motor 
Serial.println("Soil moisture is perfect"); 
} 
delay(5000); 
} 
