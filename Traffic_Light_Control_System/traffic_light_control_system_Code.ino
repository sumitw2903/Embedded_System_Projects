// Traffic Light Control System using ESP32

const int redLED = 2;
const int yellowLED = 4;
const int greenLED = 22;

void setup()
{
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
}

void loop()
{
  // GREEN LIGHT
  digitalWrite(greenLED, HIGH);
  digitalWrite(yellowLED, LOW);
  digitalWrite(redLED, LOW);

  delay(5000);

  // YELLOW LIGHT
  digitalWrite(greenLED, LOW);
  digitalWrite(yellowLED, HIGH);
  digitalWrite(redLED, LOW);

  delay(2000);

  // RED LIGHT
  digitalWrite(greenLED, LOW);
  digitalWrite(yellowLED, LOW);
  digitalWrite(redLED, HIGH);

  delay(5000);
}

