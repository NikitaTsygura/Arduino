// LED and Button example
// Button on pin 2 (one side to pin 2, other side to GND)
// Using internal pull-up, button pressed = LOW
const int buttonPin = 2;
const int ledPin = LED_BUILTIN;

void setup() {
  pinMode(buttonPin, INPUT_PULLUP); // enable internal pull-up resistor
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int buttonState = digitalRead(buttonPin);
  if (buttonState == LOW) {
    digitalWrite(ledPin, HIGH); // turn LED on when button pressed
  } else {
    digitalWrite(ledPin, LOW);  // turn LED off when button not pressed
  }
}