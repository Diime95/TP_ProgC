#include <stdio.h>

int factorielle(int num) {
    if (num == 0) {
        printf("fact(0): 1\n");
        return 1;
    } else {
        int valeur = num * factorielle(num - 1);
        printf("fact(%d): %d\n", num, valeur);
        return valeur;
    }
}

int main() {

    printf("\nTest avec 3 :\n");
    printf("Resultat = %d\n", factorielle(3));

    printf("\nTest avec 5 :\n");
    printf("Resultat = %d\n", factorielle(5));

    printf("\nTest avec 7 :\n");
    printf("Resultat = %d\n", factorielle(7));

    return 0;
}