int duracion=250; //Duración del sonido
int fMin=2000; //Frecuencia más baja que queremos emitir
int fMax=4000; //Frecuencia más alta que queremos emitir
int i=0;
void setup() {
  pinMode (2, OUTPUT);
  pinMode (3, OUTPUT);
  //pinMode (4, OUTPUT); 
}

void loop() {
   for (i=fMin;i<=fMax; i++)
     tone(4, i, duracion);
     digitalWrite(3, HIGH);
     delay(60);
     digitalWrite(3, LOW);
     delay(60);
     digitalWrite(2, HIGH);
     delay(60);
     digitalWrite(2, LOW);
     delay(15);
     //sonido más grave
    for (i=fMax;i>=fMin; i--)
     tone(4, i, duracion);  
     
     digitalWrite(2, HIGH);
     delay(60);
     digitalWrite(2, LOW);
     delay(60);
     digitalWrite(3, HIGH);
     delay(60);
     digitalWrite(3, LOW);
     delay(15);
  
  
}
