#define BLYNK_TEMPLATE_ID "TMPL3LSlW0jkX"
#define BLYNK_TEMPLATE_NAME "LED blink "
#define BLYNK_AUTH_TOKEN "Your Auth Token"

#include <WiFi.h>
#include <BlynkSimpleEsp32.h>

char ssid[] = "Vivo t2x";
char pass[] = "11223344";

#define LED 2

BLYNK_WRITE(V0)
{
    int value = param.asInt();

    if (value == 1)
    {
        digitalWrite(LED, HIGH);
        Serial.println("LED ON");
    }
    else
    {
        digitalWrite(LED, LOW);
        Serial.println("LED OFF");
    }
}

void setup()
{
    Serial.begin(115200);

    pinMode(LED, OUTPUT);
    digitalWrite(LED, LOW);

    Serial.println();
    Serial.println("Starting ESP32...");
    Serial.println("Connecting to WiFi and Blynk...");

    Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);

    Serial.println("Connected to Blynk!");
}

void loop()
{
    Blynk.run();
}
