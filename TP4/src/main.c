#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fichier.h" // Inclusion du fichier d'en-tête pour les prototypes

// Fonction utilitaire pour vider le buffer d'entrée
void vider_buffer() {
    int c = 0;
    while (c != '\n' && c != EOF) {
        c = getchar();
    }
}

int main(void) {
    int choix = 0;
    char nom_de_fichier[TAILLE_MAX];
    char message[TAILLE_MAX];

    do {
        printf("\nQue souhaitez-vous faire ?\n");
        printf("1. Lire un fichier\n");
        printf("2. Écrire dans un fichier\n");
        printf("3. Quitter\n");
        printf("Votre choix : ");

        // Lecture du choix de l'utilisateur
        if (scanf("%d", &choix) != 1) {
            vider_buffer(); // Vider le buffer en cas d'entrée invalide (non numérique)
            printf("Choix invalide. Veuillez entrer 1, 2 ou 3.\n");
            continue; // Recommencer la boucle
        }
        vider_buffer(); // Vider le buffer après la lecture de l'entier

        switch (choix) {
            case 1:
                printf("\nEntrez le nom du fichier à lire : ");
                // Lecture du nom de fichier. Utilisation de fgets pour lire la ligne complète.
                if (fgets(nom_de_fichier, TAILLE_MAX, stdin) == NULL) {
                    fprintf(stderr, "Erreur de lecture du nom de fichier.\n");
                    break;
                }
                // Supprimer le caractère de nouvelle ligne ('\n') ajouté par fgets
                nom_de_fichier[strcspn(nom_de_fichier, "\n")] = 0;

                // Appel de la fonction de lecture
                lire_fichier(nom_de_fichier);
                break;

            case 2:
                printf("\nEntrez le nom du fichier dans lequel vous souhaitez écrire : ");
                if (fgets(nom_de_fichier, TAILLE_MAX, stdin) == NULL) {
                    fprintf(stderr, "Erreur de lecture du nom de fichier.\n");
                    break;
                }
                nom_de_fichier[strcspn(nom_de_fichier, "\n")] = 0;

                printf("Entrez le message à écrire : ");
                // Lecture du message à écrire
                if (fgets(message, TAILLE_MAX, stdin) == NULL) {
                    fprintf(stderr, "Erreur de lecture du message.\n");
                    break;
                }
                message[strcspn(message, "\n")] = 0;

                // Appel de la fonction d'écriture
                ecrire_dans_fichier(nom_de_fichier, message);
                break;

            case 3:
                printf("Au revoir !\n");
                break;

            default:
                printf("Choix invalide. Veuillez entrer 1, 2 ou 3.\n");
                break;
        }
    } while (choix != 3);

    return 0;
}




