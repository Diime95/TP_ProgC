#include <stdio.h>
#include "operator.h"
#include "fichier.h"
#include "liste.h"

void exercice41();
void exercice47();
void exercice42() {

    int choix;
    char nomFichier[100];
    char message[500];

    printf("Que souhaitez-vous faire ?\n");
    printf("1 - Lire un fichier\n");
    printf("2 - Ecrire dans un fichier\n");

    printf("Votre choix : ");
    scanf("%d", &choix);

    if (choix == 1) {

        printf("Entrez le nom du fichier a lire : ");
        scanf("%s", nomFichier);

        lire_fichier(nomFichier);

    } else if (choix == 2) {

        printf("Entrez le nom du fichier dans lequel vous souhaitez ecrire : ");
        scanf("%s", nomFichier);

        getchar();

        printf("Entrez le message a ecrire : ");
        fgets(message, sizeof(message), stdin);

        ecrire_dans_fichier(nomFichier, message);

    } else {
        printf("Choix invalide.\n");
    }
}

void exercice42();

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

void exercice47() {

    struct liste_couleurs ma_liste;

    init_liste(&ma_liste);

    struct couleur couleurs[10] = {
        {0xFF, 0x00, 0x00, 0xFF},
        {0x00, 0xFF, 0x00, 0xFF},
        {0x00, 0x00, 0xFF, 0xFF},
        {0xFF, 0xFF, 0x00, 0xFF},
        {0xFF, 0x00, 0xFF, 0xFF},
        {0x00, 0xFF, 0xFF, 0xFF},
        {0x80, 0x80, 0x80, 0xFF},
        {0xFF, 0xFF, 0xFF, 0xFF},
        {0x00, 0x00, 0x00, 0xFF},
        {0xFF, 0x80, 0x00, 0xFF}
    };

    for (int i = 0; i < 10; i++) {
        insertion(&couleurs[i], &ma_liste);
    }

    printf("Liste des couleurs :\n");

    parcours(&ma_liste);
}