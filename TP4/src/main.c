#include <stdio.h>
#include "operator.h"

void exercice41();

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
            printf("Exercice 4.2 pas encore implemente.\n");
            break;

        case 7:
            printf("Exercice 4.7 pas encore implemente.\n");
            break;

        default:
            printf("Choix invalide.\n");
    }

    return 0;
}

void exercice41() {

    int num1;
    int num2;
    int resultat;
    char op;

    printf("Entrez num1 : ");
    scanf("%d", &num1);

    printf("Entrez num2 : ");
    scanf("%d", &num2);

    printf("Entrez l'operateur (+, -, *, /, %%, &, |, ~) : ");
    scanf(" %c", &op);

    switch (op) {

        case '+':
            resultat = somme(num1, num2);
            break;

        case '-':
            resultat = difference(num1, num2);
            break;

        case '*':
            resultat = produit(num1, num2);
            break;

        case '/':
            if (num2 == 0) {
                printf("Erreur : division par zero.\n");
                return;
            }
            resultat = quotient(num1, num2);
            break;

        case '%':
            if (num2 == 0) {
                printf("Erreur : modulo par zero.\n");
                return;
            }
            resultat = modulo(num1, num2);
            break;

        case '&':
            resultat = et(num1, num2);
            break;

        case '|':
            resultat = ou(num1, num2);
            break;

        case '~':
            resultat = negation(num1, num2);
            break;

        default:
            printf("Operateur invalide.\n");
            return;
    }

    printf("Resultat : %d\n", resultat);
}