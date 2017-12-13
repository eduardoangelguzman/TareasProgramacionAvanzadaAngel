void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT); //declaracion de la salida
  Serial.begin(9600); //velocidad de comunicacion

}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available()>0){
    int input=Serial.read();
    if (input=='1'){ //si se recibe un uno el led en el pin 13 enciende
      digitalWrite(13, HIGH);
      String output="encendido @";
      output+=millis();
      output+="ms";//entrega el tiempo en milisegundos y se visualiza en java
      Serial.println(output);
    }
    else{//cualquier otro valor lo apaga
      digitalWrite(13, LOW);
      String output="apagado @";
      output+= millis();
      output+="ms";//entrega el tiempo en milisegundos y se visualiza en java
      Serial.println(output);
    }
  }

}
