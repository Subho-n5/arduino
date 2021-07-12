
int val;
float cal;

void setup() 
{  
Serial.begin(9600);
pinMode(A0, INPUT);
pinMode(5, OUTPUT);//Here we will use analogue out from pins 3, 5, 6, 9, 10, 11
}

void loop() 
{
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
 //range of the value to be written is between 0-255
analogWrite(5,(cal*51));//analog_led_write_val = 51*(desired value)
}
