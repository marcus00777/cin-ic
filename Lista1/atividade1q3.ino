void setup() {
  Serial.begin(9600);

  int a = 5;
  int b = 6;

  if (a > b) {
    Serial.println("a é maior que b");
  } else if (a == b) {
    Serial.println("a é igual a b");
  } else {
    Serial.println("a é menor que b");
  }
}

void loop() {
  
  
  
}
