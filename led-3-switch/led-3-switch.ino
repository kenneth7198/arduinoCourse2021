int ledPinRed = 6;
int ledPinGreen = 5;
int ledPinYellow = 4;
int inputButton = 11;
void setup()
{
  pinMode(ledPinRed, OUTPUT);
  pinMode(ledPinGreen, OUTPUT);
  pinMode(ledPinYellow, OUTPUT);
  pinMode(inputButton, INPUT);
}

void loop()
{
  int val = digitalRead(inputButton);
  if(val == true){
    digitalWrite(ledPinRed, HIGH);
    digitalWrite(ledPinGreen, HIGH);
    digitalWrite(ledPinYellow, HIGH);
  } else {  
    digitalWrite(ledPinRed, LOW);
    digitalWrite(ledPinGreen, LOW);
    digitalWrite(ledPinYellow, LOW);
  }
  delay(100);

}
