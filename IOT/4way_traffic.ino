const int northGreen = 2;
const int northYellow = 3; 
const int northRed = 4;
const int southGreen = 5;
const int southYellow = 6;
const int southRed = 7;
const int eastGreen = 8;
const int eastYellow = 9;
const int eastRed = 10;
const int westGreen = 11;
const int westYellow = 12;
const int westRed = 13; 
const unsigned long greenTime = 5000; const 
unsigned long yellowTime = 2000; const 
unsigned long redTime = 5000; 
void setup() { 
pinMode(northGreen, OUTPUT); 
pinMode(northYellow, OUTPUT); 
pinMode(northRed, OUTPUT); 
pinMode(southGreen, OUTPUT); 
pinMode(southYellow, OUTPUT); 
pinMode(southRed, OUTPUT); 
pinMode(eastGreen, OUTPUT); 
pinMode(eastYellow, OUTPUT); 
pinMode(eastRed, OUTPUT);
pinMode(westGreen, OUTPUT); 
pinMode(westYellow, OUTPUT); 
pinMode(westRed, OUTPUT); 
turnOffAllLights(); 
} 
void loop() { 
digitalWrite(northGreen,HIGH); 
digitalWrite(southGreen,HIGH); 
digitalWrite(eastRed,HIGH); 
digitalWrite(westRed,HIGH); 
delay(5000); 
digitalWrite(northYellow,HIGH); 
digitalWrite(southYellow,HIGH); 
digitalWrite(northRed,HIGH); 
digitalWrite(southRed,HIGH); 
turnOffAllLights(); 
delay(5000); 
digitalWrite(eastGreen,HIGH); 
digitalWrite(westGreen,HIGH); 
digitalWrite(northRed,HIGH); 
digitalWrite(southRed,HIGH); 
delay(5000); 
digitalWrite(eastYellow,HIGH); 
digitalWrite(westYellow,HIGH); 
delay(2000); 
digitalWrite(eastYellow,HIGH); 
digitalWrite(westYellow,HIGH); 
turnOffAllLights(); 
delay(5000); 
} 
void turnOffAllLights() { 
digitalWrite(northGreen, LOW); 
digitalWrite(northYellow, LOW); 
digitalWrite(northRed, LOW); 
digitalWrite(southGreen, LOW); 
digitalWrite(southYellow, LOW); 
digitalWrite(southRed, LOW); 
digitalWrite(eastGreen, LOW); 
digitalWrite(eastYellow, LOW); 
digitalWrite(eastRed, LOW); 
digitalWrite(westGreen, LOW); 
digitalWrite(westYellow, LOW); 
digitalWrite(westRed, LOW); 
delay(2000); 
} 
