// Declaración de variables
int pBuzzer = 2;
int entero = 1000/2;
int medio = 1000/4;
int tercio = 1000/6;
int cuarto = 1000/8;
int octavo = 1000/16;
double pausa = 1.30;

// Notas
int Do = 262;
int Re = 294;
int Mi = 330;
int Fa = 349;
int Sol = 392;
int La = 440;
int Si = 493;
int Do1 = 523;
int Re1 = 587;
int Mi1 = 659;
int Fa1 = 699;
int Sol1 = 784;
void setup() {
  pinMode(pBuzzer, OUTPUT);

}

void loop() {
  int Sa = random(50,2000);
  int Da = 1000/random(2,16);
  int Sb = random (50,2000);
  int Db = 1000/random(2,16);
  int Sc = random (50, 2000);
  int Dc = 1000/random(2,16);
  tone(pBuzzer, Sa,Da);
  delay(Da*pausa);
  tone(pBuzzer, Sb,Db);
  delay(Db*pausa);
  tone(pBuzzer, Sc,Dc);
  delay(Dc*pausa);
}
