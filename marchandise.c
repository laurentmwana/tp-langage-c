#include <stdio.h>

int main() {
    // Question 1 : Ecrire un algorithme  et un programme en langage C qui calcul la vente de marchandises 
    // or nous savons que la formule pour calculer la vente de marchandise est : 
    // vente = Prix de vente unitaire x Quantité vendue

    // variable qui va stocker le prix unitaire saisi par l'utilisateur
    float unitPrice = 0;
    // variable qui va stocker la quantité vendue
    int quantitySold = 0;

    // le titre du programme
    printf("\n------------- CALCUL DE MARCHANDISE -------------- \n");

    // on commence par demander à l'utilisateur de saisir le prix de vente unitaire
    printf("\nSaisissez le prix de vente unitaire : ");
    // on recupère la valeur saisie par l'utilisateur
    scanf("%f", &unitPrice);

    // ensuite nous allons demander à l'utilisateur de saisir la quantité vendue
    printf("\nSaisissez la quantite vendue : ");
    // on recupère la valeur saisie par l'utilisateur
    scanf("%d", &quantitySold);

    // on applique la formule
    float sale = unitPrice * quantitySold;

    // on affiche le résultat
    printf("La vente de marchandise est  : %.2f", sale);

    return 0;

}