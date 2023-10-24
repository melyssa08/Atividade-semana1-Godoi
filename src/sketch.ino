#define pino 28 // Pino escolhido foi o GP28

void setup() {

  Serial1.begin(115200);
  pinMode(pino,INPUT); // O usuário vai poder modificar a temperatura
  // pelo sensor

}

void loop() {
  int pinoEscolhidoComleituraAnalogica = analogRead(pino);
  // leitura analógica do pino 28

  Serial1.println(pinoEscolhidoComleituraAnalogica); // print da temperatura

  delay(1000); // 1 segundo para o loop recomeçar
}
