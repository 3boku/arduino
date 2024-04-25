#define R 12
#define G 13
#define B 14

int freq = 5000;
int res = 8;
int ch = 0;

void setup() {
  // put your setup code here, to run once:
  ledcSetup(ch, freq, res);
  ledcSetup(ch+1, freq, res);
  ledcSetup(ch+2, freq, res);
  ledcAttachPin(R, ch);
  ledcAttachPin(G, ch+1);
  ledcAttachPin(B, ch+2);
}

void loop() {
  for(int j=0 ; j < 3 ; j ++){
    for(int i=0 ; i < 255; i++){
      ledcWrite(j, i);
      delay(10);
    }
  }  
}
