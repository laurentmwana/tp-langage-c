#include <stdio.h>
#include <math.h>

#define MAX_VALUE 28

int main() {
    
    // Question 6 : Ecrire un algorithme qui calcule le différentiel pour tout nombre compris 
    // entre 1 et28 inclus. En dehors de cet intervalle le différentiel est égal au nombre entier. 

    // declaration des variables
    int number = 0, expo = 0, index = 1, fn = 0;

    // on affiche le titre du programme 
    printf("\n------ CALCUL DE DIFFERENTIEL -------- \n");

    // on empêche l'utilisateur de saisir un nombre <= 0
    while (number <= 0) {
        // on commence par demander à l'utilisateur de saisir la valeur de N (number)
        printf("\nEntrez un nombre positif [n > 0] : ");
        // on recupère la valeur saisie par l'utilisateur
        scanf("%d", &number);
    }

    // on empêche l'utilisateur de saisir un exposant <= 0
    while (expo <= 0) {
        // on commence par demander à l'utilisateur de saisir la valeur de l'exposant
        printf("\nEntrez l'exposant [n > 0] : ");
        // on recupère la valeur saisie par l'utilisateur
        scanf("%d", &expo);
    }

    // on applique la formule
    for (index; index <= MAX_VALUE; index++) {
        fn += number - pow(expo, number - 1);
    }

    // on affiche le résultat
    printf("La valeur de la fonction est : %d", fn);

    return 0;

}