#include <stdio.h>

int main() {

    printf("Taille de char : %lu octets\n", (unsigned long) sizeof(char));
    printf("Taille de signed char : %lu octets\n", (unsigned long) sizeof(signed char));
    printf("Taille de unsigned char : %lu octets\n\n", (unsigned long) sizeof(unsigned char));

    printf("Taille de short : %lu octets\n", (unsigned long) sizeof(short));
    printf("Taille de signed short : %lu octets\n", (unsigned long) sizeof(signed short));
    printf("Taille de unsigned short : %lu octets\n\n", (unsigned long) sizeof(unsigned short));

    printf("Taille de int : %lu octets\n", (unsigned long) sizeof(int));
    printf("Taille de signed int : %lu octets\n", (unsigned long) sizeof(signed int));
    printf("Taille de unsigned int : %lu octets\n\n", (unsigned long) sizeof(unsigned int));

    printf("Taille de long int : %lu octets\n", (unsigned long) sizeof(long int));
    printf("Taille de signed long int : %lu octets\n", (unsigned long) sizeof(signed long int));
    printf("Taille de unsigned long int : %lu octets\n\n", (unsigned long) sizeof(unsigned long int));

    printf("Taille de long long int : %lu octets\n", (unsigned long) sizeof(long long int));
    printf("Taille de signed long long int : %lu octets\n", (unsigned long) sizeof(signed long long int));
    printf("Taille de unsigned long long int : %lu octets\n\n", (unsigned long) sizeof(unsigned long long int));

    printf("Taille de float : %lu octets\n\n", (unsigned long) sizeof(float));
    printf("Taille de double : %lu octets\n\n", (unsigned long) sizeof(double));
    printf("Taille de long double : %lu octets\n\n", (unsigned long) sizeof(long double));

    return 0;
}
