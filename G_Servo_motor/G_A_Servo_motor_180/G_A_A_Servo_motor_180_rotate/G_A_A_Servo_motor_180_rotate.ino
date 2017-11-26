// Télécharger la bibliothèque Servo
// Télécharger la librarie CapacitiveSensor (Menu -> Sketch -> Include Library -> Manage Libraries)


#include <Servo.h> // // importation de la bibliothèque Servo

Servo myservo;  // Creation d'un objet servo nommé myservo

void setup() {
  myservo.attach(9);  // indiquer la broche ou est branché le servo, ici pin 9
  
}

void loop() {
 myservo.write(90); // indication de l'angle du servo
   }

