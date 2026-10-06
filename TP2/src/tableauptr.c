#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int tableauEntiers[10];
    float tableauFloat[10];

    int *ptrInt = tableauEntiers;
    float *ptrFloat = tableauFloat;

    srand(time(NULL));

    /* Remplissage des tableaux */
    for (int i = 0; i < 10; i++) {
        *(ptrInt + i) = rand() % 100;
        *(ptrFloat + i) = (rand() % 1000) / 100.0f;
    }

    /* Affichage avant modification */
    printf("Tableau d'entiers avant :\n");

    for (int i = 0; i < 10; i++) {
        printf("%d ", *(ptrInt + i));
    }

    printf("\n\n");

    printf("Tableau de float avant :\n");

    for (int i = 0; i < 10; i++) {
        printf("%.2f ", *(ptrFloat + i));
    }

    printf("\n\n");

    /* Multiplication par 3 des indices divisibles par 2 */
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            *(ptrInt + i) = *(ptrInt + i) * 3;
            *(ptrFloat + i) = *(ptrFloat + i) * 3;
        }
    }

    /* Affichage apres modification */
    printf("Tableau d'entiers apres :\n");

    for (int i = 0; i < 10; i++) {
        printf("%d ", *(ptrInt + i));
    }

    printf("\n\n");

    printf("Tableau de float apres :\n");

    for (int i = 0; i < 10; i++) {
        printf("%.2f ", *(ptrFloat + i));
    }

    printf("\n");

    return 0;
}