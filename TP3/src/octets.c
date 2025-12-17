#include <stdio.h>

int main() {

    short s = 0x0203;
    int i = 0x01020304;
    long int li = 0x0102030405060708;
    float f = 9.12345f;
    double d = 3.141592653589793;
    long double ld = 2.718281828459045L;

    unsigned char *p;
    int taille, j;

    /* Affichage des octets de short */
    taille = sizeof(s);
    p = (unsigned char*)&s;
    printf("Octets de short :\n");
    for (j = 0; j < taille; j++) {
        printf("%02x ", *(p + j));
    }
    printf("\n\n");

    /* Affichage des octets de int */
    taille = sizeof(i);
    p = (unsigned char*)&i;
    printf("Octets de int :\n");
    for (j = 0; j < taille; j++) {
        printf("%02x ", *(p + j));
    }
    printf("\n\n");

    /* Affichage des octets de long int */
    taille = sizeof(li);
    p = (unsigned char*)&li;
    printf("Octets de long int :\n");
    for (j = 0; j < taille; j++) {
        printf("%02x ", *(p + j));
    }
    printf("\n\n");

    /* Affichage des octets de float */
    taille = sizeof(f);
    p = (unsigned char*)&f;
    printf("Octets de float :\n");
    for (j = 0; j < taille; j++) {
        printf("%02x ", *(p + j));
    }
    printf("\n\n");

    /* Affichage des octets de double */
    taille = sizeof(d);
    p = (unsigned char*)&d;
    printf("Octets de double :\n");
    for (j = 0; j < taille; j++) {
        printf("%02x ", *(p + j));
    }
    printf("\n\n");

    /* Affichage des octets de long double */
    taille = sizeof(ld);
    p = (unsigned char*)&ld;
    printf("Octets de long double :\n");
    for (j = 0; j < taille; j++) {
        printf("%02x ", *(p + j));
    }
    printf("\n");

    return 0;
}
