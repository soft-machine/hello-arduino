// Déclaration des variables
int pinButton = 2;     // le numéro de broche sur la carrte arduino où est branché le bouton
int ledPin =  13;      // le numéro de broche où est branchée la LED
int buttonState = 0;   // variable pour lire l'état du bouton : actif ou inactif

void setup() {
  // initialisation de la broche 2 (LED) comme sortie
  pinMode(ledPin, OUTPUT);
  // initialisation de la broche 13 (bouton) comme entrée
  pinMode(pinButton, INPUT);
}

void loop() {
  // stocke la valuer de l'état du bouton dans la variable buttonState
  buttonState = digitalRead(pinButton);

  // // Si on presse le bouton (s'il est en position HIGH) …
  if (buttonState == HIGH) {
    // … je fais clignoter la LED
    digitalWrite(ledPin, HIGH); // allume la led
    delay(1000); // pendant 1 seconde = 1000 millisecondes
    digitalWrite(ledPin, LOW); // éteins la LED
    delay(1000); // pendant 1 seconde = 1000 millisecondes
  } else { // … sinon …
    // … la LED reste allumée
    digitalWrite(ledPin, HIGH);
  }
}
