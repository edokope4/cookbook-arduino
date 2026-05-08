// Import de la biblioteca de Servo
#include <Servo.h>

// Objeto llamado miServo
Servo miServo;          

void setup() {
  // Control del servo hacia el Pin 8
  miServo.attach(8);    // Le decimos que el cable naranja está en el pin 9
}

void loop() {
  // Gira a 0 grados
  miServo.write(0);     
  delay(1000);
  
  // Gira a 90 grados
  miServo.write(90);    // Gira al centro (90 grados)
  delay(3000);
}