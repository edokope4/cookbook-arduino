# 🔦 Blink LED

Una receta básica para hacer parpadear el LED integrado de la placa Arduino.

## 🎯 Propósito
Aprender la estructura mínima de un programa Arduino: `setup()` y `loop()`.

## 📜 Código
```cpp
// Blink LED
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH); // Enciende LED
  delay(1000);                     // Espera 1 segundo
  digitalWrite(LED_BUILTIN, LOW);  // Apaga LED
  delay(1000);                     // Espera 1 segundo
}
