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

        if (scanf("%d", &choix) != 1) {
            printf("Entrée invalide !\n");
            int c; while ((c = getchar()) != '\n' && c != EOF);
            continue;
        }

        // Vider le buffer correctement
        int c; while ((c = getchar()) != '\n' && c != EOF);

        if (choix == 1) {
            printf("Entrez le nom du fichier à lire : ");
            if (!fgets(nom_fichier, sizeof(nom_fichier), stdin)) continue;
            nom_fichier[strcspn(nom_fichier, "\n")] = '\0';
            lire_fichier(nom_fichier);

        } else if (choix == 2) {
            printf("Entrez le nom du fichier dans lequel vous souhaitez écrire : ");
            if (!fgets(nom_fichier, sizeof(nom_fichier), stdin)) continue;
            nom_fichier[strcspn(nom_fichier, "\n")] = '\0';

            printf("Entrez le message à écrire : ");
            if (!fgets(message, sizeof(message), stdin)) continue;
            message[strcspn(message, "\n")] = '\0';

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


