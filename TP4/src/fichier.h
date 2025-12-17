#ifndef FICHIER_H
#define FICHIER_H

// Taille maximale pour le nom de fichier et le message.
#define TAILLE_MAX 1024

/**
 * @brief Lit et affiche le contenu d'un fichier.
 *
 * @param nom_de_fichier Le nom du fichier à lire.
 * @return 0 en cas de succès, -1 en cas d'erreur (fichier non trouvé/illisible).
 */
int lire_fichier(const char *nom_de_fichier);

/**
 * @brief Écrit un message dans un fichier.
 *
 * @param nom_de_fichier Le nom du fichier où écrire.
 * @param message Le message à écrire dans le fichier.
 * @return 0 en cas de succès, -1 en cas d'erreur (impossible d'ouvrir/écrire dans le fichier).
 */
int ecrire_dans_fichier(const char *nom_de_fichier, const char *message);

#endif /* FICHIER_H */

