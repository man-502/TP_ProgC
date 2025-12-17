#include <stdio.h>
#include <stdlib.h>
#include "operator.h" // Assure-toi que operator.c est compilé avec

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Usage : %s <opérateur> <num1> [num2]\n", argv[0]);
        printf("Opérateurs : + - * / %% & | ~\n");
        return 1;
    }

    char op = argv[1][0];
    int num1 = atoi(argv[2]);
    int num2 = 0;
    int resultat = 0;

    // Les opérations binaires nécessitent num2
    if (op != '~') {
        if (argc < 4) {
            printf("Erreur : il faut deux nombres pour cette opération\n");
            return 1;
        }
        num2 = atoi(argv[3]);
    }

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
            if (num2 == 0) {
                printf("Erreur : division par zéro\n");
                return 1;
            }
            resultat = quotient(num1, num2);
            break;
        case '%':
            if (num2 == 0) {
                printf("Erreur : modulo par zéro\n");
                return 1;
            }
            resultat = modulo(num1, num2);
            break;
        case '&':
            resultat = et(num1, num2);
            break;
        case '|':
            resultat = ou(num1, num2);
            break;
        case '~':
            resultat = negation(num1);
            break;
        default:
            printf("Opérateur invalide : %c\n", op);
            return 1;
    }

    printf("Résultat : %d\n", resultat);
    return 0;
}


