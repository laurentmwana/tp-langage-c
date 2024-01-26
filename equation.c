#include <stdio.h>
#include <math.h>

int main() {
    // Question 3: Ecrire un algorithme et un programme en langage C pour résoudre l’équation du 
    // second degré ax²+ bx + c = 0.

    // declaration des variables
    int a = 0, b = 0, c = 0;

    // on affiche le titre du programme 
    printf("\n------ EQUATION DE SECOND DEGRE -------- \n");

    // on commence par demander à l'utilisateur de saisir le coefficient de A
    printf("\nEntrez la valeur du coefficient de A : ");
    // on recupère la valeur saisie par l'utilisateur
    scanf("%d", &a);

    // on commence par demander à l'utilisateur de saisir le coefficient de B
    printf("\nEntrez la valeur du coefficient de B : ");
    // on recupère la valeur saisie par l'utilisateur
    scanf("%d", &b);

    // on commence par demander à l'utilisateur de saisir le coefficient de C
    printf("\nEntrez la valeur du coefficient de C : ");
    // on recupère la valeur saisie par l'utilisateur
    scanf("%d", &c);

    // on applique la formule de delta
    int delta = pow(b, 2) * 4 * a * c;

    // on affiche les resultats
    printf("\n------ RESULTAT -------- \n");

    // l'equation admet deux solution : X1 et X2
    if (delta > 0) {
        // on calcul la valeur de X1
        float x1 = (- b + sqrt(delta)) / 2 * a;
        // on calcul la valeur de X2
        float x2 = (- b - sqrt(delta)) / 2 * a;
        // on affiche le résultat de X1 et X2
        printf("L'equation admet deux solution : \nX1 : %.2f\nX2 : %.2f", x1, x2);
    } 
    // l'equation admet une seule solution
    else if(delta == 0) {
        float unique = (- b / (2 * a));
        printf("L'equation admet une seule solution : \nX1 : %.2f", unique);
    }
    // pas de solution
    else {
        printf("L'equation admet aucune solution (: ");
    }

    return 0;
}