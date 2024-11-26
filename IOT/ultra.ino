#include <NewPing.h> 
// Define the pins for the HC-SR04 sensor 
#define TRIGGER_PIN 9 
#define ECHO_PIN 10 
// Define the maximum distance for the sensor in centimeters 
#define MAX_DISTANCE 100 
// Create a NewPing object 
NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE); 
void setup() { 
Serial.begin(9600); // Initialize serial communication at 9600 baud 
} 
void loop() { 
delay(50); // Short delay to avoid flooding the serial monitor 
// Measure distance in centimeters 
unsigned int distance = sonar.ping_cm(); 
// Check if the distance is valid and print it 
if (distance > 0) { 
Serial.print("Distance = "); 
Serial.print(distance); 
Serial.println(" cm"); 
} else { 
Serial.println("0"); 
} 
delay(500); // Wait 500 milliseconds before the next measurement 
} 
