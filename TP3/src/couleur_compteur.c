#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Couleur {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
};

struct CouleurComptee {
    struct Couleur couleur;
    int compteur;
};

int main() {

    struct Couleur couleurs[100];
    struct CouleurComptee distinctes[100];

    int nbDistinctes = 0;
    int trouve;

    srand(time(NULL));

    /* Remplissage du tableau avec des couleurs aleatoires */
    for (int i = 0; i < 100; i++) {
        couleurs[i].r = rand() % 4;
        couleurs[i].g = rand() % 4;
        couleurs[i].b = rand() % 4;
        couleurs[i].a = 0xff;
    }

    /* Comptage des couleurs distinctes */
    for (int i = 0; i < 100; i++) {

        trouve = 0;

        for (int j = 0; j < nbDistinctes; j++) {

            if (
                couleurs[i].r == distinctes[j].couleur.r &&
                couleurs[i].g == distinctes[j].couleur.g &&
                couleurs[i].b == distinctes[j].couleur.b &&
                couleurs[i].a == distinctes[j].couleur.a
            ) {
                distinctes[j].compteur++;
                trouve = 1;
                break;
            }
        }

        if (trouve == 0) {
            distinctes[nbDistinctes].couleur = couleurs[i];
            distinctes[nbDistinctes].compteur = 1;
            nbDistinctes++;
        }
    }

    /* Affichage */
    printf("Couleurs distinctes :\n\n");

    for (int i = 0; i < nbDistinctes; i++) {
        printf(
            "0x%02x 0x%02x 0x%02x 0x%02x : %d\n",
            distinctes[i].couleur.r,
            distinctes[i].couleur.g,
            distinctes[i].couleur.b,
            distinctes[i].couleur.a,
            distinctes[i].compteur
        );
    }

    return 0;
}