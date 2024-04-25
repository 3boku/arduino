#define bz 15

void setup() {
  // put your setup code here, to run once:
  pinMode(bz, OUTPUT);
  for(int i=0 ; i<5 ; i++){
    digitalWrite(bz, HIGH);
    delay(1000);
    digitalWrite(bz, LOW);
    delay(1000);
  }
}


void loop() {
  // put your main code here, to run repeatedly:
  
}
