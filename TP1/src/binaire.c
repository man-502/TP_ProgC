#include <stdio.h>

void afficher_binaire(int n) {
    if (n == 0) {
        printf("0");
        return;
    }

    int bits[32];  // tableau pour stocker les bits
    int i = 0;

    // Conversion : division par 2 et reste
    while (n > 0) {
        bits[i] = n % 2;
        n = n / 2;
        i++;
    }

    // Affichage inverse pour obtenir le bon ordre
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", bits[j]); // ✅ Utilisation correcte de "%d" et non de ''
    }
}

int main(void) {
    int nombres[] = {0, 4096, 65536, 65535, 1024};
    int taille = sizeof(nombres) / sizeof(nombres[0]);

    for (int i = 0; i < taille; i++) {
        printf("%d en binaire : ", nombres[i]);
        afficher_binaire(nombres[i]);
        printf("\n");
    }

    return 0;
}
