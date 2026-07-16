int pot = A0;
int in1 = 2;
int in2 = 3;
int in3 = 4;
int in4 = 5;

int en1 = 6;
int en2 = 9;

//Função para frente
void frente_fun(int velocidade){
  
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  analogWrite(en1, velocidade);

  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(en2, velocidade);

}

//Função para ré
void re_fun(int velocidade){

  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  analogWrite(en1, velocidade);

  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  analogWrite(en2, velocidade);

}

//Função de parada 
void parada_fun(){

  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  analogWrite(en1, 0);

  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  analogWrite(en2, 0);

}

void setup() {
  Serial.begin(9600);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(en1, OUTPUT);
  pinMode(en2, OUTPUT);

}

void loop() {

  int valor_pot = analogRead(pot);

  if (valor_pot > 520){
    int vel = map(valor_pot, 520, 1023, 0, 255);
    frente_fun(vel);
  }

  else if (valor_pot < 500){
    int vel = map(valor_pot, 500, 0, 0, 255);
    re_fun(vel);

  }
  else {
    parada_fun();

  }

}
