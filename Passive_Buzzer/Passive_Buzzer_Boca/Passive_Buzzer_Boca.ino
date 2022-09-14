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
 //Melodía
 tone(pBuzzer, Mi, entero);
 delay(tercio*pausa);
  tone(pBuzzer, Mi, entero);
 delay(tercio*pausa);
  tone(pBuzzer, Mi, entero);
 delay(tercio*pausa);
  tone(pBuzzer, Do, medio);
 delay(medio*pausa);
  tone(pBuzzer, Re, medio);
 delay(medio*pausa);
  tone(pBuzzer, Do, entero);
 delay(tercio*pausa);
 
}
