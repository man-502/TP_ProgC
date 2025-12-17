#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Fonctions de calcul
int somme(int a, int b) { return a + b; }
int difference(int a, int b) { return a - b; }
int produit(int a, int b) { return a * b; }
int quotient(int a, int b) { 
    if (b == 0) {
        printf("Erreur : division par zéro\n");
        return 0;
    }
    return a / b; 
}
int modulo(int a, int b) { 
    if (b == 0) {
        printf("Erreur : modulo par zéro\n");
        return 0;
    }
    return a % b; 
}
int et(int a, int b) { return a & b; }
int ou(int a, int b) { return a | b; }
int negation(int a) { return ~a; }

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

    // Pour les opérations binaires, on a besoin d'un 2e argument
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
            resultat = quotient(num1, num2);
            break;
        case '%':
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
