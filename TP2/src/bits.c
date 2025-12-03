#include <stdio.h>

int main(void) {
    unsigned int d = 0x00101008;  // exemple de valeur, modifie si nécessaire
    int nb_bits = sizeof(d) * 8; // nombre de bits de d
    int bit4, bit20;

    // Calcul des positions depuis la droite (LSB)
    // Le 1er bit de gauche = bit de poids fort = nb_bits - 1
    int pos_bit4 = nb_bits - 4;   // 4ème bit de gauche
    int pos_bit20 = nb_bits - 20; // 20ème bit de gauche

    // Extraction des bits
    bit4 = (d >> pos_bit4) & 1;
    bit20 = (d >> pos_bit20) & 1;

    // Vérification si les deux bits sont 1
    if (bit4 == 1 && bit20 == 1)
        printf("1\n");
    else
        printf("0\n");

    return 0;
}
