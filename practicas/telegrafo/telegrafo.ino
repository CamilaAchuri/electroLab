
int pulsador_verde = 0; // .
int pulsador_amarillo = 0; // -
int pulsador_azul = 0; // espacio 

String letraMorse = "";
char mensaje[125]; 
int contador = 0;

String mensajeDecodificado = "";
  

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
    //Serial.println(mensaje);
    //delay(10);
  }}
  if ( pulsador_amarillo == 0) {
   digitalWrite(6, LOW);
   pulsador_amarillo = digitalRead(5);
  if (pulsador_amarillo == 1) {
    digitalWrite(6, HIGH);    
    mensaje[contador]='-';
    contador++;
    //Serial.println(mensaje);
    //delay(10);
  }}
  if ( pulsador_azul == 0) {
   digitalWrite(9, LOW);
   pulsador_azul = digitalRead(8);
  if (pulsador_azul == 1) {
    digitalWrite(9, HIGH);  

      for (int i = 0; i<= contador-1;i++) {
        letraMorse = letraMorse + mensaje[i];  
      }
      mensajeDecodificado += diccionario(letraMorse);
 
      contador = 0;
      letraMorse = "";
 
    Serial.println(mensajeDecodificado);
    delay(10);
  }}


}

 // Funcion que guarda el respectivo significado del codigo
char diccionario(String Morse) {
  if (Morse == ".-") {
    return 'A';
  } else if (Morse == "-...") {
    return 'B';
  } else if (Morse == "-.-.") {
    return 'C';
  } else if (Morse == "-..") {
    return 'D';
  } else if (Morse == ".") {
    return 'E';
  } else if (Morse == "..-.") {
    return 'F';
  } else if (Morse == "--.") {
    return 'G';
  } else if (Morse == "....") {
    return 'H';
  } else if (Morse == "..") {
    return 'I';
  } else if (Morse == ".---") {
    return 'J';
  } else if (Morse == "-.-") {
    return 'K';
  } else if (Morse == ".-..") {
    return 'L';
  } else if (Morse == "--") {
    return 'M';
  } else if (Morse == "-.") {
    return 'N';
  } else if (Morse == "---") {
    return 'O';
  } else if (Morse == ".--.") {
    return 'P';
  } else if (Morse == "--.-") {
    return 'Q';
  } else if (Morse == ".-.") {
    return 'R';
  } else if (Morse == "...") {
    return 'S';
  } else if (Morse == "-") {
    return 'T';
  } else if (Morse == "..-") {
    return 'U';
  } else if (Morse == "...-") {
    return 'V';
  } else if (Morse == ".--") {
    return 'W';
  } else if (Morse == "-..-") {
    return 'X';
  } else if (Morse == "-.--") {
    return 'Y';
  } else if (Morse == "--..") {
    return 'Z';
  } else if (Morse == "") {
    return ' ';
  } else if (Morse == ".-.-.-") {
    return '.';
  } else if (Morse == "--..--") {
    return ',';
  } else if (Morse == "..--..") {
    return '?';
  } else if (Morse == "-..-.") {
    return '/';
  } else if (Morse == ".--.-.") {
    return '@';
  } else if (Morse == ".----") {
    return '1';
  } else if (Morse == "..---") {
    return '2';
  } else if (Morse == "...--") {
    return '3';
  } else if (Morse == "....-") {
    return '4';
  } else if (Morse == ".....") {
    return '5';
  } else if (Morse == "-....") {
    return '6';
  } else if (Morse == "--...") {
    return '7';
  } else if (Morse == "---..") {
    return '8';
  } else if (Morse == "----.") {
    return '9';
  } else if (Morse == "-----") {
    return '0';
  } else {
    Serial.println("Combinacion no disponble :(");
  }}




//sudo chmod 777 /dev/ttyACM0
