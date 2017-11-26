// Déclaration des variables
int pinLed = 13;
int sensorValue; // pour les données du potentiomètre
int pinPotentiometre = A0; // pour déterminer quelle entrée est utilisé par le potentiomètre sur la carte Arduino
int Seuil = 1000; // VAleur de seuil à partir de laquelle la LED s'allumera

// La fonction setup() se lance une fois à l'allumage de la carte
void setup() {
  // initialise la broche pin = 13 de la carte comme sortie
  pinMode(pinLed, OUTPUT);
}

// la fonction boucle se
void loop() {
  // On attribue à la variable sensorValue les données analogiques reçu sur la broche
  // A0 de l'ordinateur. La fonction analogRead() permet de faire cela.
  sensorValue = analogRead(pinPotentiometre);

  delay(1);        // Delai de 1 milliseconde pour stabiliser le transfert

  if ( sensorValue > Seuil) {
    digitalWrite(pinLed, HIGH);   // allume la LED (HIGH est la tension haute)
  } else {
    digitalWrite(pinLed, LOW);    // éteint la LED (LOW est la tension basse)
  }
}


