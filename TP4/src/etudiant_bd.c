#include <stdio.h>
#include <string.h>
#include "fichier.h"

struct Etudiant {
    char nom[50];
    char prenom[50];
    char adresse[100];
    float note1;
    float note2;
};

int main() {

    struct Etudiant etudiants[5];

    char contenu[2000] = "";
    char ligne[300];

    for (int i = 0; i < 5; i++) {

        printf("\nEntrez les details de l'etudiant %d :\n", i + 1);

        printf("Nom : ");
        scanf("%49s", etudiants[i].nom);

        printf("Prenom : ");
        scanf("%49s", etudiants[i].prenom);

        getchar();

        printf("Adresse : ");
        fgets(etudiants[i].adresse, sizeof(etudiants[i].adresse), stdin);

        /* Enleve le retour a la ligne de fgets */
        etudiants[i].adresse[strcspn(etudiants[i].adresse, "\n")] = '\0';

        printf("Note 1 : ");
        scanf("%f", &etudiants[i].note1);

        printf("Note 2 : ");
        scanf("%f", &etudiants[i].note2);

        snprintf(
            ligne,
            sizeof(ligne),
            "%s ; %s ; %s ; %.2f ; %.2f\n",
            etudiants[i].nom,
            etudiants[i].prenom,
            etudiants[i].adresse,
            etudiants[i].note1,
            etudiants[i].note2
        );

        strcat(contenu, ligne);
    }

    ecrire_dans_fichier("etudiant.txt", contenu);

    printf("\nLes details des etudiants ont ete enregistres dans etudiant.txt.\n");

    return 0;
}