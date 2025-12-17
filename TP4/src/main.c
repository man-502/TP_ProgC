#include <stdio.h>
#include <string.h>
#include "fichier.h"

int main() {
    int choix;
    char nom_fichier[256];
    char message[1024];

    while (1) {
        printf("Que souhaitez-vous faire ?\n");
        printf("1. Lire un fichier\n");
        printf("2. Écrire dans un fichier\n");
        printf("3. Quitter\n");
        printf("Votre choix : ");

        // Vérifier la saisie de l'utilisateur
        if (scanf("%d", &choix) != 1) {
            printf("Entrée invalide ! Veuillez saisir un nombre.\n");
            int c; while ((c = getchar()) != '\n' && c != EOF); // vider le buffer
            continue;
        }

        // Vider le buffer pour éviter les problèmes avec fgets
        int c; while ((c = getchar()) != '\n' && c != EOF);

        if (choix == 1) {
            printf("Entrez le nom du fichier à lire : ");
            if (!fgets(nom_fichier, sizeof(nom_fichier), stdin)) {
                printf("Erreur de lecture du nom de fichier.\n");
                continue;
            }
            nom_fichier[strcspn(nom_fichier, "\n")] = '\0'; // supprimer '\n'

            lire_fichier(nom_fichier);

        } else if (choix == 2) {
            printf("Entrez le nom du fichier dans lequel vous souhaitez écrire : ");
            if (!fgets(nom_fichier, sizeof(nom_fichier), stdin)) {
                printf("Erreur de lecture du nom de fichier.\n");
                continue;
            }
            nom_fichier[strcspn(nom_fichier, "\n")] = '\0'; // supprimer '\n'

            printf("Entrez le message à écrire : ");
            if (!fgets(message, sizeof(message), stdin)) {
                printf("Erreur de lecture du message.\n");
                continue;
            }
            message[strcspn(message, "\n")] = '\0'; // supprimer '\n'

            ecrire_dans_fichier(nom_fichier, message);

        } else if (choix == 3) {
            printf("Au revoir !\n");
            break;

        } else {
            printf("Choix invalide, veuillez réessayer.\n");
        }

        printf("\n");
    }

    return 0;
}



