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

// Define functions to turn off the LEDs
void RedOff() {
    digitalWrite(RED, LOW);
    digitalWrite(RED0, LOW);
}

void GreenOff() {
    digitalWrite(GREEN, LOW);
    digitalWrite(GREEN0, LOW);
}

void BlueOff() {
    digitalWrite(BLUE, LOW);
    digitalWrite(BLUE0, LOW);
}

void YellowOff() {
    digitalWrite(YELLOW, LOW);
    digitalWrite(YELLOW0, LOW);
}

void AllOff() {
    digitalWrite(RED, LOW);
    digitalWrite(GREEN, LOW);
    digitalWrite(BLUE, LOW);
    digitalWrite(YELLOW, LOW);
    digitalWrite(RED0, LOW);
    digitalWrite(GREEN0, LOW);
    digitalWrite(BLUE0, LOW);
    digitalWrite(YELLOW0, LOW);
}

void setup() {
    // Initialize serial communication
    Serial.begin(9600);
    
    // Set pin modes for LEDs
    pinMode(RED, OUTPUT);
    pinMode(GREEN, OUTPUT);
    pinMode(BLUE, OUTPUT);
    pinMode(YELLOW, OUTPUT);
    pinMode(RED0, OUTPUT);
    pinMode(GREEN0, OUTPUT);
    pinMode(BLUE0, OUTPUT);
    pinMode(YELLOW0, OUTPUT);
}

void loop() {
    // Check if there is data available on the serial port
    while (Serial.available()) {
        // Read a character from the serial port
        char c = Serial.read();
        
        // Break the loop if the newline character is encountered
        if (c == '\n')
            break;
        
        // Concatenate the received character to the 'voice' variable
        voice += c;
    }

    // Process voice commands to control LEDs
    if (voice.length() > 0) {
        if (voice == "on" || voice == "all")
            AllOn();
        else if (voice == "off" || voice == "all off")
            AllOff();
        else if (voice == "red" || voice == "Red on")
            RedOn();
        else if (voice == "red off")
            RedOff();
        else if (voice == "green" || voice == "green on")
            GreenOn();
        else if (voice == "green off")
            GreenOff();
        else if (voice == "blue" || voice == "blue on")
            BlueOn();
        else if (voice == "blue off")
            BlueOff();
        else if (voice == "yellow" || voice == "yellow on")
            YellowOn();
        else if (voice == "yellow off")
            YellowOff();
        
        // Reset the 'voice' variable
        voice = "";
    }
}


