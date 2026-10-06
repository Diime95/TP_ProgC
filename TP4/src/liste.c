#include <stdio.h>
#include <stdlib.h>
#include "liste.h"

void init_liste(struct liste_couleurs *liste) {
    liste->premier = NULL;
}

void insertion(struct couleur *couleur, struct liste_couleurs *liste) {

    struct element *nouveau;

    nouveau = malloc(sizeof(struct element));

    if (nouveau == NULL) {
        printf("Erreur d'allocation memoire.\n");
        return;
    }

    nouveau->valeur = *couleur;
    nouveau->suivant = NULL;

    if (liste->premier == NULL) {
        liste->premier = nouveau;
    } else {

        struct element *courant = liste->premier;

        while (courant->suivant != NULL) {
            courant = courant->suivant;
        }

        courant->suivant = nouveau;
    }
}

void parcours(struct liste_couleurs *liste) {

    struct element *courant = liste->premier;

    while (courant != NULL) {

        printf(
            "R: %02X G: %02X B: %02X A: %02X\n",
            courant->valeur.r,
            courant->valeur.g,
            courant->valeur.b,
            courant->valeur.a
        );

        courant = courant->suivant;
    }
}