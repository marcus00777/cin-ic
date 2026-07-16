void setup() {
  Serial.begin(9600);
   
  for (int x = 0; x <= 10; x += 2){
    Serial.println(x);
  }
}

void loop() {
}
