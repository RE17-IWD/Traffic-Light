// Traffic Light - Basic Arduino Sketch

int redPin   = 13;
int yellowPin = 12;
int greenPin  = 11;

void setup() {
  pinMode(redPin,    OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin,  OUTPUT);
}

void loop() {
  // RED — stop
  digitalWrite(redPin, HIGH);
  delay(3000);             // 3 seconds
  digitalWrite(redPin, LOW);

  // GREEN — go
  digitalWrite(greenPin, HIGH);
  delay(3000);
  digitalWrite(greenPin, LOW);

  // YELLOW — caution
  digitalWrite(yellowPin, HIGH);
  delay(1000);             // 1 second
  digitalWrite(yellowPin, LOW);
}