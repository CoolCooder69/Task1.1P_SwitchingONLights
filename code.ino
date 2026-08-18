const int pushButtonPin = 5; // Push Button Pin 
const int porchRedLED = 3; // Light 1 PIN
const int hallwayYellowLED = 7; // Light 2 Pin


void setup() {
  // Will Intialize the code on startup; 
  pinMode(pushButtonPin, INPUT_PULLUP); // Button pin set to input_pullup, 
  // this makes sure to reduce random noice if push button is not clicked.  
  pinMode(porchRedLED, OUTPUT); // Led pin set to output. 
  pinMode(hallwayYellowLED, OUTPUT); // Led pin set to output. 
  Serial.begin(9600); // Opening console at 9600. 
}


void loop() {
  int pushButtonState = digitalRead(pushButtonPin); // Listening status, 
  // if button is pressed or not. 
  
  if (pushButtonState == LOW){ // As we have set status to Input_Pullup by 
  // default it's value is low, so when button is pushed status is set to low. 
    digitalWrite(porchRedLED, HIGH);
    digitalWrite(hallwayYellowLED, HIGH); 
    delay(3000); 
    digitalWrite(porchRedLED, LOW); // stoping LED 1 after 3 sec. 
    delay(3000); 
    digitalWrite(hallwayYellowLED, LOW); // Stopping LED 2 after 6 sec. 
  }else {
    Serial.println("Project by Ravneet Singh. 2510994789"); 
    delay(100);
  }; 

}
