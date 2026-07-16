int contador = 1;
int soma = 0;

void setup()
{
 Serial.begin(9600);
  while (soma < 100){
 soma += contador;
 contador += 1;
	}

  Serial.print("A soma foi: ");
  Serial.print(soma);
  Serial.print(" e o ultimo numero utilizado no contador foi: ");
  Serial.println(contador);
}

void loop()
{

}
