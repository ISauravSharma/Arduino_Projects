//Using LED's binary counter from 0 to 15 is implemented.


int pin1=13;                                                //Left(1st) Led connected to terminal 13
int pin2=12;                                                //2nd Led connected to terminal 12
int pin3=11;                                                //3rd Led connected to terminal 11
int pin4=10;                                                //Right(4th)  Led connected to terminal 10
void setup() {
  // put your setup code here, to run once:
pinMode(pin1,OUTPUT);
pinMode(pin2,OUTPUT);
pinMode(pin3,OUTPUT);
pinMode(pin4,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
//FOR 0
digitalWrite(pin1,LOW);
digitalWrite(pin2,LOW);
digitalWrite(pin3,LOW);
digitalWrite(pin4,LOW);
delay(1000);                                                   //After 1 second the number changes to next
//FOR 1
digitalWrite(pin1,LOW);
digitalWrite(pin2,LOW);
digitalWrite(pin3,LOW);
digitalWrite(pin4,HIGH);
delay(1000);
//FOR 2
digitalWrite(pin1,LOW);
digitalWrite(pin2,LOW);
digitalWrite(pin3,HIGH);
digitalWrite(pin4,LOW);
delay(1000);
//FOR 3
digitalWrite(pin1,LOW);
digitalWrite(pin2,LOW);
digitalWrite(pin3,HIGH);
digitalWrite(pin4,HIGH);
delay(1000);
//FOR 4
digitalWrite(pin1,LOW);
digitalWrite(pin2,HIGH);
digitalWrite(pin3,LOW);
digitalWrite(pin4,LOW);
delay(1000);
//FOR 5
digitalWrite(pin1,LOW);
digitalWrite(pin2,HIGH);
digitalWrite(pin3,LOW);
digitalWrite(pin4,HIGH);
delay(1000);
//FOR 6
digitalWrite(pin1,LOW);
digitalWrite(pin2,HIGH);
digitalWrite(pin3,HIGH);
digitalWrite(pin4,LOW);
delay(1000);
//FOR 7
digitalWrite(pin1,LOW);
digitalWrite(pin2,HIGH);
digitalWrite(pin3,HIGH);
digitalWrite(pin4,HIGH);
delay(1000);
//FOR 8
digitalWrite(pin1,HIGH);
digitalWrite(pin2,LOW);
digitalWrite(pin3,LOW);
digitalWrite(pin4,LOW);
delay(1000);
//FOR 9
digitalWrite(pin1,HIGH);
digitalWrite(pin2,LOW);
digitalWrite(pin3,LOW);
digitalWrite(pin4,HIGH);
delay(1000);
//FOR 10
digitalWrite(pin1,HIGH);
digitalWrite(pin2,LOW);
digitalWrite(pin3,HIGH);
digitalWrite(pin4,LOW);
delay(1000);
//FOR 11
digitalWrite(pin1,HIGH);
digitalWrite(pin2,LOW);
digitalWrite(pin3,HIGH);
digitalWrite(pin4,HIGH);
delay(1000);
//FOR 12
digitalWrite(pin1,HIGH);
digitalWrite(pin2,HIGH);
digitalWrite(pin3,LOW);
digitalWrite(pin4,LOW);
delay(1000);
//FOR 13
digitalWrite(pin1,HIGH);
digitalWrite(pin2,HIGH);
digitalWrite(pin3,LOW);
digitalWrite(pin4,HIGH);
delay(1000);
//FOR 14
digitalWrite(pin1,HIGH);
digitalWrite(pin2,HIGH);
digitalWrite(pin3,HIGH);
digitalWrite(pin4,LOW);
delay(1000);
//FOR 15

digitalWrite(pin1,HIGH);
digitalWrite(pin2,HIGH);
digitalWrite(pin3,HIGH);
digitalWrite(pin4,HIGH);
delay(1000);
//SWITCH OFF
digitalWrite(pin1,LOW);
digitalWrite(pin2,LOW);
digitalWrite(pin3,LOW);
digitalWrite(pin4,LOW);
delay(5000);                                                       //5 seconds off then starts again
}
