#include <stdio.h>

int main(void) {
    char c = 'A';
    signed char sc = -10;
    unsigned char uc = 200;

    short s = 123;
    unsigned short us = 456;

    int i = 1000;
    unsigned int ui = 3000;

    long li = 100000L;
    unsigned long uli = 200000UL;

    long long lli = 1000000000LL;
    unsigned long long ulli = 2000000000ULL;

    float f = 3.14f;
    double d = 2.718281828;
    long double ld = 1.23456789012345L;

    printf("char = %c\n", c);
    printf("signed char = %d\n", sc);
    printf("unsigned char = %u\n", uc);

    printf("short = %d\n", s);
    printf("unsigned short = %u\n", us);

    printf("int = %d\n", i);
    printf("unsigned int = %u\n", ui);

    printf("long = %ld\n", li);
    printf("unsigned long = %lu\n", uli);

    printf("long long = %lld\n", lli);
    printf("unsigned long long = %llu\n", ulli);

    printf("float = %f\n", f);
    printf("double = %lf\n", d);
    printf("long double = %Lf\n", ld);

    return 0;
}
