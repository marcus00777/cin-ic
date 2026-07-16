void setup() {
  Serial.begin(9600);
   
 int valores[5] = {5, 10, 15, 20, 25};
  
 int soma = valores[0] + valores[1] + valores[2] + valores[3] + valores[4];
    
 float media = (valores[0] + valores[1] + valores[2] + valores[3] + valores[4])/5.0;
                 
 Serial.println(soma);
 Serial.println(media); 
}

void loop() {
}
