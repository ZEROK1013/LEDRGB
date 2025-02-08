// Pines para los colores del LED RGB
const int pinRojo = 11;
const int pinVerde = 10;
const int pinAzul = 9;

// Tiempo de retardo entre cambios de color
const int delayTiempo = 1500;

void setup() {
  // Configurar los pines como salida
  pinMode(pinRojo, OUTPUT);
  pinMode(pinVerde, OUTPUT);
  pinMode(pinAzul, OUTPUT);
}

void loop() {
  // ROJO
  analogWrite(pinRojo, 255);
  analogWrite(pinVerde, 0);
  analogWrite(pinAzul, 0);
  delay(delayTiempo);

  // NARANJA
  analogWrite(pinRojo, 255);
  analogWrite(pinVerde, 115);
  analogWrite(pinAzul, 0);
  delay(delayTiempo);

  // AMARILLO
  analogWrite(pinRojo, 255);
  analogWrite(pinVerde, 255);
  analogWrite(pinAzul, 0);
  delay(delayTiempo);

  // VERDE
  analogWrite(pinRojo, 0);
  analogWrite(pinVerde, 255);
  analogWrite(pinAzul, 0);
  delay(delayTiempo);

  // AZUL
  analogWrite(pinRojo, 0);
  analogWrite(pinVerde, 0);
  analogWrite(pinAzul, 255);
  delay(delayTiempo);

  // VIOLETA
  analogWrite(pinRojo, 128);
  analogWrite(pinVerde, 0);
  analogWrite(pinAzul, 255);
  delay(delayTiempo);
}
