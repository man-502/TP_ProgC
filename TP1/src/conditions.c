#include <stdio.h>

int main(void) {

    int somme = 0;

    for (int i = 1; i <= 1000; i++) {

        /* Si divisible par 11 : on saute directement au suivant */
        if (i % 11 == 0) {
            continue;
        }

        /* Ajouter si divisible par 5 ou par 7 */
        if (i % 5 == 0 || i % 7 == 0) {
            somme += i;
        }

        /* Si la somme dépasse 5000 : arrêt immédiat */
        if (somme > 5000) {
            break;
        }
    }

    printf("Somme finale = %d\n", somme);

    return 0;
}
