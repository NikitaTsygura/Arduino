const int buttonLED = 8;
const int ledPinOne = 12;
const int ledPinTwo = 13;

void setup() {
  pinMode(buttonLED, INPUT_PULLUP);
  pinMode(ledPinOne, OUTPUT);
  pinMode(ledPinTwo, OUTPUT);
}

void loop() {
  int buttonState = digitalRead(buttonLED);
  if (buttonState == LOW) {
    digitalWrite(ledPinOne, HIGH);
  } else {
    digitalWrite(ledPinOne, LOW);
  }

  digitalWrite(ledPinTwo, HIGH);
  delay(1000);
  digitalWrite(ledPinTwo, LOW);
  delay(1000);
}
