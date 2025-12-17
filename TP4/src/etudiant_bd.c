#include <stdio.h>
#include <string.h>
#include "etudiant.h"
#include "fichier.h"

#define NB_ETUDIANTS 5

int main() {
    Etudiant etudiants[NB_ETUDIANTS];
    char ligne[512];

    for (int i = 0; i < NB_ETUDIANTS; i++) {
        printf("Entrez les détails de l'étudiant.e %d :\n", i+1);

        printf("Nom : ");
        scanf(" %[^\n]", etudiants[i].nom);

        printf("Prénom : ");
        scanf(" %[^\n]", etudiants[i].prenom);

        printf("Adresse : ");
        scanf(" %[^\n]", etudiants[i].adresse);

        printf("Note 1 : ");
        scanf("%f", &etudiants[i].note1);

        printf("Note 2 : ");
        scanf("%f", &etudiants[i].note2);

        // Formater une ligne pour le fichier
        snprintf(ligne, sizeof(ligne), "%s;%s;%s;%.2f;%.2f",
                 etudiants[i].nom,
                 etudiants[i].prenom,
                 etudiants[i].adresse,
                 etudiants[i].note1,
                 etudiants[i].note2);

        // Écrire la ligne dans le fichier
        ecrire_dans_fichier("etudiant.txt", ligne);
        printf("\n");
    }

    printf("Les détails des étudiants ont été enregistrés dans le fichier etudiant.txt.\n");

    // Optionnel : afficher le contenu du fichier pour vérification
    printf("\nContenu actuel du fichier :\n");
    lire_fichier("etudiant.txt");

    return 0;
}


