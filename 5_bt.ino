#define bt 26
#define led_p 15

int fre = 5000;
int ch = 0;
int res = 8;
int led = 0;

void setup() {
  // put your setup code here, to run once:
  ledcSetup(led, fre, res);
  ledcAttachPin(led_p, led);

  pinMode(bt, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val = digitalRead(bt);
  delay(100);
  if (val == 0){
    ledcWrite(led, 255);
  }
  else {
    ledcWrite(led, 0);
  }
}
