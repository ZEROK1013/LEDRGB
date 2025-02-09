// Pines para los colores del LED RGB
const int pinRojo = 11;  // Rojo en el pin 11
const int pinVerde = 10; // Verde en el pin 10
const int pinAzul = 9;   // Azul en el pin 9

// Pin del botón
const int pinBoton = 2;

// Variables para controlar el estado del botón y el color actual
int estadoBoton = 0;
int ultimoEstadoBoton = 0;
int colorActual = 0;

void setup() {
  // Configurar los pines del LED como salida
  pinMode(pinRojo, OUTPUT);
  pinMode(pinVerde, OUTPUT);
  pinMode(pinAzul, OUTPUT);

  // Configurar el pin del botón como entrada con pull-up interno
  pinMode(pinBoton, INPUT_PULLUP);

  // Inicializar el LED en ROJO
  cambiarColor(colorActual); 
}

void loop() {
  // Leer el estado del botón
  estadoBoton = digitalRead(pinBoton);

  // Detectar un cambio de estado (flanco descendente)
  if (estadoBoton == LOW && ultimoEstadoBoton == HIGH) {
    // Cambiar al siguiente color
    colorActual = (colorActual + 1) % 6; // Ciclo entre 0 y 5
    cambiarColor(colorActual);
    delay(200); // Anti-rebote (debounce)
  }

  // Guardar el estado actual del botón
  ultimoEstadoBoton = estadoBoton;
}

// Función para cambiar el color según el índice
void cambiarColor(int color) {
  switch (color) {
    case 0: // ROJO
      analogWrite(pinRojo, 255);
      analogWrite(pinVerde, 0);
      analogWrite(pinAzul, 0);
      break;
    case 1: // NARANJA
      analogWrite(pinRojo, 255);
      analogWrite(pinVerde, 100);
      analogWrite(pinAzul, 0);
      break;
    case 2: // AMARILLO
      analogWrite(pinRojo, 255);
      analogWrite(pinVerde, 255);
      analogWrite(pinAzul, 0);
      break;
    case 3: // VERDE
      analogWrite(pinRojo, 0);
      analogWrite(pinVerde, 255);
      analogWrite(pinAzul, 0);
      break;
    case 4: // AZUL
      analogWrite(pinRojo, 0);
      analogWrite(pinVerde, 0);
      analogWrite(pinAzul, 255);
      break;
    case 5: // VIOLETA
      analogWrite(pinRojo, 128);
      analogWrite(pinVerde, 0);
      analogWrite(pinAzul, 255);
      break;
  }
}

