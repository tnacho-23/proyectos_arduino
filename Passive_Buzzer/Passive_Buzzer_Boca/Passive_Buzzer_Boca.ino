// Declaración de variables
int pBuzzer = 2;
int entero = 1000/2;
int medio = 1000/4;
int tercio = 1000/6;
int cuarto = 1000/8;
int quinto = 1000/10;
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
int sostenido =  1.05946309435929;
void setup() {
  pinMode(pBuzzer, OUTPUT);

}

void loop() {
 //Melodía
 tone(pBuzzer, Mi*sostenido, 0.5*entero);
 delay(0.5*entero*pausa);
 tone(pBuzzer, Mi*sostenido, 0.5*entero);
 delay(0.5*entero*pausa);
 tone(pBuzzer, Mi*sostenido, 0.5*entero);
 delay(0.5*entero*pausa);
 tone(pBuzzer, Do*sostenido, 0.5*medio);
 delay(0.5*medio*pausa);
 tone(pBuzzer, Re*sostenido, 0.5*medio);
 delay(0.5*medio*pausa);
 tone(pBuzzer, Do*sostenido, 0.5*entero);
 delay(0.5*entero*pausa);
 delay(0.5*entero);
 delay(0.5*entero*pausa);
 tone(pBuzzer, Do*sostenido, 0.5*entero);
 delay(0.5*entero*pausa);
 tone(pBuzzer, Mi*sostenido, 0.5*medio);
 delay(0.5*medio*pausa);
 tone(pBuzzer, Mi*sostenido, 0.5*medio);
 delay(0.5*medio*pausa);
 tone(pBuzzer, Mi*sostenido, 0.5*medio);
 delay(0.5*medio*pausa);
 tone(pBuzzer, Mi*sostenido, 0.5*medio);
 delay(0.5*medio*pausa);
 tone(pBuzzer, Mi*sostenido, 0.5*medio);
 delay(0.5*medio*pausa);
 tone(pBuzzer, Fa*sostenido, 0.5*medio);
 delay(0.5*medio*pausa);
 tone(pBuzzer, Mi*sostenido, 0.5*medio);
 delay(0.5*medio*pausa);
 tone(pBuzzer, Re*sostenido, 0.5*entero);
 delay(0.5*entero*pausa);
 delay(medio);
  tone(pBuzzer, Re*sostenido, 0.5*entero);
 delay(0.5*entero*pausa);
  tone(pBuzzer, Do*sostenido, 0.5*medio);
 delay(0.5*medio*pausa);
  tone(pBuzzer, Re*sostenido, 0.5*medio);
 delay(0.5*medio*pausa);
  tone(pBuzzer, Mi*sostenido, 0.5*entero);
 delay(0.5*entero*pausa);
 tone(pBuzzer, Mi*sostenido, 0.5*medio);
 delay(0.5*medio*pausa);
 tone(pBuzzer, Mi*sostenido, 0.5*medio);
 delay(0.5*medio*pausa);
  tone(pBuzzer, Do*sostenido, 0.5*medio);
 delay(0.5*medio*pausa);
 tone(pBuzzer, Re*sostenido, 0.5*medio);
 delay(0.5*medio*pausa);
 tone(pBuzzer, Do*sostenido, 0.5*entero);
 delay(0.5*entero*pausa);
 tone(pBuzzer, Do*sostenido, 0.5*entero);
 delay(0.5*entero*pausa);
 tone(pBuzzer, Sol*sostenido, 0.5*medio);
 delay(0.5*medio*pausa);
 tone(pBuzzer, Sol*sostenido, 0.5*medio);
 delay(0.5*medio*pausa);
 tone(pBuzzer, Mi*sostenido, 0.5*entero);
 delay(0.5*entero*pausa);
 delay(cuarto);
 tone(pBuzzer, Fa*sostenido, 0.5*entero);
 delay(0.5*entero*pausa);
 tone(pBuzzer, Mi*sostenido, 0.5*entero);
 delay(0.5*entero*pausa);
 tone(pBuzzer, Re*sostenido, 0.5*medio);
 delay(0.5*medio*pausa);
 tone(pBuzzer, Do*sostenido, 0.5*medio);
 delay(0.5*medio*pausa);
 


 delay(3*entero);
}
