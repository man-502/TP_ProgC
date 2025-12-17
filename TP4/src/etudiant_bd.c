#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nom[100];
    char prenom[100];
    char adresse[100];
    float note1;
    float note2;
} Etudiant;

// Écrire une ligne dans un fichier
void ecrire_dans_fichier(const char *nom_de_fichier, const char *message) {
    FILE *f = fopen(nom_de_fichier, "a"); // ajouter à la fin
    if (!f) {
        printf("Erreur : impossible d'ouvrir le fichier '%s'.\n", nom_de_fichier);
        return;
    }
    fprintf(f, "%s\n", message);
    fclose(f);
}

// Lire et afficher un fichier
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

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage :\n");
        printf("  %s lire\n", argv[0]);
        printf("  %s ecrire Nom Prenom Adresse Note1 Note2\n", argv[0]);
        return 1;
    }

    if (strcmp(argv[1], "lire") == 0) {
        lire_fichier("etudiant.txt");
    } 
    else if (strcmp(argv[1], "ecrire") == 0) {
        if (argc != 7) {
            printf("Erreur : arguments manquants pour ajouter un étudiant\n");
            return 1;
        }

        Etudiant e;
        char ligne[512];

        // Copier les arguments dans la structure
        snprintf(e.nom, sizeof(e.nom), "%s", argv[2]);
        snprintf(e.prenom, sizeof(e.prenom), "%s", argv[3]);
        snprintf(e.adresse, sizeof(e.adresse), "%s", argv[4]);
        e.note1 = atof(argv[5]);
        e.note2 = atof(argv[6]);

        // Formater la ligne à écrire
        snprintf(ligne, sizeof(ligne), "%s;%s;%s;%.2f;%.2f",
                 e.nom, e.prenom, e.adresse, e.note1, e.note2);

        // Écrire dans le fichier
        ecrire_dans_fichier("etudiant.txt", ligne);
        printf("Étudiant ajouté : %s %s\n", e.nom, e.prenom);
    } 
    else {
        printf("Commande invalide. Utilisez 'lire' ou 'ecrire'.\n");
        return 1;
    }

    return 0;
}








