#include <stdio.h>
#include <stdlib.h>
#include "operator.h"

int main(int argc, char *argv[]) {

    int num1;
    int num2;
    int resultat;
    char op;

    if (argc != 4) {
        printf("Utilisation : ./calcule operateur num1 num2\n");
        return 1;
    }

    op = argv[1][0];
    num1 = atoi(argv[2]);
    num2 = atoi(argv[3]);

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
                return 1;
            }
            resultat = quotient(num1, num2);
            break;

        case '%':
            if (num2 == 0) {
                printf("Erreur : modulo par zero.\n");
                return 1;
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
            return 1;
    }

    printf("Resultat : %d\n", resultat);

    return 0;
}