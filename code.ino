const int pushButtonPin = 5; 
const int porchRedLED = 3; 
const int hallwayYellowLED = 7; 


void setup() {
  pinMode(pushButtonPin, INPUT_PULLUP); 
  pinMode(porchRedLED, OUTPUT); 
  pinMode(hallwayYellowLED, OUTPUT); 
  pinMode(i, OUTPUT); 
  Serial.begin(9600); 
}


void loop() {
  int pushButtonState = digitalRead(pushButtonPin); 
  
  if (pushButtonState == LOW){
    digitalWrite(porchRedLED, HIGH);
    digitalWrite(hallwayYellowLED, HIGH); 
    delay(3000);
    digitalWrite(porchRedLED, LOW);
    delay(3000); 
    digitalWrite(hallwayYellowLED, LOW);
  }else {
    Serial.println("Project by Ravneet Singh. 2510994789"); 
    delay(100);
  }; 

}
