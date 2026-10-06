#include <stdio.h>

int main() {

    int tableau[100];
    int nombre;
    int gauche = 0;
    int droite = 99;
    int milieu;
    int present = 0;

    /* Remplissage du tableau trie */
    for (int i = 0; i < 100; i++) {
        tableau[i] = i * 2;
    }

    /* Affichage du tableau */
    printf("Tableau trie :\n");

    for (int i = 0; i < 100; i++) {
        printf("%d ", tableau[i]);
    }

    printf("\n\n");

    /* Nombre a rechercher */
    printf("Entrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &nombre);

    /* Recherche dichotomique */
    while (gauche <= droite) {

        milieu = (gauche + droite) / 2;

        if (tableau[milieu] == nombre) {
            present = 1;
            break;
        }

        if (nombre < tableau[milieu]) {
            droite = milieu - 1;
        } else {
            gauche = milieu + 1;
        }
    }

    if (present == 1) {
        printf("Resultat : entier present\n");
    } else {
        printf("Resultat : entier absent\n");
    }

    return 0;
}