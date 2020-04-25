//Pushbutton is used as Toggle Switch using this program and state of LED is displayed on LCD.


#include<LiquidCrystal.h>
LiquidCrystal LCD(8,9,10,11,12,13);           //LCD initialization
int readpin=6;                                //pin to read state from button
int BUTTONSTATENEW;
int BUTTONSTATEOLD=0;                         //initial button state
int LEDSTATE=0;                               //initial LED State
int ledpin=7;                                 //pin connected to led


void setup() {
  // put your setup code here, to run once:
LCD.begin(16,2);
LCD.setCursor(0,0);
Serial.begin(9600);
pinMode(ledpin,OUTPUT);
pinMode(readpin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
BUTTONSTATENEW=digitalRead(readpin);

if(BUTTONSTATEOLD==0 && BUTTONSTATENEW==1)                   //condition for toggling
  {
    if(LEDSTATE==0)
    {
      digitalWrite(ledpin,HIGH);
      LEDSTATE=1;
      LCD.setCursor(0,0);
      LCD.print("                ");
      LCD.setCursor(0,0);
      LCD.print("LED TURNED ON");
      LCD.setCursor(0,1);
      LCD.print("                ");
      LCD.setCursor(0,1);
      LCD.print("DAY TIME");
    }
    else
    {
      digitalWrite(ledpin,LOW);
      LEDSTATE=0;
       LCD.setCursor(0,0);
      LCD.print("                ");
      LCD.setCursor(0,0);
      LCD.print("LED TURNED OFF");
      LCD.setCursor(0,1);
      LCD.print("                ");
      LCD.setCursor(0,1);
      LCD.print("GOOD NIGHT");
      
      
    }
    
  }
  BUTTONSTATEOLD=BUTTONSTATENEW;
}
