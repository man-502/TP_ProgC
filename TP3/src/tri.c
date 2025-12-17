#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

int main() {

    int tableau[TAILLE];
    int temp;

    /* Initialisation du générateur de nombres aléatoires */
    srand(time(NULL));

    /* Remplissage du tableau avec des valeurs aléatoires */
    for (int i = 0; i < TAILLE; i++) {
        tableau[i] = rand() % 201 - 100;  // valeurs entre -100 et 100
    }

    /* Affichage du tableau non trié */
    printf("Tableau non trié :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%d ", tableau[i]);
    }

    /* Tri à bulles (ordre croissant) */
    for (int i = 0; i < TAILLE - 1; i++) {
        for (int j = 0; j < TAILLE - i - 1; j++) {
            if (tableau[j] > tableau[j + 1]) {
                temp = tableau[j];
                tableau[j] = tableau[j + 1];
                tableau[j + 1] = temp;
            }
        }
    }

    /* Affichage du tableau trié */
    printf("\n\nTableau trié par ordre croissant :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%d ", tableau[i]);
    }

    printf("\n");

    return 0;
}
