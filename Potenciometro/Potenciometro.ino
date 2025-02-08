// Pines de los potenciómetros
const int potPinRojo = A0;
const int potPinVerde = A1;
const int potPinAzul = A2;

// Pines del LED RGB
const int ledPinRojo = 11;  // Rojo
const int ledPinVerde = 10; // Verde
const int ledPinAzul = 9;   // Azul

void setup() {
  // Configura los pines de los LEDs como salida
  pinMode(ledPinRojo, OUTPUT);
  pinMode(ledPinVerde, OUTPUT);
  pinMode(ledPinAzul, OUTPUT);
}

void loop() {
  // Leer valores de los potenciómetros (0 a 1023)
  int valRojo = analogRead(potPinRojo);
  int valVerde = analogRead(potPinVerde);
  int valAzul = analogRead(potPinAzul);

  // Convertir valores a rango PWM (0 a 255)
  int pwmRojo = map(valRojo, 0, 1023, 0, 255);
  int pwmVerde = map(valVerde, 0, 1023, 0, 255);
  int pwmAzul = map(valAzul, 0, 1023, 0, 255);

  // Escribir valores en los LEDs
  analogWrite(ledPinRojo, pwmRojo);
  analogWrite(ledPinVerde, pwmVerde);
  analogWrite(ledPinAzul, pwmAzul);

  // Pequeña pausa para estabilizar
  delay(10);
}