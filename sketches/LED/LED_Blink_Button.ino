const int button = 8;
const int ledPinOne = 13;
const int ledPinButton = 12;

void setup() {
  pinMode(button, INPUT_PULLUP);
  pinMode(ledPinOne, OUTPUT);
  pinMode(ledPinButton, OUTPUT);
}

void loop() {
  int buttonState = digitalRead(button);
  if (buttonState == LOW) {
    digitalWrite(ledPinButton, HIGH);
  } else {
    digitalWrite(ledPinButton, LOW);
  }

  digitalWrite(ledPinOne, HIGH);
  delay(1000);
  digitalWrite(ledPinOne, LOW);
  delay(1000);
}
