#define sensor 39
#define led 15

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(sensor, INPUT);
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  int CDS = analogRead(sensor);
  Serial.print("밝기 값: ");
  Serial.println(CDS);

  if (CDS < 700){
    digitalWrite(led, HIGH);
    Serial.println("LED ON");
  }
  else {
    digitalWrite(led, LOW);
    Serial.println("LED OFF");
  }
  delay(1000);
}
