int um = 2;
int dois = 9;
int tres = 4;
int quatro = 5;
int cinco = 6;
int seis = 7;
int sete = 8;
int botao = 3;

void teste() {
  int x = random(1,7);

    digitalWrite(um, LOW);
    digitalWrite(dois, LOW);
    digitalWrite(tres, LOW);
    digitalWrite(quatro, HIGH);
    digitalWrite(cinco, LOW);
    digitalWrite(seis, LOW);
    digitalWrite(sete, LOW);

delay(10000);
     digitalWrite(um, HIGH);
     digitalWrite(dois, HIGH);
     digitalWrite(tres, LOW);
     digitalWrite(quatro, HIGH);
     digitalWrite(cinco, LOW);
     digitalWrite(seis, HIGH);
     digitalWrite(sete, HIGH);
delay(10000);
        digitalWrite(um, LOW);
    digitalWrite(dois, LOW);
    digitalWrite(tres, LOW);
    digitalWrite(quatro, HIGH);
    digitalWrite(cinco, LOW);
    digitalWrite(seis, LOW);
    digitalWrite(sete, LOW);
delay(10000);
     digitalWrite(um, HIGH);
     digitalWrite(dois, HIGH);
     digitalWrite(tres, LOW);
     digitalWrite(quatro, HIGH);
     digitalWrite(cinco, LOW);
     digitalWrite(seis, HIGH);
     digitalWrite(sete, HIGH);
  delay(10000);
  if (x == 1) {
    digitalWrite(um, LOW);
    digitalWrite(dois, LOW);
    digitalWrite(tres, LOW);
    digitalWrite(quatro, HIGH);
    digitalWrite(cinco, LOW);
    digitalWrite(seis, LOW);
    digitalWrite(sete, LOW);
  }
  if (x == 2) {
    digitalWrite(um, HIGH);
   digitalWrite(dois, HIGH);
   digitalWrite(tres, LOW);
   digitalWrite(quatro, LOW);
   digitalWrite(cinco, LOW);
   digitalWrite(seis, LOW);
   digitalWrite(sete, LOW);
  }
  if (x == 3) {
     digitalWrite(um, HIGH);
     digitalWrite(dois, HIGH);
     digitalWrite(tres, LOW);
     digitalWrite(quatro, HIGH);
     digitalWrite(cinco, LOW);
     digitalWrite(seis, LOW);
     digitalWrite(sete, LOW);
  }
  if (x == 4) {
     digitalWrite(um, HIGH);
     digitalWrite(dois, HIGH);
     digitalWrite(tres, LOW);
     digitalWrite(quatro, LOW);
     digitalWrite(cinco, LOW);
     digitalWrite(seis, HIGH);
     digitalWrite(sete, HIGH);
  }
  if (x == 5) {
     digitalWrite(um, HIGH);
     digitalWrite(dois, HIGH);
     digitalWrite(tres, LOW);
     digitalWrite(quatro, HIGH);
     digitalWrite(cinco, LOW);
     digitalWrite(seis, HIGH);
     digitalWrite(sete, HIGH);
  }
  if (x == 6) {
     digitalWrite(um, HIGH);
     digitalWrite(dois, HIGH);
     digitalWrite(tres, HIGH);
     digitalWrite(quatro, LOW);
     digitalWrite(cinco, HIGH);
     digitalWrite(seis, HIGH);
     digitalWrite(sete, HIGH);
  }
}

void setup() {
  pinMode(um, OUTPUT);
  pinMode(dois, OUTPUT);
  pinMode(tres, OUTPUT);
  pinMode(quatro, OUTPUT);
  pinMode(cinco, OUTPUT);
  pinMode(seis, OUTPUT);
  pinMode(sete, OUTPUT);

  attachInterrupt(digitalPinToInterrupt(botao), teste, RISING);

 digitalWrite(um, LOW);
 digitalWrite(dois, LOW);
 digitalWrite(tres, LOW);
 digitalWrite(quatro, LOW);
 digitalWrite(cinco, LOW);
 digitalWrite(seis, LOW);
 digitalWrite(sete, LOW);
  
}
     

void loop() {
  
}
