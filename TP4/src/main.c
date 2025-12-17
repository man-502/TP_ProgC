#include <stdio.h>
#include "operator.h"

int main() {
    int num1, num2, resultat;
    char op;

    /* Saisie des valeurs */
    printf("Entrez num1 : ");
    scanf("%d", &num1);
    printf("Entrez num2 : ");
    scanf("%d", &num2);
    printf("Entrez l'opérateur (+, -, *, /, %%, &, |, ~) : ");
    scanf(" %c", &op);  // espace pour consommer un éventuel '\n'

    /* Sélection de l'opération */
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
