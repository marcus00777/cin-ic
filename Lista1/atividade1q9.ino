String senha = "lanterna22";
String tentativas[] = {"lanterna41","Browser", "jayjay34", "lanterna22"};

int i = 0;
void setup()
{
 Serial.begin(9600);
  while (tentativas[i] != senha){
Serial.print("Tentativa ");
Serial.println(tentativas[i]);
    
i++;
 }
Serial.print("Tentativa: ");
Serial.println(tentativas[i]);
Serial.println("Cofre aberto!");
  
}
void loop()
{

}
