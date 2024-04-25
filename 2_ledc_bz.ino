#define bz_p 15

int fre = 5000;
int ch = 0;
int res = 8;
int bz = 0;


void setup() {
  
  ledcSetup(bz, fre, res);
  ledcAttachPin(bz_p, bz);
  
  for(int i=0 ; i<5 ; i++){
    ledcWriteTone(bz, 262);
    delay(1000);
    ledcWriteTone(bz, 0);
    delay(1000);
  }
}


void loop() {
  // put your main code here, to run repeatedly:
  
}
