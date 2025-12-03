#include <stdio.h>

int main(void) {

    int compteur = 5; /* doit être < 10 */

    for (int i = 1; i <= compteur; i++) {
        for (int j = 1; j <= i; j++) {

            if (i == compteur) {
                printf("* ");
            } else {
                if (j == 1 || j == i) {
                    printf("* ");
                } else {
                    printf("# ");
                }
            }
        }
        printf("\n");
    }

    return 0;
}
