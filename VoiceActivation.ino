/** 
This code is written in Arduino programming language and is intended for an Arduino microcontroller.
*/

// Declare light variables and voice
String voice;
const int BLUE = 12;
const int RED = 11;
const int YELLOW = 10;
const int GREEN = 9;
const int RED0 = 8;
const int GREEN0 = 7;
const int YELLOW0= 6;
const int BLUE0 = 5;

// Create a function to turn on the lights
void RedOn(){
  digitalWrite(RED, HIGH);
  digitalWrite(RED0, HIGH);
}

void GreenOn(){
  digitalWrite(GREEN, HIGH);
  digitalWrite(GREEN0, HIGH);
}

void BlueOn(){
  digitalWrite(BLUE, HIGH);
  digitalWrite(BLUE0, HIGH);
}

void YellowOn(){
  digitalWrite(YELLOW, HIGH);
  digitalWrite(YELLOW0, HIGH);
}
void AllOn() {
  digitalWrite(RED, HIGH);
  digitalWrite(GREEN, HIGH);
  digitalWrite(BLUE, HIGH);
  digitalWrite(YELLOW, HIGH);
  digitalWrite(RED0, HIGH);
  digitalWrite(GREEN0, HIGH);
  digitalWrite(BLUE0, HIGH);
  digitalWrite(YELLOW0, HIGH);
}


