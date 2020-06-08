//Depending upon different voltage range different LED's glow.
//Practical similar uses are various meters which uses LED signaling for different analog or digital data

int input=A0;                                                    //Input terminal from sensor or potentiometer
int redled=13;                                                   // red led for high voltage(>4V)
int yellowled=12;                                                // yellow led for medium voltage
int greenled=11;                                                 //green led for low voltage
int readval;                                                     //analog input value from sensor or potentiometer
float V;                                                         //V is for voltage value
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(input,INPUT);
pinMode(redled,OUTPUT);
pinMode(yellowled,OUTPUT);
pinMode(greenled,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
readval=analogRead(input);
V=readval*(5.0/1023.0);                                        // for conversion
Serial.println(V);
if(V<=3.0)                                                     //green led glows if voltage is less than 3v
{ 
  digitalWrite(greenled,HIGH);
  digitalWrite(redled,LOW);
  digitalWrite(yellowled,LOW);
}
if(V>3.0 && V<=4.0)                                            //yellow led glows if voltage is between 3 and 4 V
{
  digitalWrite(yellowled,HIGH);
  digitalWrite(redled,LOW);
  digitalWrite(greenled,LOW); 
}
if(V>4.0)                                                     //red led glows if voltage is higher than 4v
{
  digitalWrite(redled,HIGH);
  digitalWrite(yellowled,LOW);
  digitalWrite(greenled,LOW);
}
}
