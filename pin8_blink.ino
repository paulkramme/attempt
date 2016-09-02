// initialize digital pin 8 as an output.
//correct use of #define
#define PIN_WHEEE 8

  void setup() {
  pinMode(PIN_WHEEE, OUTPUT);
}

// the loop function runs over and over again forever
  void loop() {
  digitalWrite(PIN_WHEEE, HIGH);
  delay(1000);              
  digitalWrite(PIN_WHEEE, LOW);    
  delay(1000); 
 }

