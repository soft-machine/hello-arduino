// Déclaration des variables
int pinLED = 13; // broche sur laquelle est branchée la LED
int valeurSeuil = 500; // variable pour indiquer la valeur de seuil
int sensorValue; // pour les données de la photocell
int pinLDR = A0; // pour déterminer quelle entrée est utilisé par la photocell sur la carte Arduino


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

  if ( sensorValue > valeurSeuil) { // Si la valeur de la LDR est superieure à la valeur de seuil …
    digitalWrite(pinLED, HIGH); //… on allume la LED
  } else { // … Sinon …
    digitalWrite(pinLED, LOW); // … on éteint la LED
  }

  // On envoie les valeurs de la variable sensorValue
  // au port série de l'ordinateur
  Serial.println(sensorValue);
  delay(1);        // Delai de 1 milliseconde pour stabiliser le transfert

}
