#define SOUND_PIN 4
#define RELAY_PIN 23

bool relayState = false;
bool lastSoundState = HIGH;

void setup()
{
  Serial.begin(115200);

  pinMode(SOUND_PIN, INPUT);
  pinMode(RELAY_PIN, OUTPUT);

  digitalWrite(RELAY_PIN, LOW);

  Serial.println("Clap Switch System Started");
}

void loop()
{
  bool currentSoundState = digitalRead(SOUND_PIN);

  // Detect sound pulse
  if(currentSoundState == LOW && lastSoundState == HIGH)
  {
    relayState = !relayState;

    digitalWrite(RELAY_PIN, relayState);

    if(relayState)
    {
      Serial.println("Bulb ON");
    }
    else
    {
      Serial.println("Bulb OFF");
    }

    delay(300); // debounce
  }

  lastSoundState = currentSoundState;
}
