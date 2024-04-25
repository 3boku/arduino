#define LED 15

int ch = 0;
int fre = 5000;
int led = 0;
int res = 8;

void setup() {
  // put your setup code here, to run once:
  ledcSetup(led, fre, res);
  ledcAttachPin(LED, led);
}

void loop() {
  // put your main code here, to run repeatedly:
  ledcWrite(led, 255);
  delay(1000);
  ledcWrite(led, 0);
  delay(1000);
}
