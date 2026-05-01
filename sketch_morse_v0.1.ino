void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  String palabra = "kope";
  int entreLetrasMs = 1000;   // espacio entre letras
  int entrePalabrasMs = 2000; // espacio entre palabras

  for (int i = 0; i < palabra.length(); i++) {
    String codigo = morse(palabra[i]);

    for (int j = 0; j < codigo.length(); j++) {
      if (codigo[j] == '.') {
        escribirPunto();
      } else if (codigo[j] == '-') {
        escribirRaya();
      }
      delay(500); // espacio entre símbolos dentro de la misma letra
    }

    delay(entreLetrasMs); // espacio entre letras
  }

  delay(entrePalabrasMs); // pausa larga antes de repetir

  // Señal de reinicio del loop
  blinkRapido();
}

// Diccionario Morse básico
String morse(char letra) {
  switch (toupper(letra)) {
    case 'A': return ".-";
    case 'B': return "-...";
    case 'C': return "-.-.";
    case 'D': return "-..";
    case 'E': return ".";
    case 'F': return "..-.";
    case 'G': return "--.";
    case 'H': return "....";
    case 'I': return "..";
    case 'J': return ".---";
    case 'K': return "-.-";
    case 'L': return ".-..";
    case 'M': return "--";
    case 'N': return "-.";
    case 'O': return "---";
    case 'P': return ".--.";
    case 'Q': return "--.-";
    case 'R': return ".-.";
    case 'S': return "...";
    case 'T': return "-";
    case 'U': return "..-";
    case 'V': return "...-";
    case 'W': return ".--";
    case 'X': return "-..-";
    case 'Y': return "-.--";
    case 'Z': return "--..";
    case ' ': return " "; // espacio entre palabras
    default: return "";
  }
}

void escribirPunto() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(300); 
  digitalWrite(LED_BUILTIN, LOW);
}

void escribirRaya() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(900); // raya más larga
  digitalWrite(LED_BUILTIN, LOW);
}

// Blink rápido de 2 segundos
void blinkRapido() {
  unsigned long inicio = millis();
  while (millis() - inicio < 2000) {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(50);
    digitalWrite(LED_BUILTIN, LOW);
    delay(50);
  }
  delay(2000);
}

