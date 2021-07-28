int ML1=11; 
int ML2=12; 
int RM1=9;  
int RM2=10;  
int s1=4;    
int s2=5;    
int Sl_data=0;
int Sr_data=0;
void setup()
{
 pinMode(ML1,OUTPUT);
 pinMode(ML2,OUTPUT);
 pinMode(RM1,OUTPUT);
 pinMode(RM2,OUTPUT);
 pinMode(s1,INPUT);
 pinMode(s2,INPUT);
STOP();
}
void loop()
{
 Sl_data=digitalRead(s1);
 Sr_data=digitalRead(s2);
 if(Sr_data==LOW && Sl_data== LOW)
 {
  
  ForWard();
   }
   if(Sr_data==HIGH && Sl_data== HIGH)
 {

  BackWard();
  delay(200);
  Right();
  delay(200);
  ForWard();
  delay(200);
   }
    if(Sr_data==LOW && Sl_data== HIGH)
 {

  BackWard();
  delay(200);
  Right();
  delay(200);
  ForWard();
  delay(200);
   }
    if(Sr_data==HIGH && Sl_data== LOW)
 {
  
  BackWard();
  delay(200);
  Left();
  delay(200);
  ForWard();
  delay(200);
   }
}
void ForWard()
 {
  digitalWrite(ML1,HIGH);
  digitalWrite(ML2,LOW);
  digitalWrite(RM1,HIGH);
  digitalWrite(RM2,LOW);
 } 
 void BackWard()
 {
  digitalWrite(ML1,LOW);
  digitalWrite(ML2,HIGH);
  digitalWrite(RM1,LOW);
  digitalWrite(RM2,HIGH);
 }
 void Left()
 {
  digitalWrite(ML1,LOW);
  digitalWrite(ML2,HIGH);
  digitalWrite(RM1,HIGH);
  digitalWrite(RM2,LOW);
 } 
 void Right()
 {
  digitalWrite(ML1,HIGH);
  digitalWrite(ML2,LOW);
  digitalWrite(RM1,LOW);
  digitalWrite(RM2,HIGH);
 }  
   void STOP()
 {
  digitalWrite(ML1,LOW);
  digitalWrite(ML2,LOW);
  digitalWrite(RM1,LOW);
  digitalWrite(RM2,LOW);
 }
