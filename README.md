# Projet-CO<sub>2</sub>
_Mathieu Peel, Juliette Lemaître, Dylan Sechet_

Projet maker S7 pour un capteur de CO<sub>2</sub>, en partenariat avec [La Fabrique](http://lafabrique.centralesupelec.fr/projetco2/).

## Carnet de bord
### Séance du 22/10/2020
_Présents : Mathieu Peel, Juliette Lemaître, Dylan Sechet_

##### Tâches réalisées :
* Découverte des spécifications du projet.
* Test du capteur SDC30 en PWM à l'aide du code fourni par le responsable de projet.
* Détection du port i2c du capteur à l'aide de la Teensy LC, à l'adresse 0x61 conformément aux spécifications de la datasheet.

##### TODO :
* Troubleshooter le problème de détection sous arduino (arduino défectueuse ? convertisseur de niveau ? port i2c/bibliothèque Wire.h fonctionnant différemment ?).
* Mettre en œuvre la communication avec le capteur.