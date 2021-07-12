 /*
This is code to control 4 to 16 channel 5V Relay module using Arduino
 
 */

int ch = 4;// number of relays you got
int relay[]={4,6,8,10}; // Arduino pin numbers. the same number of relay should be defined here as input pins

int i=0;
// delay time
int del = 1500;
int wait = 2000;


void setup() {
    Serial.begin(9600);// prepare Serial monitor
    // set  pins as output
 for(i=0; i < ch; i++)
 {    
    pinMode(relay[i], OUTPUT);// sent i(th) pin as output
   digitalWrite(relay[i], HIGH); // Turn the relay OFF  
 }
               
    
}

void loop() {



  //==================FIRST FORM===================
    
      for(int j=0;j< 2;j++){
        Serial.print(j);
        Serial.println(" First Form");
 for(int i=0; i < ch; i++)
 {
      Serial.print("Relay "); Serial.print(i+1);Serial.println(" ON");
      digitalWrite(relay[i], LOW); // Turn the relay ON    
        
 }
 delay(wait);

 for(int i=0; i < ch; i++)
 {
      Serial.print("Relay "); Serial.print(i+1);Serial.println(" OFF");
      digitalWrite(relay[i], HIGH); // Turn the relay OFF    
        
 }

delay(wait);
      }

delay(del);


//==================SECOND FORM===================
wait = 1500;
     for(int j=0;j< 4;j++){
        Serial.print(j);
        Serial.println(" SECOND Form");
 for(int i=0; i < ch; i++)
 {
      Serial.print("Relay "); Serial.print(i+1);Serial.println(" ON");
      digitalWrite(relay[i], LOW); // Turn the relay ON    
        
 }
 delay(wait);

 for(int i=0; i < ch; i++)
 {
      Serial.print("Relay "); Serial.print(i+1);Serial.println(" OFF");
      digitalWrite(relay[i], HIGH); // Turn the relay OFF    
        
 }

delay(wait);

     }

delay(del);

      
//==================THIRD FORM===================
wait = 1000;
     for(int j=0;j< 4;j++){
        Serial.print(j);
        Serial.println(" THIRD Form");
 for(int i=0; i < ch; i++)
 {
      Serial.print("Relay "); Serial.print(i+1);Serial.println(" ON");
      digitalWrite(relay[i], LOW); // Turn the relay ON    
        
 }
 delay(wait);

 for(int i=0; i < ch; i++)
 {
      Serial.print("Relay "); Serial.print(i+1);Serial.println(" OFF");
      digitalWrite(relay[i], HIGH); // Turn the relay OFF    
        
 }

delay(wait);

     }

delay(del);
    
//==================FOURTH FORM===================
wait = 500;

     for(int j=0;j< 8;j++){
        Serial.print(j);
        Serial.println(" FOURTH Form");
 for(int i=0; i < ch; i++)
 {
      Serial.print("Relay "); Serial.print(i+1);Serial.println(" ON");
      digitalWrite(relay[i], LOW); // Turn the relay ON    
        
 }
 delay(wait);

 for(int i=0; i < ch; i++)
 {
      Serial.print("Relay "); Serial.print(i+1);Serial.println(" OFF");
      digitalWrite(relay[i], HIGH); // Turn the relay OFF    
        
 }

delay(wait);

     }

delay(del);
  
}// loop
