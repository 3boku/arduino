#define R 12
#define G 13
#define B 14
#define button 26

int count = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(button, INPUT);
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val = digitalRead(button);
  delay(100);
  if (val == 0){
    count++;
    if (count==4){
      count =0;
    }
  }

  digitalWrite(R, LOW);
  digitalWrite(G, LOW);
  digitalWrite(B, LOW);

  if(count == 1){
    digitalWrite(R, HIGH);
    digitalWrite(G, LOW);
    digitalWrite(B, LOW);
  }
  else if(count == 2) {
    digitalWrite(R, LOW);
    digitalWrite(G, HIGH);
    digitalWrite(B, LOW);
  }
  else if(count == 3) {
    digitalWrite(R, LOW);
    digitalWrite(G, LOW);
    digitalWrite(B, HIGH);
  }
  else  {
    digitalWrite(R, LOW);
    digitalWrite(G, LOW);
    digitalWrite(B, LOW);
  }
}
