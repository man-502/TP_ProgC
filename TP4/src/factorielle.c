#include <stdio.h>

// Fonction récursive pour calculer la factorielle
int factorielle(int num) {
    if (num == 0) {
        return 1; // 0! = 1
    } else {
        return num * factorielle(num - 1);
    }
}

int main() {
    // Test de la factorielle pour plusieurs valeurs
    int nombres[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int taille = sizeof(nombres) / sizeof(nombres[0]);

    for (int i = 0; i < taille; i++) {
        int n = nombres[i];
        int resultat = factorielle(n);
        printf("%d! = %d\n", n, resultat);
    }

    return 0;
}
