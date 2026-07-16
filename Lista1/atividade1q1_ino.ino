bool executou = false;
void setup() {
  Serial.begin(9600);
  Serial.println("Hello, World!");
}

void loop() {
  if (!executou){
    Serial.println("1");
    Serial.println("2");
    Serial.println("3");
    Serial.println("4");
    Serial.println("5");
    executou = true;

  }
  
}
