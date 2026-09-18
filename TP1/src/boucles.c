int main() {

    int compteur = 5;
    int i = 1;

    if (compteur >= 10) {
        printf("Le compteur doit etre inferieur a 10.\n");
        return 1;
    }

    while (i <= compteur) {

        int j = 1;

        while (j <= i) {

            if (j == 1 || j == i || i == compteur) {
                printf("* ");
            } else {
                printf("# ");
            }

            j++;
        }

        printf("\n");
        i++;
    }

    return 0;
}