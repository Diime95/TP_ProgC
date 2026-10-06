#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int tableau[100];
    int temp;

    srand(time(NULL));

    /* Remplissage du tableau */
    for (int i = 0; i < 100; i++) {
        tableau[i] = (rand() % 201) - 100;
    }

    /* Affichage avant le tri */
    printf("Tableau non trie :\n");

    for (int i = 0; i < 100; i++) {
        printf("%d ", tableau[i]);
    }

    printf("\n\n");

    /* Tri a bulles */
    for (int i = 0; i < 99; i++) {
        for (int j = 0; j < 99 - i; j++) {

            if (tableau[j] > tableau[j + 1]) {
                temp = tableau[j];
                tableau[j] = tableau[j + 1];
                tableau[j + 1] = temp;
            }
        }
    }

    /* Affichage apres le tri */
    printf("Tableau trie par ordre croissant :\n");

    for (int i = 0; i < 100; i++) {
        printf("%d ", tableau[i]);
    }

    printf("\n");

    return 0;
}