//Augmenter la valeur de la résistance pour augmenter la sensibilité du capteur
// 30 kOhm permettra d'ajouter une épaisseur de 2 cm de materiau non conducteur entre l'utilisateur et le capteur

// Télécharger la librarie CapacitiveSensor (Menu -> Sketch -> Include Library -> Manage Libraries)
#include <CapacitiveSensor.h> // importation de la bibliothèque  CapacitiveSensor

// Déclaration d'un objet CapacitiveSensor
CapacitiveSensor capteur_4_6 = CapacitiveSensor(4,6); // 10kOhm resistance entre pins 4 & 6, pin 6 est la pin capteur (ajouter feuille d'aluminium ou câble)

//Déclaration de variables
long capacitance;

void setup() {
  // capteur_4_6.set_CS_AutocaL_Millis(0xFFFFFFFF); // éteindre l'autocalibration du capteur capacitif
  Serial.begin(9600);
}

void loop() {
  capacitance =  capteur_4_6.capacitiveSensor(30);

  Serial.println(capacitance);

   delay(10); // pause pour limiter le nombre de data sur le port série

}
