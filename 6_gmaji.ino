#define sensor 15

void setup() {
  // put your setup code here, to run once:
  pinMode(sensor, INPUT);
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val = digitalRead(sensor);
  delay(1000);
  Serial.println(val);
  
  if (val > 0){
    Serial.println("detect!!");
  }
  else {
    Serial.println("not detect!!");
  }
}
