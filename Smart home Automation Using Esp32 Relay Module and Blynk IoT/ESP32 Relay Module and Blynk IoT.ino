#define BLYNK_TEMPLATE_ID "YOUR_TEMPLATE_ID"
#define BLYNK_TEMPLATE_NAME "Home Automation"
#define BLYNK_AUTH_TOKEN "YOUR_AUTH_TOKEN"

#include <WiFi.h>
#include <BlynkSimpleEsp32.h>

char ssid[] = "YOUR_WIFI_NAME";
char pass[] = "YOUR_WIFI_PASSWORD";

#define RELAY_PIN 23

BLYNK_WRITE(V0)
{
  int relayState = param.asInt();

  if(relayState == 1)
  {
    digitalWrite(RELAY_PIN, HIGH);
    Serial.println("Relay ON");
  }
  else
  {
    digitalWrite(RELAY_PIN, LOW);
    Serial.println("Relay OFF");
  }
}

void setup()
{
  Serial.begin(115200);

  pinMode(RELAY_PIN, OUTPUT);

  digitalWrite(RELAY_PIN, LOW);

  Blynk.begin(
    BLYNK_AUTH_TOKEN,
    ssid,
    pass
  );

  Serial.println("Connected to Blynk");
}

void loop()
{
  Blynk.run();
}
