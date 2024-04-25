#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire,-1);

void setup() {
  Serial.begin(115200);
  if(!display.begin(SSD1306_SWITCHCAPVCC,0x3D)) {
    Serial.println(F("SSD1306 allocation failed"));
    for(;;);
  }
}

void loop() {
  display.clearDisplay(); // 화면을 지웁니다.
  display.setTextSize(1); // 텍스트 크기를 1로 설정합니다.
  display.setTextColor(SSD1306_WHITE); // 흰색으로 텍스트 색상을 설정합니다.
  display.setCursor(0, 10); // 텍스트를 표시할 위치를 설정합니다. (x, y)
  display.println("Hello, world!"); // 텍스트를 표시합니다.
  display.display(); // 화면에 표시합니다.
  delay(1000); // 1초 동안 기다립니다.
}
