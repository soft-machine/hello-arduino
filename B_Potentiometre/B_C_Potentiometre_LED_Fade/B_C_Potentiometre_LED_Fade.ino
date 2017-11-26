// Déclaration des variables
int pinLed = 9; // LA broche PWM (~) sur laquelle est branchée la LED
int sensorValue; // pour les données du potentiomètre
int pinPotentiometre = A0; // pour déterminer quelle entrée est utilisé par le potentiomètre sur la carte Arduino
int mappedValues = 0;

// La fonction setup() se lance une fois à l'allumage de la carte
void setup() {
  //Ouvrir le port série
  // Serial.begin(9600);
  // initialise la broche pin = 13 de la carte comme sortie
  pinMode(pinLed, OUTPUT);
}

// la fonction boucle se 
void loop() {
  // On attribue à la variable sensorValue les données analogiques reçu sur la broche
  // A0 de l'ordinateur. La fonction analogRead() permet de faire cela.
  sensorValue = analogRead(pinPotentiometre);
  // On envoie les valeurs de la variable sensorValue
  // au port série de l'ordinateur
  // Serial.println(sensorValue);
  delay(1);        // Delai de 1 milliseconde pour stabiliser le transfert

  mappedValues = map (sensorValue, 0, 1023, 0, 255); // on transforme la valeur du potentiometre (0,1023) en des valeurs pour la LED (500, 2000) 
  
   // déterminer la luminosité sur la broche 9
  analogWrite(pinLed, mappedValues);            
}


