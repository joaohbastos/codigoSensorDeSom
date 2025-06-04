const int pinoSensorSomAnalogico = A0; 
const int limiarSomAnalogico = 600;

const int pinosLEDs[8] = {6, 7, 8, 9, 10, 11, 12, 13};  
const int pinoBotao = 5;

int valorAnalogico = 0;
int contador = 0;

void setup() {
  for (int i = 0; i < 8; i++) {
    pinMode(pinosLEDs[i], OUTPUT);
    digitalWrite(pinosLEDs[i], LOW);
  }
  pinMode(pinoBotao, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  valorAnalogico = analogRead(pinoSensorSomAnalogico);
  Serial.print("Saída Analógica: ");
  Serial.println(valorAnalogico);

  if (valorAnalogico > limiarSomAnalogico) {
    digitalWrite(pinosLEDs[contador], HIGH);
    Serial.print("Acendendo LED ");
    Serial.println(contador);
    contador++;
    if (contador >= 8) contador = 0;
    delay(500);  // Pequeno delay para evitar várias contagens com o mesmo som
  }

  if (digitalRead(pinoBotao) == LOW) {
    for (int i = 0; i < 8; i++) {
      digitalWrite(pinosLEDs[i], LOW);
    }
    contador = 0;
    Serial.println("Botão pressionado! LEDs desligados.");
    delay(500);
  }

  delay(50);
}