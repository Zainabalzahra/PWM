int d = 5;
void setup() {
  // put your setup code here, to run once:
pinMode(3, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
pinMode(9, OUTPUT);
pinMode(11, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 
   for (int a =0; a < 256; a++)
 {
  analogWrite(11, a);
  delay(d);
 }
 
 for (int a =255; a>=0; a--)
 {
  analogWrite(11, a);
  delay(d);
 }
 delay(200);
  
  for (int a =0; a < 256; a++)
 {
  analogWrite(3, a);
  delay(d);
 }
 
 for (int a =255; a>=0; a--)
 {
  analogWrite(3, a);
  delay(d);
 }
 delay(200);

   for (int a =0; a < 256; a++)
 {
  analogWrite(6, a);
  delay(d);
 }
 
 for (int a =255; a>=0; a--)
 {
  analogWrite(6, a);
  delay(d);
 }
 delay(200);

  
 for (int a =0; a < 256; a++)
 {
  analogWrite(5, a);
  delay(d);
 }
 
 for (int a =255; a>=0; a--)
 {
  analogWrite(5,  a);
  delay(d);
 }
 delay(200);
  
  for (int a =0; a < 256; a++)
 {
  analogWrite(9, a);
  delay(d);
 }
 
 for (int a =255; a>=0; a--)
 {
  analogWrite(9,  a);
  delay(d);
 }
 delay(200);


 
}
