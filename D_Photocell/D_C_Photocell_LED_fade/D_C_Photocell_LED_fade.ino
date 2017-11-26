// Déclaration des variables
int pinLED = 9; // broche sur laquelle est branchée la LED
int sensorValue; // pour les données de la photocell
int pinLDR = A0; // pour déterminer quelle entrée est utilisé par la photocell sur la carte Arduino

int mappedData = 0; // pour stocker les valeurs tranformées entre celles de la LDR et celle de la LED

void setup() {
  // initialise la broche pin = 13 de la carte comme sortie
  pinMode(pinLED, OUTPUT);
  // initialisation du port série à un débit de 9600 par seconde
  Serial.begin(9600);
}

void loop() {
  // On attribue à la variable sensorValue les données analogiques reçu sur la broche
  // A0 de l'ordinateur. La fonction analogRead() permet de faire cela.
  sensorValue = analogRead(pinLDR);

  mappedData = map(sensorValue, 780, 160, 0, 255); // on change la plage des valeurs de la LDR (780, 160) vers celle de la LED (0-255)

  analogWrite(pinLED,  mappedData); // on assigne la valeur mappedData à l'intensité de la LED

  Serial.println(sensorValue);
  delay(1);        // Delai de 1 milliseconde pour stabiliser le transfert

}
