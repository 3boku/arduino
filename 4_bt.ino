#define bt 26

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(bt, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val = digitalRead(bt);

  Serial.println(val);
  delay(500);
}
