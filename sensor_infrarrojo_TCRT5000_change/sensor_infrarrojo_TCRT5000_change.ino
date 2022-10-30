//Detecta hitos con 2 sensores y hace "algo"
int TCR1 = 11;
int TCR2 = 12;


//Variables sensores laterales
  int geo = 0;
  int lgeo = 0;
  int end_line = 0;

void setup() {
  Serial.begin(9600);
  pinMode(TCR1, INPUT);
  pinMode(TCR2,INPUT);
}

void loop() {
  Serial.print(end_line);
  hito();
}

//Hitos laterales
//geo = 0: sin hitos
// geo = 1: hito solo a la izquierda
// geo = 2: hito solo a la derecha
// geo = 3: hito a la izquierda y derecha
// Los sensores entregan LOW sobre negro y HIGH sobre blanco
int hito(){
  int HIZ = digitalRead(TCR1);
  int HDE = digitalRead(TCR2);
  //Serial.print(HIZ);
  if (HIZ == HIGH and HDE == HIGH){ //NO HAY HITOS
     geo = 0;
  }
  else if (HIZ == LOW and HDE == HIGH){ //HITO IZQUIERDO
    geo = 1;
  }
  else if (HIZ == HIGH and HDE == LOW){ //HITO DERECHO
    geo = 2;
  }
  else if (HIZ == LOW and HDE == LOW){ //HITO AMBOS LADOS
    geo = 3;
  }
  //Serial.print(geo);
  if (geo != lgeo){
    if (geo == 1 and lgeo == 0){ //HITO IZQUIERDO
      Lhito();
    }
    else if (geo == 2 and lgeo == 0){ //HITO DERECHO
      Rhito();
    }
    else if (geo == 3 and lgeo == 0){ //HITO AMBOS LADOS
      Cruce();
    }
  }
  lgeo = geo;
}

void Lhito(){
  Serial.print("L");
}

void Rhito(){
  Serial.print("R");
  end_line = end_line + 1;
}

void Cruce(){
  Serial.print("Both");
}
