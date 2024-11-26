#include <DHT.h>
#define DHTPIN 2 // define the pin for connection 
#define DHTTYPE DHT11 // define DHTTYPE DHT 11 
DHT dht(DHTPIN, DHTTYPE); // Initialize DHT sensor for normal 16mhz Arduino 
void setup() { 
Serial.begin(9600);//write a baud rate for serial communication 
Serial.println("DHT11 test!"); 
dht.begin(); 
} 
void loop() { 
delay(2000); 
// Reading temperature or humidity takes about 250 milliseconds! 
// Sensor readings may also be up to 2 seconds 'old' (its a very slow sensor) 
float h = dht.readHumidity(); 
float t = dht.readTemperature(); 
float f = dht.readTemperature(true); 
if (isnan(h) || isnan(t) || isnan(f)) { 
Serial.println("Failed to read from DHT sensor!"); 
return; 
} 
// Compute heat index 
// Must send in temp in Fahrenheit! 
float Heat_Index = dht.computeHeatIndex(f, h);//Read Humidity 
Serial.print("Humidity: "); 
Serial.print(h); 
Serial.print(" %\t"); 
Serial.print("Temperature: ");// Read temperature as Celsius 
Serial.print(t); 
Serial.print(" *C "); 
Serial.print(f);//Read temperature as Fahrenheit 
Serial.print(" *F\t"); 
Serial.print("Heat index: "); 
Serial.print(Heat_Index); 
Serial.println(" *F"); 
} 
