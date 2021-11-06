int IR0 = A0;
int IR1 = A1;
int IR2 = A2;
int IR3 = A3;
int clave1 = 2;
int clave2 = 4;
int bonsai = 0;


void setup() {
  pinMode(IR0,INPUT);
  pinMode(IR1,INPUT);
  pinMode(IR2,INPUT);
  pinMode(IR3,INPUT);
  pinMode(clave1,OUTPUT);
  pinMode(clave2,OUTPUT);
  pinMode(bonsai,OUTPUT);
  Serial.begin(9600);
  }

void loop() {
  

  
  // La entrada
  float value0 = (5. / 1023) * analogRead(IR0); // Pos
  float value1 = (5. / 1023) * analogRead(IR1); // Leng
  float value2 = (5. / 1023) * analogRead(IR2); // Pos
  float value3 = (5. / 1023) * analogRead(IR3); // Leng
  
  // Cargamos los valores
  String valores = "";
  valores.concat(String(value0));
  valores.concat(" ");
  valores.concat(String(value1));
  valores.concat(" ");
  valores.concat(String(value2));
  valores.concat(" ");
  valores.concat(String(value3));
  
  Serial.println(valores);
  
  
  //bonsai = Serial.read(); ==> tenemos que agregar la funcion que interactua con el las bobinas
  
  
    
}
