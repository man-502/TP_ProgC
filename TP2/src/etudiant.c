#include <stdio.h>

int main(void) {
    // Déclaration des données des étudiants
    char noms[5][20] = {"Dupont", "Martin", "Bernard", "Lefevre", "Moreau"};
    char prenoms[5][20] = {"Alice", "Bob", "Claire", "David", "Emma"};
    char adresses[5][50] = {
        "12 rue des Fleurs, Paris",
        "34 avenue du Parc, Lyon",
        "56 boulevard St Michel, Marseille",
        "78 rue Victor Hugo, Lille",
        "90 rue Lafayette, Toulouse"
    };
    float notes_prog[5] = {15.5, 12.0, 18.0, 14.5, 16.0};
    float notes_systeme[5] = {13.0, 14.5, 17.0, 12.0, 15.5};

    // Affichage des informations des étudiants
    for (int i = 0; i < 5; i++) {
        printf("Etudiant %d :\n", i + 1);
        printf("Nom : %s\n", noms[i]);
        printf("Prénom : %s\n", prenoms[i]);
        printf("Adresse : %s\n", adresses[i]);
        printf("Note en Programmation en C : %.2f\n", notes_prog[i]);
        printf("Note en Système d'exploitation : %.2f\n", notes_systeme[i]);
        printf("--------------------------\n");
    }

    return 0;
}
