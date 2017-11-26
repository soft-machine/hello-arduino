// Déclaration des variables
int pinLed = 13;
int sensorValue; // pour les données du potentiomètre
int pinPotentiometre = A0; // pour déterminer quelle entrée est utilisé par le potentiomètre sur la carte Arduino
int mappedValues = 0;

// La fonction setup() se lance une fois à l'allumage de la carte
void setup() {
  // initaialise la broche pin = 13 de la carte comme sortie
  pinMode(pin, OUTPUT);
}

// la fonction boucle se 
void loop() {
  // On attribue à la variable sensorValue les données analogiques reçu sur la broche
  // A0 de l'ordinateur. La fonction analogRead() permet de faire cela.
  sensorValue = analogRead(pinPotentiometre);
  // On envoie les valeurs de la variable sensorValue
  // au port série de l'ordinateur
  Serial.println(sensorValue);
  delay(1);        // Delai de 1 milliseconde pour stabiliser le transfert

  mappedValues = map (sensorValues, 0, 1023, 500, 2000); // on transforme la valeur du potentiometre (0,1023) en des valeurs pour la LED (500, 2000) 
  
  digitalWrite(pinLed, HIGH);   // allume la LED (HIGH est la tension haute)
  delay(1000);                       // attendre une seconde (1000 milliseconde = 1 seconde)
  digitalWrite(pinLed, LOW);    // éteint la LED (LOW est la tension basse)
  delay(1000);                       // attendre une seconde (1000 milliseconde = 1 seconde)
}


