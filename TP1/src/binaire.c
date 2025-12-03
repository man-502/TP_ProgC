#include <stdio.h>

void afficher_binaire(int n) {
    int i;
    int nb_bits = sizeof(int) * 8; // nombre de bits dans un int
    int debut = 0; // pour ignorer les zéros en tête

    for (i = nb_bits - 1; i >= 0; i--) {
        int bit = (n >> i) & 1; // extraire le ième bit
        if (bit) debut = 1; // commencer à afficher dès le premier 1
        if (debut) {
            printf("%d", bit);
        }
    }

    if (!debut) // si n == 0
        printf("0");

    printf("\n");
}

int main(void) {
    int nombres[] = {0, 4096, 65536, 65535, 1024};
    int taille = sizeof(nombres)/sizeof(nombres[0]);
    for (int i = 0; i < taille; i++) {
        printf("%d en binaire : ", nombres[i]);
        afficher_binaire(nombres[i]);
    }
    return 0;
}
