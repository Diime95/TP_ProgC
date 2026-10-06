#include <stdio.h>

void exercice41();
void exercice42();
void exercice47();

int main() {

    int choix;

    printf("Choisissez un exercice :\n");
    printf("1 - Exercice 4.1\n");
    printf("2 - Exercice 4.2\n");
    printf("7 - Exercice 4.7\n");

    printf("Votre choix : ");
    scanf("%d", &choix);

    switch (choix) {

        case 1:
            exercice41();
            break;

        case 2:
            exercice42();
            break;

        case 7:
            exercice47();
            break;

        default:
            printf("Choix invalide\n");
            break;
    }

    return 0;
}
