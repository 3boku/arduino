#define bz 15

int ch = 0;
int freq_tone[]={330, 294, 261, 294, 330, 330, 330, 294, 294, 294, 330, 392, 392, 330, 294, 261, 294, 330, 330, 330, 294, 294, 330, 294, 261};
int freq = 5000;
int res = 8;

void setup() {
  ledcSetup(ch, freq, res);
  ledcAttachPin(bz, ch);

  for(int i = 0 ; i < 25 ; i++){
    ledcWriteTone(ch, freq_tone[i]);
    delay(500);
  }
  ledcWriteTone(ch, 0);
}


void loop() {
  // put your main code here, to run repeatedly:

}
