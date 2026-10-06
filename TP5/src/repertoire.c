#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include "repertoire.h"

void lire_dossier(char *nom_repertoire) {

    DIR *dossier;
    struct dirent *element;

    dossier = opendir(nom_repertoire);

    if (dossier == NULL) {
        printf("Erreur : impossible d'ouvrir le repertoire.\n");
        return;
    }

    while ((element = readdir(dossier)) != NULL) {
        printf("%s\n", element->d_name);
    }

    closedir(dossier);
}

void lire_dossier_recursif(char *nom_repertoire) {

    DIR *dossier;
    struct dirent *element;
    char chemin[1000];

    dossier = opendir(nom_repertoire);

    if (dossier == NULL) {
        printf("Erreur : impossible d'ouvrir %s\n", nom_repertoire);
        return;
    }

    while ((element = readdir(dossier)) != NULL) {

        if (strcmp(element->d_name, ".") == 0 ||
            strcmp(element->d_name, "..") == 0) {
            continue;
        }

        snprintf(
            chemin,
            sizeof(chemin),
            "%s/%s",
            nom_repertoire,
            element->d_name
        );

        printf("%s\n", chemin);

        if (element->d_type == DT_DIR) {
            lire_dossier_recursif(chemin);
        }
    }

    closedir(dossier);
}

int main(int argc, char *argv[]) {

    if (argc != 2) {
        printf("Utilisation : %s <nom_du_repertoire>\n", argv[0]);
        return 1;
    }

    lire_dossier_recursif(argv[1]);

    return 0;
}