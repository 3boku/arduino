#define R 12
#define G 13
#define B 14

#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void setup() {
  Serial.begin(115200);
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);
  
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3D)) {
    Serial.println(F("SSD1306 allocation failed"));
    for (;;);
  }
}

void loop() {
  // Red LED ON
  digitalWrite(R, HIGH);
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 10);
  display.println("RED LED ON");
  display.display();
  delay(1000);

  // Red LED OFF
  digitalWrite(R, LOW);
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 10);
  display.println("RED LED OFF");
  display.display();
  delay(1000);

  // Green LED ON
  digitalWrite(G, HIGH);
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 10);
  display.println("GREEN LED ON");
  display.display();
  delay(1000);

  // Green LED OFF
  digitalWrite(G, LOW);
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 10);
  display.println("GREEN LED OFF");
  display.display();
  delay(1000);

  // Blue LED ON
  digitalWrite(B, HIGH);
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 10);
  display.println("BLUE LED ON");
  display.display();
  delay(1000);

  // Blue LED OFF
  digitalWrite(B, LOW);
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 10);
  display.println("BLUE LED OFF");
  display.display();
  delay(1000);
}
