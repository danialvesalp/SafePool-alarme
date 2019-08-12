int incomingByte = 0;   // for incoming serial data
int buzzer = 5;
void setup()
{
  Serial.begin(9600); // // opens serial port, sets data rate to 9600 bps
 
  pinMode(buzzer, OUTPUT);
}
 
void loop()
{ digitalWrite(buzzer, LOW);    // turn the LED off by making the voltage LOW
 
  if (Serial.available() > 0) {
    // read the incoming byte:
    incomingByte = Serial.read();//not using this
    
   if(incomingByte=='a'){
   digitalWrite(buzzer, HIGH);   // turn the LED on (HIGH is the voltage level)
   delay(1000);
   digitalWrite(buzzer, LOW);
   }
}
}
