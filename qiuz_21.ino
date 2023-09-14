byte led[3]={2,3,4};
byte sys[5][3]={{1,0,0},{1,1,0},{1,0,0},{1,1,0},{0,0,1}};
void setup()
{
 for(int i=0;i<3;i++)
   pinMode(*(led+i),OUTPUT);
}

void loop()
{
  for(int i=0;i<5;i++){
for(int J=0;J<=3;J++){
digitalWrite(led[J],sys[i][J]);
}delay(500);}

}