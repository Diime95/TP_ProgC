#include <stdio.h>

int main() {
    char noms[5][50] = {
        "Dupont Jean",
        "Martin Sarah",
        "Bernard Lucas",
        "Petit Emma",
        "Robert Hugo"
    };

    char adresses[5][100] = {
        "12 rue de Paris",
        "5 avenue Victor Hugo",
        "8 rue des Lilas",
        "20 boulevard Voltaire",
        "3 rue Pasteur"
    };

    float notesProgrammation[5] = {
        15.5,
        12.0,
        17.5,
        14.0,
        10.5
    };

    float notesSysteme[5] = {
        14.0,
        13.5,
        16.0,
        11.5,
        12.5
    };

    for (int i = 0; i < 5; i++) {
        printf("Etudiant %d\n", i + 1);
        printf("Nom et prenom : %s\n", noms[i]);
        printf("Adresse : %s\n", adresses[i]);
        printf("Note Programmation C : %.1f\n", notesProgrammation[i]);
        printf("Note Systeme d'exploitation : %.1f\n", notesSysteme[i]);
        printf("\n");
    }

    return 0;
}