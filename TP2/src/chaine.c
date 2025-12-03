#include <stdio.h>

int main(void) {
    char str1[] = "Hello";
    char str2[] = " World!";
    char copie[100];      // pour copier str1
    char concat[200];     // pour concaténer str1 et str2
    int i;

    // 1. Calculer le nombre de caractères dans str1
    int longueur1 = 0;
    while (str1[longueur1] != '\0') {
        longueur1++;
    }
    printf("Longueur de '%s' = %d\n", str1, longueur1);

    // 2. Copier str1 dans copie
    for (i = 0; str1[i] != '\0'; i++) {
        copie[i] = str1[i];
    }
    copie[i] = '\0'; // terminer la chaîne
    printf("Copie de str1 : '%s'\n", copie);

    // 3. Concaténer str1 et str2 dans concat
    // D'abord copier str1 dans concat
    for (i = 0; str1[i] != '\0'; i++) {
        concat[i] = str1[i];
    }

    // Ensuite ajouter str2
    int j = 0;
    while (str2[j] != '\0') {
        concat[i] = str2[j];
        i++;
        j++;
    }
    concat[i] = '\0'; // terminer la chaîne

    printf("Concaténation de str1 et str2 : '%s'\n", concat);

    return 0;
}
