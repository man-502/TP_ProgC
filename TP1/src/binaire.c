Affichage d'un nombre en format binaire

Écrivez un programme nommé binaire.c dans la fonction main() qui utilise une boucle for pour afficher une variable de type int en format binaire. Il est important de noter que la fonction printf en C n'a pas de code de conversion dédié pour afficher un nombre en notation binaire, contrairement à 'x' pour l'hexadécimal ou 'o' pour l'octal.

Pour résoudre ce problème, vous devrez développer votre propre code pour convertir un nombre entier en sa représentation binaire. Utilisez la division par 2 et le reste de la division (%) pour obtenir chaque chiffre binaire. Affichez ensuite ces chiffres de manière appropriée pour obtenir la représentation binaire complète du nombre.

Testez votre code en utilisant les cinq nombres suivants : 0, 4096, 65536, 65535, 1024, et affichez leur représentation binaire correspondante.

Suggestions pour le programme :

Pensez à utiliser les opérateurs pour la manipulation de bits (&, | ou ~)
