int pulsador_verde = 0; // .
int pulsador_amarillo = 0; // -
int pulsador_azul = 0; // espacio 

char mensaje[125]; 
int contador = 0;

void setup(){
  
  pinMode(2, INPUT);
  pinMode(3, OUTPUT);
  
  pinMode(5, INPUT);
  pinMode(6, OUTPUT);
  
  pinMode(8, INPUT);
  pinMode(9, OUTPUT);
  
  Serial.begin(9600); //baudio se trasmiten 9600 bits por segundo
}

void loop(){
  
  pulsador_verde = digitalRead(2);
  pulsador_amarillo = digitalRead(5);
  pulsador_azul = digitalRead(8);
  
  if ( pulsador_verde == 0) {
   delay(10);
   digitalWrite(3, LOW);
   pulsador_verde = digitalRead(2);
  if (pulsador_verde == 1) {
    digitalWrite(3, HIGH);    
    mensaje[contador]='.';
    contador++;
    Serial.println(mensaje);
  }}
  if ( pulsador_amarillo == 0) {
   digitalWrite(6, LOW);
   pulsador_amarillo = digitalRead(5);
  if (pulsador_amarillo == 1) {
    digitalWrite(6, HIGH);    
    mensaje[contador]='-';
    contador++;
    Serial.println(mensaje);
    delay(10);
  }}
  if ( pulsador_azul == 0) {
   digitalWrite(9, LOW);
   pulsador_azul = digitalRead(8);
  if (pulsador_azul == 1) {
    digitalWrite(9, HIGH);    
    mensaje[contador]='_';
    contador++;
    Serial.println(mensaje);
    delay(10);
  }}
  
}




//sudo chmod 777 /dev/ttyACM0
