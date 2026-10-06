#include <stdio.h>
#include <string.h>

struct Etudiant {
    char nom[50];
    char prenom[50];
    char adresse[100];
    float noteProgrammation;
    float noteSysteme;
};

int main() {
    struct Etudiant etudiants[5];

    strcpy(etudiants[0].nom, "Dupont");
    strcpy(etudiants[0].prenom, "Marie");
    strcpy(etudiants[0].adresse, "20 Boulevard Niels Bohr, Lyon");
    etudiants[0].noteProgrammation = 16.5;
    etudiants[0].noteSysteme = 12.1;

    strcpy(etudiants[1].nom, "Martin");
    strcpy(etudiants[1].prenom, "Pierre");
    strcpy(etudiants[1].adresse, "22 Boulevard Niels Bohr, Lyon");
    etudiants[1].noteProgrammation = 14.0;
    etudiants[1].noteSysteme = 14.1;

    strcpy(etudiants[2].nom, "Bernard");
    strcpy(etudiants[2].prenom, "Sarah");
    strcpy(etudiants[2].adresse, "10 Rue Victor Hugo, Paris");
    etudiants[2].noteProgrammation = 15.5;
    etudiants[2].noteSysteme = 13.0;

    strcpy(etudiants[3].nom, "Petit");
    strcpy(etudiants[3].prenom, "Lucas");
    strcpy(etudiants[3].adresse, "5 Avenue de France, Lyon");
    etudiants[3].noteProgrammation = 11.5;
    etudiants[3].noteSysteme = 16.0;

    strcpy(etudiants[4].nom, "Robert");
    strcpy(etudiants[4].prenom, "Emma");
    strcpy(etudiants[4].adresse, "18 Rue Pasteur, Marseille");
    etudiants[4].noteProgrammation = 17.0;
    etudiants[4].noteSysteme = 15.0;

    for (int i = 0; i < 5; i++) {
        printf("Etudiant %d :\n", i + 1);
        printf("Nom : %s\n", etudiants[i].nom);
        printf("Prenom : %s\n", etudiants[i].prenom);
        printf("Adresse : %s\n", etudiants[i].adresse);
        printf("Note Programmation C : %.1f\n", etudiants[i].noteProgrammation);
        printf("Note Systeme d'exploitation : %.1f\n", etudiants[i].noteSysteme);
        printf("\n");
    }

    return 0;
}