#include <TM1637Display.h>// Include the library for seven segment display 
const int irSensorPin = 2; // Digital pin connected to the IR sensor OUT pin 
const int clkPin = 3; // Digital pin connected to the TM1637 CLK pin 
const int dioPin = 4; // Digital pin connected to the TM1637 DIO pin 
TM1637Display display(clkPin, dioPin);// Create a display object of type TM1637Display 
int objectCount = 0;//Define a Variable for person measurements 
int lastState = LOW;//define lastState as zero 
int currentState;//Define a Variable for person measurements 
void setup() { 
pinMode(irSensorPin, INPUT);//declare the pin as input 
display.setBrightness(0xff); // Set display brightness to 0x0f 
display.clear(); 
} 
void loop() { 
currentState = digitalRead(irSensorPin);//read the values from the pin 
// Check if the IR sensor state changed from LOW to HIGH 
if (lastState == LOW && currentState == HIGH) { 
objectCount++; 
display.showNumberDec(objectCount); // Update display with new count 
delay(200); // Debounce delay 
} 
lastState = currentState; 
}
