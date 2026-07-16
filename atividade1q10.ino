int matriz[3][3]= {
  {1,2,3},
  {4,5,6},
  {7,8,9}
};
void setup()
{
 Serial.begin(9600);
  for (int i = 0; i < 3; i++) {
    for(int j= 0; j < 3; j++){
      Serial.print(matriz[i][j]);
      Serial.print(" ");
    }
  Serial.println();
  }
}
  
void loop()
{

}