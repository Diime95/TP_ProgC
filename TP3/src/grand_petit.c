#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int tableau[100];
    int plusGrand;
    int plusPetit;

    srand(time(NULL));

    for (int i = 0; i < 100; i++) {
        tableau[i] = (rand() % 1000) + 1;
    }

    plusGrand = tableau[0];
    plusPetit = tableau[0];

    for (int i = 1; i < 100; i++) {

        if (tableau[i] > plusGrand) {
            plusGrand = tableau[i];
        }

        if (tableau[i] < plusPetit) {
            plusPetit = tableau[i];
        }
    }

    printf("Le numero le plus grand est : %d\n", plusGrand);
    printf("Le numero le plus petit est : %d\n", plusPetit);

    return 0;
}