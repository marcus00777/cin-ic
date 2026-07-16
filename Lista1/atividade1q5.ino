void setup() {
  Serial.begin(9600);
   
  float temperatura = 40.5;

  if (temperatura < 20) {
    Serial.println("Frio");
  } else if (temperatura >= 20 && temperatura <= 30) {
      Serial.println("Agradável");
  }else if ( temperatura > 30){
      Serial.println("Quente");
  }
  
}

void loop() {
}
