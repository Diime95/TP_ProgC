#include <stdio.h>
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

    printf("Contenu du repertoire %s :\n", nom_repertoire);

    while ((element = readdir(dossier)) != NULL) {
        printf("%s\n", element->d_name);
    }

    closedir(dossier);
}

int main(int argc, char *argv[]) {

    if (argc != 2) {
        printf("Utilisation : %s <nom_du_repertoire>\n", argv[0]);
        return 1;
    }

    lire_dossier(argv[1]);

    return 0;
}