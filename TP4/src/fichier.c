#include <stdio.h>
#include "fichier.h"

/* Lire le contenu d'un fichier et l'afficher */
void lire_fichier(const char *nom_de_fichier) {
    FILE *f = fopen(nom_de_fichier, "r");
    if (f == NULL) {
        printf("Erreur : impossible d'ouvrir le fichier %s\n", nom_de_fichier);
        return;
    }

    printf("Contenu du fichier %s :\n", nom_de_fichier);
    char ligne[256];
    while (fgets(ligne, sizeof(ligne), f) != NULL) {
        printf("%s", ligne);
    }
    printf("\n");

    fclose(f);
}

/* Écrire un message dans un fichier */
void ecrire_dans_fichier(const char *nom_de_fichier, const char *message) {
    FILE *f = fopen(nom_de_fichier, "w");
    if (f == NULL) {
        printf("Erreur : impossible d'ouvrir le fichier %s pour écriture\n", nom_de_fichier);
        return;
    }

    fprintf(f, "%s\n", message);
    fclose(f);

    printf("Le message a été écrit dans le fichier %s.\n", nom_de_fichier);
}
