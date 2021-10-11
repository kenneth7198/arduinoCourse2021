int ledPin = 13;
int inputButton = 11;
void setup() {
  pinMode(ledPin, OUTPUT);  
  pinMode(inputButton, INPUT);
}

void loop() {
  int val = digitalRead(inputButton);
  if(val == true){
    digitalWrite(ledPin, HIGH);
  } else {  
    digitalWrite(ledPin, LOW);
  }
  delay(100);
}
