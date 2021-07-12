int i = 1;
void setup() {
  Serial.begin(9600);
  pinMode(13,OUTPUT);
  
}

void loop() {
  
  digitalWrite(13,HIGH);
  Serial.print("LED On! \t");
  Serial.println(i);
  delay(1000);
  digitalWrite(13,LOW);
  Serial.print("LED Off! \t");
  Serial.println(i);
  
  delay(2000);
  
  
  i++;

}
