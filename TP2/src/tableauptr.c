#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 11

int main() {

    int tabInt[TAILLE];
    float tabFloat[TAILLE];

    int *pInt = tabInt;
    float *pFloat = tabFloat;

    srand(time(NULL));

    /* Remplissage des tableaux avec des valeurs aléatoires */
    for (int i = 0; i < TAILLE; i++) {
        *(pInt + i) = rand() % 100 + 1;               // entre 1 et 100
        *(pFloat + i) = (float)(rand() % 1000) / 100; // entre 0.00 et 9.99
    }

    /* Affichage avant multiplication */
    printf("Tableau d'entiers (avant la multiplication par 3) :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%d ", *(pInt + i));
    }

    printf("\n\nTableau de nombres à virgule flottante (avant la multiplication par 3) :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%.2f ", *(pFloat + i));
    }

    /* Multiplication par 3 des éléments dont l'indice est divisible par 2 */
    for (int i = 0; i < TAILLE; i++) {
        if (i % 2 == 0) {
            *(pInt + i) *= 3;
            *(pFloat + i) *= 3;
        }
    }

    /* Affichage après multiplication */
    printf("\n\nTableau d'entiers (après la multiplication par 3) :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%d ", *(pInt + i));
    }

    printf("\n\nTableau de nombres à virgule flottante (après la multiplication par 3) :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%.2f ", *(pFloat + i));
    }

    printf("\n");

    return 0;
}
