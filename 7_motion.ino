#define sensor 15
#define led_p 26

int fre = 8000;
int ch = 0;
int led = 0;
int res = 8;

void setup() {
  // put your setup code here, to run once:
  ledcSetup(led, fre, res);
  ledcAttachPin(led_p, led);
  pinMode(sensor, INPUT);
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val = digitalRead(sensor);
  delay(1000);
  Serial.println(val);
  
  if (val > 0){
    ledcWrite(led, 255);
  }
  else {
    ledcWrite(led, 0);
  }
}
