#define LDR_PIN 34
#define RELAY_PIN 23

int threshold = 2000; // Adjust according to your LDR

void setup()
{
  Serial.begin(115200);

  pinMode(RELAY_PIN, OUTPUT);

  digitalWrite(RELAY_PIN, LOW);

  Serial.println("Automatic Street Light Started");
}

void loop()
{
  int ldrValue = analogRead(LDR_PIN);

  Serial.print("LDR Value: ");
  Serial.println(ldrValue);

  if(ldrValue < threshold)
  {
    digitalWrite(RELAY_PIN, HIGH);

    Serial.println("Dark -> Bulb ON");
  }
  else
  {
    digitalWrite(RELAY_PIN, LOW);

    Serial.println("Bright -> Bulb OFF");
  }

  delay(500);
}
