/**
* --- Semárofo simple ---
*/

/*
* Definición de constantes para todo el programa
* tiempos de duración encendido del Rojo para detenerse
* tiempos de duración encendido del Amarillo para precaución y cautela
* tiempos de duración encendido del Verde para continuar
*/
const int tiempoRojo     = 15000;
const int tiempoAmarillo = 2000;
const int tiempoVerde    = 12000;

// verde
const int LED_VERDE    = 3;
// amarillo
const int LED_AMARILLO = 5;
// rojo
const int LED_ROJO     = 6;

// Configuramos los leds
void setup() {
  pinMode(LED_VERDE, OUTPUT);
  // amarillo
  pinMode(LED_AMARILLO, OUTPUT);
  // rojo
  pinMode(LED_ROJO, OUTPUT);
}

// vamos y vamos y vamos y vamos.....
void loop() {
  turnoVerde();
  turnoAmarillo();
  turnoRojo();  
}

// Encender y apagar el verde
void turnoVerde() {
  digitalWrite(LED_VERDE, HIGH);
  delay(tiempoVerde);
  digitalWrite(LED_VERDE, LOW);
}

// Encender y apagar el amarillo
void turnoAmarillo() {
  digitalWrite(LED_AMARILLO, HIGH);
  delay(tiempoAmarillo);
  digitalWrite(LED_AMARILLO, LOW);
}

// Encender y apagar el rojo
void turnoRojo() {
  digitalWrite(LED_ROJO, HIGH);
  delay(tiempoRojo);
  digitalWrite(LED_ROJO, LOW);
}
