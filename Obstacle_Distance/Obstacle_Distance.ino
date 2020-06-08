//Distance of an obstacle from ultrasonic sensor can be measured and displayed on LED.


#include<LiquidCrystal.h>
LiquidCrystal LCD(8,9,10,11,12,13);
int trigpin=7;                                  //pin connected to trigg
int echopin=6;                                  //pin connected to echo
float distance;                                 // variable to store distance of obstacle from sensor
float trigtime;                                 // variable to store time difference of transmission and reception
float speedofsound=346.0;

void setup() {
  // put your setup code here, to run once:
LCD.begin(16,2);
Serial.begin(9600);
pinMode(trigpin,OUTPUT);
pinMode(echopin,INPUT);
LCD.setCursor(0,0);
LCD.print("OBSTACLE AT : ");
}

void loop() {
  // put your main code here, to run repeatedly:
  LCD.setCursor(0,1);
LCD.print("               ");
LCD.setCursor(0,1);
digitalWrite(trigpin,LOW);
delay(1000);
digitalWrite(trigpin,HIGH);
delayMicroseconds(10);
digitalWrite(trigpin,LOW);
trigtime=pulseIn(echopin,HIGH);                     
trigtime=trigtime/1000000;                   //time for pulse to come back in seconds
distance= speedofsound*trigtime;
distance= distance/2.0;                      //because total distance travelled by wave is from 2*source to destination
distance=distance*100;                       //distance in cm

LCD.print(distance);
LCD.print(" cm");
delay(1000);
}
