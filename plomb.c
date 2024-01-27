#include <stdio.h>
#include <math.h>

#define G 9.8

int main() {
    
    // Question 4: Ecrire un algorithme  et un programme en langage Cd’une bille de plomb est lâchée du haut d’un immeuble et tombe en libre. Au bout d’un temps t (exprimé en secondes).
    // la bille est descendue d’une hauteur(en mètre).

    // declaration des variables
    float time = 0;

    // on affiche le titre du programme 
    printf("\n------ BILLE DE PLOMB -------- \n");

    // on empêche l'utilisateur de saisir un nombre <= 0
    while (time <= 0) {
        // on commence par demander à l'utilisateur de saisir la valeur du temps
        printf("\nEntrez le temps [t > 0] : ");
        // on recupère la valeur saisie par l'utilisateur
        scanf("%f", &time);
    }
    // on applique la formule et on affiche le résultat
    printf("La hauteur est : %.2f metre", (G * time));

    return 0;

}