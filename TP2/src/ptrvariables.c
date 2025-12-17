#include <stdio.h>

int main() {

    /* Déclaration des variables */
    char c = 0x12;
    short s = 0x1234;
    int i = 0x12345678;
    long int li = 0x12345678;
    long long int lli = 0x1122334455667788;
    float f = 2.0f;
    double d = 3.0;
    long double ld = 4.0L;

    /* Déclaration des pointeurs */
    char *pc = &c;
    short *ps = &s;
    int *pi = &i;
    long int *pli = &li;
    long long int *plli = &lli;
    float *pf = &f;
    double *pd = &d;
    long double *pld = &ld;

    /* Affichage avant manipulation */
    printf("Avant la manipulation :\n");
    printf("Adresse c  : %p, Valeur : %02x\n", (void*)pc, (unsigned char)c);
    printf("Adresse s  : %p, Valeur : %04x\n", (void*)ps, (unsigned short)s);
    printf("Adresse i  : %p, Valeur : %08x\n", (void*)pi, (unsigned int)i);
    printf("Adresse li : %p, Valeur : %lx\n", (void*)pli, li);
    printf("Adresse lli: %p, Valeur : %llx\n", (void*)plli, lli);
    printf("Adresse f  : %p, Valeur : %08x\n", (void*)pf, *(unsigned int*)pf);
    printf("Adresse d  : %p, Valeur : %016llx\n", (void*)pd, *(unsigned long long*)pd);
    printf("Adresse ld : %p, Valeur : %llx\n\n", (void*)pld, *(unsigned long long*)pld);

    /* Manipulation via pointeurs */
    *pc += 1;
    *ps += 1;
    *pi -= 1;
    *pli += 2;
    *plli -= 2;
    *pf = 1.0f;
    *pd = 0.5;
    *pld = 2.0L;

    /* Affichage après manipulation */
    printf("Après la manipulation :\n");
    printf("Adresse c  : %p, Valeur : %02x\n", (void*)pc, (unsigned char)c);
    printf("Adresse s  : %p, Valeur : %04x\n", (void*)ps, (unsigned short)s);
    printf("Adresse i  : %p, Valeur : %08x\n", (void*)pi, (unsigned int)i);
    printf("Adresse li : %p, Valeur : %lx\n", (void*)pli, li);
    printf("Adresse lli: %p, Valeur : %llx\n", (void*)plli, lli);
    printf("Adresse f  : %p, Valeur : %08x\n", (void*)pf, *(unsigned int*)pf);
    printf("Adresse d  : %p, Valeur : %016llx\n", (void*)pd, *(unsigned long long*)pd);
    printf("Adresse ld : %p, Valeur : %llx\n", (void*)pld, *(unsigned long long*)pld);

    return 0;
}
