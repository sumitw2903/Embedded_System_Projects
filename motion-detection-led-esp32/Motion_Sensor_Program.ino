#define PIR_PIN 4
#define LED_PIN 18

void setup()
{
  Serial.begin(115200);

  pinMode(PIR_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);

  digitalWrite(LED_PIN, LOW);

  Serial.println("Smart Room Light Started");
}

void loop()
{
  int motion = digitalRead(PIR_PIN);

  if (motion == HIGH)
  {
    digitalWrite(LED_PIN, HIGH);

    Serial.println("Motion Detected - Light ON");
  }
  else
  {
    digitalWrite(LED_PIN, LOW);

    Serial.println("No Motion - Light OFF");
  }

  delay(100);
}
