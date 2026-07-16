// C++ code
//

int led1 = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;
int led5 = 6;
int led6 = 7;
int led7 = 8;
int led8 = 9;
int led9 =10;
int btn = 11;

//manter LED selecionado ligado
bool t1=false, t2=false, t3=false, t4=false, t5=false, t6=false, t7=false, t8=false, t9=false;

int ultimoBotao = LOW;

void piscarLed(int pino, int vezes, int duracao);

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(led6,OUTPUT);
  pinMode(led7,OUTPUT);
  pinMode(led8,OUTPUT);
  pinMode(led9,OUTPUT);
  pinMode(btn,INPUT_PULLUP);
  Serial.begin(9600);
}

void loop()
{
  //Potenciômetro
  int valor = analogRead(A0);

  int selecionado = map(valor, 0, 1023, 1, 9);

  int estadoBotao = digitalRead(btn);

   // detecta clique
  if(estadoBotao == LOW && ultimoBotao == HIGH) {
    if(selecionado == 1) t1 = true;
    if(selecionado == 2) t2 = true;
    if(selecionado == 3) t3 = true;
    if(selecionado == 4) t4 = true;
    if(selecionado == 5) t5 = true;
    if(selecionado == 6) t6 = true;
    if(selecionado == 7) t7 = true;
    if(selecionado == 8) t8 = true;
    if(selecionado == 9) t9 = true;
  }

  ultimoBotao = estadoBotao;

   // controle dos LEDs
  digitalWrite(led1, t1 || selecionado == 1);
  digitalWrite(led2, t2 || selecionado == 2);
  digitalWrite(led3, t3 || selecionado == 3);
  digitalWrite(led4, t4 || selecionado == 4);
  digitalWrite(led5, t5 || selecionado == 5);
  digitalWrite(led6, t6 || selecionado == 6);
  digitalWrite(led7, t7 || selecionado == 7);
  digitalWrite(led8, t8 || selecionado == 8);
  digitalWrite(led9, t9 || selecionado == 9);

  
 if (
  // reseta LINHAS
  ((t1 || selecionado == 1) && (t2 || selecionado == 2) && (t3 || selecionado == 3)) ||
  ((t4 || selecionado == 4) && (t5 || selecionado == 5) && (t6 || selecionado == 6)) ||
  ((t7 || selecionado == 7) && (t8 || selecionado == 8) && (t9 || selecionado == 9)) ||

  // reseta COLUNAS
  ((t1 || selecionado == 1) && (t4 || selecionado == 4) && (t7 || selecionado == 7)) ||
  ((t2 || selecionado == 2) && (t5 || selecionado == 5) && (t8 || selecionado == 8)) ||
  ((t3 || selecionado == 3) && (t6 || selecionado == 6) && (t9 || selecionado == 9)) ||

  // reseta DIAGONAIS
  ((t1 || selecionado == 1) && (t5 || selecionado == 5) && (t9 || selecionado == 9)) ||
  ((t3 || selecionado == 3) && (t5 || selecionado == 5) && (t7 || selecionado == 7))
)
{
  t1 = t2 = t3 = t4 = t5 = t6 = t7 = t8 = t9 = false;
  delay(300);
}
  delay(50);
 
}

void piscarLed(int pino, int vezes, int duracao) {
  for(int i = 0; i < vezes; i++) {
    digitalWrite(pino, HIGH);
    delay(duracao);
    digitalWrite(pino, LOW);
    delay(duracao);
  }
} 

