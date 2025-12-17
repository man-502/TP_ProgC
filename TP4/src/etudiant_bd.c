#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// --- Equivalent de etudiant2.c (Structure de l'étudiant) ---
#define MAX_NOM 50
#define MAX_ADRESSE 100
#define NOMBRE_NOTES 2
#define MAX_ETUDIANTS 5

// Structure pour stocker les informations d'un étudiant
typedef struct {
    char nom[MAX_NOM];
    char prenom[MAX_NOM];
    char adresse[MAX_ADRESSE];
    int notes[NOMBRE_NOTES];
} Etudiant;

// --- Equivalent de fichier.c (Fonctions de gestion de fichiers) ---
const char *NOM_FICHIER = "etudiant.txt";

/**
 * @brief Écrit les détails d'un étudiant dans le fichier etudiant.txt.
 * * @param e Le pointeur vers la structure Etudiant à écrire.
 */
void ecrire_dans_fichier(const Etudiant *e) {
    // Ouvre le fichier en mode ajout ('a') pour ajouter des données à la fin
    FILE *fichier = fopen(NOM_FICHIER, "a");
    
    // Vérifie si l'ouverture du fichier a réussi
    if (fichier == NULL) {
        perror("Erreur lors de l'ouverture du fichier pour écriture");
        return; // Quitte la fonction si le fichier ne peut pas être ouvert
    }

    // Écrit les informations de l'étudiant dans le fichier, sur une seule ligne
    // Format : Nom;Prénom;Adresse;Note1;Note2
    fprintf(fichier, "%s;%s;%s;%d;%d\n", 
            e->nom, 
            e->prenom, 
            e->adresse, 
            e->notes[0], 
            e->notes[1]);

    // Ferme le fichier
    fclose(fichier);
}

// NOTE : La fonction 'lire_depuis_fichier' n'est pas demandée dans l'exercice, 
// mais elle serait ici si on suivait un fichier.c complet.

// --- Fonction principale : main ---
int main() {
    // 1. Création du tableau de structures (taille 5)
    Etudiant base_de_donnees[MAX_ETUDIANTS];
    int i;
    
    // Pour garantir un fichier propre au début de l'exécution
    // et éviter d'ajouter les nouveaux étudiants à la suite d'anciennes données.
    // Cette partie est facultative mais recommandée pour le test.
    FILE *fichier_init = fopen(NOM_FICHIER, "w"); 
    if (fichier_init != NULL) {
        fclose(fichier_init); // Crée/vide le fichier
    }


    // 2. Boucle pour la saisie des données de 5 étudiants
    for (i = 0; i < MAX_ETUDIANTS; i++) {
        printf("\nEntrez les détails de l'étudiant.e %d :\n", i + 1);

        // --- Saisie du Nom ---
        printf("Nom : ");
        // Utilisation de scanf avec format sécurisé pour les chaînes courtes
        if (scanf("%49s", base_de_donnees[i].nom) != 1) { 
            fprintf(stderr, "Erreur de saisie pour le Nom.\n"); 
            return 1;
        }

        // --- Saisie du Prénom ---
        printf("Prénom : ");
        if (scanf("%49s", base_de_donnees[i].prenom) != 1) { 
            fprintf(stderr, "Erreur de saisie pour le Prénom.\n"); 
            return 1;
        }
        
        // --- Saisie de l'Adresse ---
        printf("Adresse : ");
        // Consomme le caractère de nouvelle ligne résiduel après le dernier scanf
        int c;
        while ((c = getchar()) != '\n' && c != EOF); 
        // Utilisation de fgets pour lire l'adresse qui peut contenir des espaces
        // et inclut le '\n' qui sera ensuite remplacé par '\0'
        if (fgets(base_de_donnees[i].adresse, MAX_ADRESSE, stdin) == NULL) {
             fprintf(stderr, "Erreur de saisie pour l'Adresse.\n"); 
             return 1;
        }
        // Supprime le '\n' final lu par fgets et le remplace par '\0'
        base_de_donnees[i].adresse[strcspn(base_de_donnees[i].adresse, "\n")] = 0;

        // --- Saisie des Notes ---
        for (int j = 0; j < NOMBRE_NOTES; j++) {
            printf("Note %d : ", j + 1);
            if (scanf("%d", &base_de_donnees[i].notes[j]) != 1) {
                fprintf(stderr, "Erreur de saisie pour la Note %d. Le programme va s'arrêter.\n", j + 1);
                return 1;
            }
        }
        
        // 3. Appel de la fonction pour écrire l'étudiant dans le fichier
        ecrire_dans_fichier(&base_de_donnees[i]);
    }
    
    printf("\nLes détails des %d étudiants ont été enregistrés dans le fichier %s.\n", MAX_ETUDIANTS, NOM_FICHIER);

    return 0;
}
