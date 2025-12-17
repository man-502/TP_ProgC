#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compter_occurrences(const char *ligne, const char *phrase) {
    int count = 0;
    const char *ptr = ligne;

    while ((ptr = strstr(ptr, phrase)) != NULL) {
        count++;
        ptr += strlen(phrase); // avancer après l'occurrence trouvée
    }

    return count;
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Usage : %s <nom_du_fichier>\n", argv[0]);
        return 1;
    }

    char *nom_fichier = argv[1];
    FILE *f = fopen(nom_fichier, "r");
    if (!f) {
        printf("Erreur : impossible d'ouvrir le fichi
