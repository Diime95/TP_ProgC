#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {

    FILE *fichier;
    char ligne[1000];
    char phrase[200];

    int numeroLigne = 0;

    if (argc != 2) {
        printf("Utilisation : ./chercherfichier nom_du_fichier\n");
        return 1;
    }

    fichier = fopen(argv[1], "r");

    if (fichier == NULL) {
        printf("Erreur : impossible d'ouvrir le fichier.\n");
        return 1;
    }

    printf("Entrez la phrase que vous souhaitez rechercher : ");
    fgets(phrase, sizeof(phrase), stdin);

    /* Supprime le retour a la ligne de fgets */
    phrase[strcspn(phrase, "\n")] = '\0';

    printf("\nResultats de la recherche :\n");

    while (fgets(ligne, sizeof(ligne), fichier) != NULL) {

        numeroLigne++;

        int compteur = 0;
        char *position = ligne;

        while ((position = strstr(position, phrase)) != NULL) {
            compteur++;
            position = position + strlen(phrase);
        }

        if (compteur > 0) {
            printf("Ligne %d, %d fois\n", numeroLigne, compteur);
        }
    }

    fclose(fichier);

    return 0;
}