int led = 9;           // LA broche PWM (~) sur laquelle est branchée la LED
int brightness = 0;    // la luminosité de la LED. Valeur au lancement du programme est égale à 0
int fadeAmount = 5;    // Nombre de 

void setup() {
  // Initialiser la broche 9 comme sortie
  pinMode(led, OUTPUT);
}

void loop() {
  // déterminer la luminosité sur la broche 9
  analogWrite(led, brightness);

  // Change la valeur de luminosité à chaque execution de la boucle loop()
  brightness = brightness + fadeAmount;

  // inverse la luminosité quand la valeur est au maximum ou au minimu
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }
  // on attend 30 millisecondes pour voir l'effet de fondu
  delay(30);
}
