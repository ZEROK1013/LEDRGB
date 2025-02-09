// Pines de los potenciómetros
const int potRed = A0;
const int potGreen = A1;
const int potBlue = A2;

// Pines del LED RGB
const int ledBlue = 9;   // Azul
const int ledGreen = 10; // Verde
const int ledRed = 11;   // Rojo

void setup() {
  // Configura los pines de los LEDs como salida
  pinMode(ledRed, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  pinMode(ledBlue, OUTPUT);
}

void loop() {
  // Leer valores de los potenciómetros (0 a 1023)
  int valRed = analogRead(potRed);
  int valGreen = analogRead(potGreen);
  int valBlue = analogRead(potBlue);

  // Convertir valores a rango PWM (0 a 255)
  int pwmRed = map(valRed, 0, 1023, 0, 255);
  int pwmGreen = map(valGreen, 0, 1023, 0, 255);
  int pwmBlue = map(valBlue, 0, 1023, 0, 255);

  // Escribir valores en los LEDs
  analogWrite(ledRed, pwmRed);
  analogWrite(ledGreen, pwmGreen);
  analogWrite(ledBlue, pwmBlue);

  // Pequeña pausa para estabilizar
  delay(10);
}
