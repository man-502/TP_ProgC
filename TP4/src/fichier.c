#include <stdio.h>
#include <stdlib.h>
#include "fichier.h"

// Implémentation de lire_fichier
int lire_fichier(const char *nom_de_fichier) {
    FILE *fichier = NULL;
    char caractere_lu;

    // Tentative d'ouvrir le fichier en mode lecture ("r")
    fichier = fopen(nom_de_fichier, "r");

    if (fichier == NULL) {
        // Gestion de l'erreur si le fichier n'existe pas ou ne peut pas être ouvert
        perror("Erreur lors de l'ouverture du fichier pour la lecture");
        fprintf(stderr, "Impossible de lire le fichier : %s\n", nom_de_fichier);
        return -1;
    }

    printf("\nContenu du fichier %s :\n", nom_de_fichier);
    // Lecture caractère par caractère jusqu'à la fin du fichier (EOF)
    while ((caractere_lu = fgetc(fichier)) != EOF) {
        printf("%c", caractere_lu);
    }
    printf("\n");

    // Fermeture du fichier
    fclose(fichier);
    return 0;
}

// Implémentation de ecrire_dans_fichier
int ecrire_dans_fichier(const char *nom_de_fichier, const char *message) {
    FILE *fichier = NULL;

    // Tentative d'ouvrir le fichier en mode écriture ("w").
    // Attention : "w" écrase le contenu existant du fichier s'il existe.
    // Pour ajouter à la fin, utiliser "a" (append). J'utilise "w" ici pour correspondre
    // à une opération simple d'écriture de message unique.
    fichier = fopen(nom_de_fichier, "w");

    if (fichier == NULL) {
        // Gestion de l'erreur
        perror("Erreur lors de l'ouverture du fichier pour l'écriture");
        fprintf(stderr, "Impossible d'écrire dans le fichier : %s\n", nom_de_fichier);
        return -1;
    }

    // Écriture du message dans le fichier
    if (fprintf(fichier, "%s\n", message) < 0) {
        perror("Erreur lors de l'écriture dans le fichier");
        fclose(fichier);
        return -1;
    }

    // Fermeture du fichier
    fclose(fichier);
    printf("Le message a été écrit dans le fichier %s.\n", nom_de_fichier);
    return 0;
}





