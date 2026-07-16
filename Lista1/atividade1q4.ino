void setup() {
  Serial.begin(9600);
   
  float nota = 5.5;

  if (nota >= 7) {
    Serial.println("Aprovado");
  } else {
    Serial.println("Reprovado");
  }
}

void loop() {
}
