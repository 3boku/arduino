#define R 12
#define B 14
#define TL 27
#define TR 4

void setup() {
  // put your setup code here, to run once:
  pinMode(R, OUTPUT);
  pinMode(B, OUTPUT);
  pinMode(TL, INPUT);
  pinMode(TR, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int r = digitalRead(TR);
  int l = digitalRead(TL);

  if (l==1){
    digitalWrite(R, HIGH);
    digitalWrite(B, LOW);
  }
  else if(r == 1){
    digitalWrite(R, LOW);
    digitalWrite(B, HIGH);
  }
  else if(l==1 && r == 1){
    digitalWrite(R, HIGH);
    digitalWrite(B, HIGH);
  }
  else {
    digitalWrite(R, LOW);
    digitalWrite(B, LOW);
  }
}
