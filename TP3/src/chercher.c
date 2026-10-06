#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int tableau[100];
    int nombre;
    int present = 0;

    srand(time(NULL));

    /* Remplissage du tableau */
    for (int i = 0; i < 100; i++) {
        tableau[i] = (rand() % 201) - 100;
    }

    /* Affichage du tableau */
    printf("Tableau :\n");

    for (int i = 0; i < 100; i++) {
        printf("%d ", tableau[i]);
    }

    printf("\n\n");

    /* Nombre a rechercher */
    printf("Entrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &nombre);

    /* Recherche */
    for (int i = 0; i < 100; i++) {
        if (tableau[i] == nombre) {
            present = 1;
            break;
        }
    }

    if (present == 1) {
        printf("Resultat : entier present\n");
    } else {
        printf("Resultat : entier absent\n");
    }

    return 0;
}