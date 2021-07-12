
int val;
float cal;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(A0, INPUT);
pinMode(5, OUTPUT);
pinMode(9, OUTPUT);
/*
while (Serial.available()==0){}//wait for user input
int x = Serial.parseInt(); //for taking user input
analog_led_write_val = 51*(desired value)
range of the value is 0-255
*/
}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(A0);

if (val<970)
  cal = val/475;//1920
else if (val<980)
  cal = val/323;//646
else if (val<990)
  cal = val/245;//392
else if (val<1000)
  cal = val/218;
else
  cal = val/205;
Serial.println(cal);
analogWrite(5,cal);
analogWrite(9,cal);
//delay(100);

}
