void setup() {
  Serial.begin(9600); // See "Enhancements" above to learn when to change this.
}

void loop() {
  //if (Serial.available())
  {
    // read the input on analog pin 0:
    float pulse = analogRead(A0)/10;
    float lati = 12.840630225979618;
    float longi = 80.1533371208863;
    
 
    Serial.print(pulse);
    Serial.print(',');
    Serial.print(lati);
    Serial.print(',');
    Serial.println(longi);
    delay(3000);
  }
}
