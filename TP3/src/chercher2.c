#include <stdio.h>

int main() {

    // Tableau de 10 phrases
    char *phrases[10] = {
        "Bonjour, comment ça va ?",
        "Le temps est magnifique aujourd'hui.",
        "C'est une belle journée.",
        "La programmation en C est amusante.",
        "Les tableaux en C sont puissants.",
        "Les pointeurs en C peuvent être déroutants.",
        "Il fait beau dehors.",
        "La recherche dans un tableau est intéressante.",
        "Les structures de données sont importantes.",
        "Programmer en C, c'est génial."
    };

    char phraseRecherchee[200];
    int trouve = 0;

    // Saisie de la phrase à rechercher
    printf("Entrez la phrase à rechercher :\n");
    fgets(phraseRecherchee, sizeof(phraseRecherchee), stdin);

    // Supprimer le caractère de nouvelle ligne si présent
    int i = 0;
    while (phraseRecherchee[i] != '\0') {
        if (phraseRecherchee[i] == '\n') {
            phraseRecherchee[i] = '\0';
            break;
        }
        i++;
    }

    // Parcours du tableau pour comparer chaque phrase
    for (int j = 0; j < 10; j++) {
        int k = 0;
        int correspond = 1;
        while (1) {
            if (phrases[j][k] != phraseRecherchee[k]) {
                correspond = 0;
                break;
            }
            if (phrases[j][k] == '\0') {
                break;
            }
            k++;
        }
        if (correspond) {
            trouve = 1;
            break;
        }
    }

    // Affichage du résultat
    if (trouve) {
        printf("Phrase trouvée\n");
    } else {
        printf("Phrase non trouvée\n");
    }

    return 0;
}
