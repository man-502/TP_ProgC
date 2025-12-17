#include <stdio.h>
#include "fichier.h"

void lire_fichier(const char *nom_de_fichier) {
    FILE *f = fopen(nom_de_fichier, "r");
    if (!f) {
        printf("Erreur : impossible d'ouvrir le fichier '%s'.\n", nom_de_fichier);
        return;
    }

    char ligne[512];
    while (fgets(ligne, sizeof(ligne), f)) {
        printf("%s", ligne);
    }
    fclose(f);
}

void ecrire_dans_fichier(const char *nom_de_fichier, const char *message) {
    FILE *f = fopen(nom_de_fichier, "a");  // ajouter à la fin
    if (!f) {
        printf("Erreur : impossible d'ouvrir le fichier '%s'.\n", nom_de_fichier);
        return;
    }

    fprintf(f, "%s\n", message);
    fclose(f);
}







