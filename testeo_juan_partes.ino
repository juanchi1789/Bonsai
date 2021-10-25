int IR0 = A0;
int IR1 = A1;
int IR2 = A2;
int IR3 = A3;
int clave1 = 2;
int bonsai = 0;


void setup() {
  pinMode(IR0,INPUT);
  pinMode(IR1,INPUT);
  pinMode(IR2,INPUT);
  pinMode(IR3,INPUT);
  pinMode(clave1,OUTPUT);
  pinMode(bonsai,OUTPUT);
  Serial.begin(9600);
  }

void loop() {
  String valores = "";
  float value0 = (5. / 1023) * analogRead(IR0); // Pos
  float value1 = (5. / 1023) * analogRead(IR1); // Leng
  valores.concat(String(value0));
  valores.concat(" ");
  valores.concat(String(value1));
  
  Serial.println(valores);

 //Serial.print("Pos: "); Serial.print(value1); Serial.print("  ");
  //Serial.println(",");
  //bonsai = Serial.read();
  
  //if(value0 > 3 && value1 > 3 && bonsai != -1){
  if(value0 > 3 && bonsai != -1){
    digitalWrite(clave1,HIGH);
  }
  else{
    digitalWrite(clave1,LOW);
  }
  
}
