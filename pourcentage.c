#include <stdio.h>
#include <math.h>

int main() {
    // Question 5: Ecrire un algorithme  et  un programme en langage C qui calcule le pourcentage 
    // lors d’un test et affiche selon le pourcentage les mentions suivantes :
    // 	LPGD : La plus grande distinction ;
    // GD : Grande Distinction ;
    // D : Distinction ;
    // S : Satisfaction ;
    // A : Ajourné.

    // declaration des variables
    const int DENOMINATOR = 20;
    float note = -1;

    // on affiche le titre du programme 
    printf("\n------ CALCULE DE POURCENTAGE -------- \n");

    // on empêche l'utilisateur de saisir une note supérieur à DENOMINATOR(20)
    while(note < 0 || note > DENOMINATOR){
        // on commence par demander à l'utilisateur de saisir la note reçue par l'etudiant
        printf("\nEntrez la note de l'etudiant [%d] : ", DENOMINATOR);
        // on recupère la valeur saisie par l'utilisateur
        scanf("%f", &note);
    }

    // on calcul le pourcentage obtenu par l'etudiant
    float percent = round((note / DENOMINATOR) * 100);

    // on affiche les résultats à l'ecran de l'utilisateur
    // la plus grande distinction
    if (percent >= 90 && percent <= 100) printf("Plus grande distinction avec : %.2f%", percent);
    // grande distinction
    else if (percent >= 80 && percent < 90) printf("Grande distinction avec : %.2f%", percent);
    // Distinction
    else if (percent >= 70 && percent < 80) printf("Distinction avec : %.2f%", percent);
    // Satisfaction
    else if (percent >= 50 && percent < 70) printf("Satisfaction avec : %.2f%", percent);
    // Ajournée
    else if (percent >= 0 && percent < 50) printf("Ajournee avec : %.2f%", percent);
    // Erreur
    else printf("Impossible de calculer le pourcentage (:");

    return 0;

}