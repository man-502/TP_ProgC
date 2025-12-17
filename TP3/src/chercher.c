#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

int main() {

    int tableau[TAILLE];
    int valeur;
    int trouve = 0;

    /* Initialisation du générateur de nombres aléatoires */
    srand(time(NULL));

    /* Remplissage du tableau avec des valeurs aléatoires */
    for (int i = 0; i < TAILLE; i++) {
        tableau[i] = rand() % 201 - 100;   // valeurs entre -100 et 100
    }

    /* Affichage du tableau */
    printf("Tableau :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    /* Saisie de l'entier à chercher */
    printf("\nEntrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &valeur);

    /* Recherche de l'entier dans le tableau */
    for (int i = 0; i < TAILLE; i++) {
        if (tableau[i] == valeur) {
            trouve = 1;
            break;
        }
    }

    /* Affichage du résultat */
    if (trouve) {
        printf("\nRésultat : entier présent\n");
    } else {
        printf("\nRésultat : entier absent\n");
    }

    return 0;
}
