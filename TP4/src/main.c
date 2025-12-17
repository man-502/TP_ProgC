#include <stdio.h>
#include <stdlib.h>
#include "operator.h"

int main(int argc, char *argv[]) {
    int num1, num2, resultat;
    char op;

    // Vérification des arguments
    if (argc < 4) {
        printf("Usage : %s num1 num2 operateur\n", argv[0]);
        printf("Exemple : %s 10 5 +\n", argv[0]);
        return 1;
    }

    // Conversion des arguments
    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);
    op = argv[3][0]; // le premier caractère du troisième argument

    // Sélection de l'opération
    switch(op) {
        case '+':
            resultat = somme(num1, num2);
            break;
        case '-':
            resultat = difference(num1, num2);
            break;
        case '*':
            resultat = produit(num1, num2);
            break;
        case '/':
            resultat = quotient(num1, num2);
            break;
        case '%':
            resultat = modulo(num1, num2);
            break;
        case '&':
            resultat = et_bitwise(num1, num2);
            break;
        case '|':
            resultat = ou_bitwise(num1, num2);
            break;
        case '~':
            resultat = negation(num1);
            break;
        default:
            printf("Opérateur invalide !\n");
            return 1;
    }

    printf("Résultat : %d\n", resultat);

    return 0;
}
