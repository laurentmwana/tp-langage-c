#include <stdio.h>
#include <math.h>

#define RUNNER_COUNT 60
#define RUNNER_VALUE_LENGHT_MAX 255

int main() {
    
    // Question 2:  Ecrire un algorithme et un programme en langage C qui permet de classifier 
    // le résultat de 60 coureurs dans les jeux Olympique 2012.
    // on recupère la liste des coureurs du JO 2012 
    // (source: https://olympics.com/fr/olympic-games/london-2012/athletes)
    char runners[RUNNER_COUNT][RUNNER_VALUE_LENGHT_MAX] = {
        "JAM :  Usain Bolt,  Athletisme, 3 medailles",
        "USA :  Allyson Felix, Athletisme, 3 medailles",
        "GBR :  Mohamed Farah, Athletisme, 2 medailles",
        "USA :  Sanya Richards-Ross, Athletisme, 2 medailles",
        "JAM :  Yohan Blake, Athletisme, 2 medailles",
        "JAM :  Shelly-Ann Fraser-Pryce, Athletisme, 2 medailles",
        "USA :  Carmelita Jeter, Athletisme, 1 medaille",
        "USA :  Deedee Trotter, Athletisme, 1 medaille",
        "ETH :  Tirunesh Dibaba, Athletisme, 1 medaille",
        "ALG :  Taoufik Makhloufi, Athletisme, 1 medaille",
        "POL :  Anita Wlodarczyk, 1 medaille",
        "KEN :  Ezekiel Kemboi, Athletisme, 1 medaille",
        "BAH :  Ramon Miller, Athletisme, 1 medaille",
        "USA :  Ashton Eaton, Athletisme, 1 medaille",
        "USA :  Keshia Baker, Athletisme, 1 medaille",
        "AUS :  Jared Tallent, Athletisme, 1 medaille",
        "KEN :  David Rudisha, Athletisme, 1 medaille",
        "GBR :  Jessica Ennis, Athletisme, 1 medaille",
        "USA :  Christian Taylor, Athletisme, 1 medaille",
        "USA :  Aries Merritt, Athletisme, 1 medaille",
        "BAH :  Christopher Brown, Athletisme, 1 medaille",
        "USA :  Lauryn Williams, Athletisme, 1 medaille",
        "AUS :  Sally Pearson, Athletisme, 1 medaille",
        "CHN :  Ding Chen, Athletisme, 1 medaille",
        "UGA :  Stephen Kiprotich, Athletisme, 1 medaille",
        "BAH :  Demetrius Pinder, Athletisme, 1 medaille",
        "FRA :  Renaud Lavillenie, Athletisme, 1 medaille",
        "GBR :  Greg Rutherford, Athletisme, 1 medaille",
        "CZE :  Greg Rutherford, Athletisme, 1 medaille",
        "USA :  Tianna Bartoletta, Athletisme, 1 medaille",
        "RSA :  Caster Semenya, Athletisme, 1 medaille",
        "HUN :  Krisztian Pars, Athletisme, 1 medaille",
        "TUN :  Habiba Ghribi, Athletisme, 1 medaille",
        "BRN :  Maryam Yusuf Jamal, Athletisme, 1 medaille",
        "USA :  Jeneba Tarmoh, Athletisme, 1 medaille",
        "ETH :  Meseret Defar, Athletisme, 1 medaille",
        "USA :  Bianca Knight, Athletisme, 1 medaille",
        "USA :  Brittney Reese, Athletisme, 1 medaille",
        "CHN :  Shijie Qieyang, Athletisme, 1 medaille",
        "GER :  Robert Harting, Athletisme, 1 medaille",
        "RUS :  Anna Chicherova, Athletisme, 1 medaille",
        "BAH :  Michael Mathieu, Athletisme, 1 medaille",
        "USA :  Francena Mccorory, Athletisme, 1 medaille",
        "DOM :  Felix Sanchez, Athletisme, 1 medaille",
        "USA :  Diamond Dixon, Athletisme, 1 medaille",
        "ETH :  Tiki Gelana, Athletisme, 1 medaille",
        "USA :  Lashinda Demus, Athletisme, 1 medaille",
        "JAM :  Nesta Carter, Athletisme, 1 medaille",
        "GRN :  Kirani James, Athletisme, 1 medaille",
        "TTO :  Keshorn Walcott, Athletisme, 1 medaille",
        "JAM :  Michael Frater, Athletisme, 1 medaille",
        "KAZ :  Olga Rypakova, Athletisme, 1 medaille",
        "USA :  Erik Kynard, Athletisme, 1 medaille",
        "CRO :  Sandra Perkovic, Athletisme, 1 medaille",
        "NZL :  Valerie Adams, Athletisme, 1 medaille",
        "USA :  Jenn Stuczynski-Suhr, Athletisme, 1 medaille",
        "POL :  Tomasz Majewski, Athletisme, 1 medaille",
        "JAM :  Kemar Bailey-Cole, Athletisme, 1 medaille",
        "USA :  Will Claye, Athletisme, 1 medaille",
        "JAM :  Veronica Campbell-Brown, Athletisme, 1 medaille",
    };

    // on affiche le titre du programme 
    printf("\n SOURCE : https://olympics.com/fr/olympic-games/london-2012/athletes \n");

    printf("\n------ CLASSIFICATION DE COUREURS DU JEU OLYMPIQUE 2012 -------- \n");

    // on affiche les resultats
    int index = 0;
    for (index; index < RUNNER_COUNT; index++) {
        printf("\n%d. %s\n", (index + 1), runners[index]);
    }
    return 0;

}