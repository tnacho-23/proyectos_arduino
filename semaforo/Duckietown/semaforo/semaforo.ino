//Declaración de pines
int greenA = 3;
int yellowA = 4;
int redA = 5;

int greenB = 6;
int yellowB = 7;
int redB = 8;

int greenC = 9;
int yellowC = 10;
int redC = 11;

void setup() {
  pinMode(greenA, OUTPUT);
  pinMode(yellowA, OUTPUT);
  pinMode(redA, OUTPUT);
  digitalWrite(greenA,LOW);
  digitalWrite(redA,LOW);
  digitalWrite(yellowA,LOW);

  pinMode(greenB, OUTPUT);
  pinMode(yellowB, OUTPUT);
  pinMode(redB, OUTPUT);
  digitalWrite(greenB,LOW);
  digitalWrite(redB,LOW);
  digitalWrite(yellowB,LOW);

  pinMode(greenC, OUTPUT);
  pinMode(yellowC, OUTPUT);
  pinMode(redC, OUTPUT);
  digitalWrite(greenC,LOW);
  digitalWrite(redC,LOW);
  digitalWrite(yellowC,LOW);
}

void loop() {
  //Primer estado
  digitalWrite(greenA, HIGH);
  digitalWrite(redB, HIGH);
  digitalWrite(redC, HIGH);
  delay(10000);


  digitalWrite(greenA, LOW);
  digitalWrite(yellowA, HIGH);
  delay(1000);
  digitalWrite(yellowA, LOW);
  digitalWrite(redA, HIGH);
  delay(100);

  //Segundo estado
  digitalWrite(greenB, HIGH);
  digitalWrite(redA, HIGH);
  digitalWrite(redC, HIGH);
  delay(10000);


  digitalWrite(greenB, LOW);
  digitalWrite(yellowB, HIGH);
  delay(1000);
  digitalWrite(yellowB, LOW);
  digitalWrite(redB, HIGH);
  delay(100);

  //Tercer estado
  digitalWrite(greenC, HIGH);
  digitalWrite(redA, HIGH);
  digitalWrite(redB, HIGH);
  delay(10000);


  digitalWrite(greenC, LOW);
  digitalWrite(yellowC, HIGH);
  delay(1000);
  digitalWrite(yellowC, LOW);
  digitalWrite(redB, HIGH);
  delay(100);
  


  

 

  

  
  
  
  

  
}
