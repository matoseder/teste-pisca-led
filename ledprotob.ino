const int buttonPin = 7;
const int ledPin = 10;
int estadoButton = 0;
int guardaEstado = LOW;

void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);

}

void loop() {
  estadoButton = digitalRead (buttonPin);
  if (estadoButton == HIGH) {
    guardaEstado = !guardaEstado;
    delay(500);
  }
  if (guardaEstado == HIGH) {
    digitalWrite(ledPin, HIGH);
  }
  else {
    digitalWrite (ledPin, LOW);
  }
}
