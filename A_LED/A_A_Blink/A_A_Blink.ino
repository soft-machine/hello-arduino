// Déclaration des variables
int pin = 13;

// La fonction setup() se lance une fois à l'allumage de la carte
void setup() {
  // initialise la broche pin = 13 de la carte comme sortie
  pinMode(pin, OUTPUT);
}

// la fonction boucle se 
void loop() {
  digitalWrite(pin, HIGH);   // allume la LED (HIGH est la tension haute)
  delay(1000);                       // attendre une seconde (1000 milliseconde = 1 seconde)
  digitalWrite(pin, LOW);    // éteint la LED (LOW est la tension basse)
  delay(1000);                       // attendre une seconde (1000 milliseconde = 1 seconde)
}
