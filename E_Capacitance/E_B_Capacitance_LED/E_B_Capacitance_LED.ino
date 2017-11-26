//Augmenter la valeur de la résistance pour augmenter la sensibilité du capteur
// 30 kOhm permettra d'ajouter une épaisseur de 2 cm de materiau non conducteur entre l'utilisateur et le capteur


// Télécharger la librarie CapacitiveSensor (Menu -> Sketch -> Include Library -> Manage Libraries)
#include <CapacitiveSensor.h> // importation de la bibliothèque  CapacitiveSensor

// Déclaration d'un objet CapacitiveSensor
CapacitiveSensor capteur_2_3 = CapacitiveSensor(2, 3); // 10kOhm resistance entre pins 4 & 6, pin 6 est la pin capteur (ajouter feuille d'aluminium ou câble)

// Déclaration des variables
const int ledPin = 4;
int capacitance_2_3;
int valeur_seuil = 50;

void setup() {
  capteur_2_3.set_CS_AutocaL_Millis(0xFFFFFFFF); // éteindre l'autocalibration du capteur capacitif
  Serial.begin(9600); // Initialisation du port série
  pinMode(ledPin, OUTPUT); // initialisation broche 2 comme sortie
}

void loop() {
  capacitance_2_3 =  capteur_2_3.capacitiveSensor(30); // stockage valeur capteur capacitif dans la variable  capacitance_2_3

  if ( capacitance_2_3 > valeurSeuil) { //Si capacitance_2_3 est supérieure à la valeur de seuil …
    digitalWrite(ledPin, HIGH); // … on allume la LED
  }
  else // … sinon …
  {
    digitalWrite(ledPin, LOW); // … on éteint la LED
  }
  Serial.println(capacitance_2_3); // on affiche la valeur dans le serial monitor
  delay(100); // Délai de 100 millisecondes pour alléger le port série dans la réception des données
}

