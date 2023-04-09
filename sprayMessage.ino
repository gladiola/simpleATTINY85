#include "DigiKeyboard.h"

void setup() {
  pinMode(0, OUTPUT);
	pinMode(1, OUTPUT);
  
  for (int i = 0; i < 2; i++){
    blinkLED();
  }
  for (int i = 0; i < 3; i++) {    
    sprayMessage();
    blinkLED();
  }
  for (int i=0; i < 2; i++){
    blinkLED();
  }
}


void loop() {

}

void blinkLED(){
  digitalWrite(0, LOW); 
  digitalWrite(1, LOW);
  DigiKeyboard.delay(1000);
  digitalWrite(0, HIGH); 
  digitalWrite(1, HIGH); 
  DigiKeyboard.delay(1000);
  digitalWrite(0, LOW); 
  digitalWrite(1, LOW); 

}
void sprayMessage(){
  
  //DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.println("sample message");
  DigiKeyboard.delay(5000);

}
