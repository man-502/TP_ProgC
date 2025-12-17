#ifndef ETUDIANT_H
#define ETUDIANT_H

#define MAX 100

typedef struct {
    char nom[MAX];
    char prenom[MAX];
    char adresse[MAX];
    float note1;
    float note2;
} Etudiant;

#endif
