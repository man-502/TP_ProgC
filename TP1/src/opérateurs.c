#include <stdio.h>

int main(void) {

    int a = 16;
    int b = 3;

    /* Opérations arithmétiques */
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b);

    /* Opérateurs logiques / comparaisons */
    printf("a == b : %d\n", a == b);
    printf("a >  b : %d\n", a > b);

    return 0;
}
