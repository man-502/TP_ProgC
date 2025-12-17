#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

int main() {

    int tableau[TAILLE];
    int valeur;
    int debut = 0, fin = TAILLE - 1;
    int milieu;
    int trouve = 0;

    /* Initialisation du générateur de nombres aléatoires */
    srand(time(NULL));

    /* Remplissage du tableau avec des valeurs aléatoires */
    tableau[0] = rand() % 10;  // première valeur
    for (int i = 1; i < TAILLE; i++) {
        tableau[i] = tableau[i - 1] + rand() % 10 + 1; // valeurs triées
    }

    /* Affichage du tableau trié */
    printf("Tableau trié :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    /* Saisie de l'entier à rechercher */
    printf("\nEntrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &valeur);

    /* Recherche dichotomique */
    while (debut <= fin) {
        milieu = (debut + fin) / 2;
        if (tableau[milieu] == valeur) {
            trouve = 1;
            break;
        } else if (tableau[milieu] < valeur) {
            debut = milieu + 1;
        } else {
            fin = milieu - 1;
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
