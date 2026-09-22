#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64

Adafruit_SSD1306 display(
  SCREEN_WIDTH,
  SCREEN_HEIGHT,
  &Wire,
  -1
);

// HC-SR04 Pins
#define TRIG_PIN 5
#define ECHO_PIN 18

long duration;
float distance;

void setup()
{
  Serial.begin(115200);

  Wire.begin(21,22);

  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);

  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C))
  {
    Serial.println("OLED Failed");
    while(1);
  }

  display.clearDisplay();

  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(10,20);
  display.println("Distance Meter");
  display.display();

  delay(2000);
}

void loop()
{
  // Send Ultrasonic Pulse
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);

  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);

  digitalWrite(TRIG_PIN, LOW);

  // Read Echo Time
  duration = pulseIn(ECHO_PIN, HIGH);

  // Calculate Distance
  distance = duration * 0.034 / 2;

  // Serial Monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // OLED Display
  display.clearDisplay();

  display.setTextSize(1);
  display.setCursor(0,0);
  display.println("Ultrasonic Meter");

  display.setTextSize(2);
  display.setCursor(10,25);
  display.print(distance,1);
  display.print(" cm");

  display.display();

  delay(500);
}