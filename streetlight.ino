int ldrPin=A0;
int led=7;
int threshold=700;
void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}

void loop() {
int data =analogRead(ldrPin);
Serial.println("");
Serial.print("Light Sensor");
Serial.print(data);
if (data<=threshold){
  digitalWrite(led,HIGH);
}
else{
   digitalWrite(led,LOW);
}
}