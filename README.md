# 🎛️ Sensor de Som com LEDs e Botão de Reset — Arduino
Este projeto utiliza um sensor de som para acionar LEDs conectados a um Arduino.
Além disso, conta com um botão que permite resetar ou apagar os LEDs manualmente, mesmo que o som ainda esteja sendo detectado.

# 🚀 Funcionalidades
Detecta sons ambientes.

Acende LEDs quando o som ultrapassa um nível mínimo.

Botão físico para resetar (apagar) os LEDs.

Código simples e didático.

# 🛠️ Componentes necessários
1x Arduino (UNO, Mega, etc.)

1x Sensor de Som (microfone com saída digital ou analógica)

3x LEDs

3x Resistores (~220Ω)

1x Botão Push-Button

1x Resistor Pull-Down (~10kΩ)

Jumpers

Protoboard

# 🔌 Esquema de ligação
| Sensor de Som | Arduino |
|---------------|---------|
| OUT           | A0     |
| VCC           | VCC     |
| GND           | GND       |

| LEDS  | Arduino |
|--------|---------|
| LED 1   | PORTA 6     |
| LED 2    | PORTA 7     |
| LED 3    | PORTA 8       |
| LED 4  | PORTA 9       |
| LED 5   | PORTA 10      |
| LED 6   | PORTA 11     |
| LED 7        | PORTA 12 |
|  LED 8       | PORTA 13 |

Obs: Perna maior do led = Positivo, perna menor ligado ao GND

| BOTÃO  | Arduino |
|--------|---------|
| PERNA POSITIVA   | PORTA 5     |
| PERNA OPOSTA    | GND     |

Obs: O botão não tem obrigatóriamente o lado positivo, você quem decide isso. Não importa a perna que você conecte para a porta 5, mas é necessário que você conecte o GND a perna oposta da que você conectou a porta 5; Não é necessário uso de resistor visto que usei o pulllut no código.

GND e VCC do sensor e LEDs devem ser ligados adequadamente ao Arduino.

# 💻 Código
O código está no arquivo: sensorSomLeds.ino.
Principais pontos:

Faz a leitura analógica do som.

Se o som for maior que o limiar (nivelSomMinimo), acende os LEDs.

Caso o botão seja pressionado, os LEDs são apagados.

Se o som continuar alto após o reset, os LEDs podem acender novamente.

# ⚙️ Como usar
Monte o circuito conforme o esquema.

Abra o Arduino IDE.

Carregue o código sensorSomLeds.ino.

Selecione a porta e o modelo corretos do seu Arduino.

Faça o upload do código.

Produza sons e observe os LEDs acendendo.

Pressione o botão para apagar os LEDs a qualquer momento.

# 📝 Configurações importantes
No código, você pode ajustar a sensibilidade:
int nivelSomMinimo = 500; // Ajuste conforme necessário
Quanto menor o valor, mais sensível será a detecção de som.
Obs: Essa configuração só funciona se usar modo analógico no sensor.

# 📄 Licença
Este projeto é de livre uso para fins educacionais e pessoais.

# ℹ️ Observações
Ajuste o nivelSomMinimo conforme o ambiente: mais barulhento → valor maior
