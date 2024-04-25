void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
  for(int i = 0 ; i < 2 ; i++){
    Serial.print("Hello World");
  }
  for(int i = 0 ; i <= 5 ; i++){
    for(int j = 0 ; j < i ; j++){
      Serial.print("*");
    }
    Serial.println();
  }
  delay(3000);
}
