#include <stdio.h>

/* Affiche les octets d'une variable en hexadecimal */
void afficherHex(void *adresse, int taille) {
    unsigned char *p = (unsigned char *)adresse;

    printf("0x");

    for (int i = taille - 1; i >= 0; i--) {
        printf("%02x", p[i]);
    }
}

int main() {

    char c = 65;
    short s = 1000;
    int i = 10;
    long int l = 100000;
    long long int ll = 1000000;
    float f = 2.0f;
    double d = 3.0;
    long double ld = 4.0;

    /* Creation des pointeurs */
    char *pc = &c;
    short *ps = &s;
    int *pi = &i;
    long int *pl = &l;
    long long int *pll = &ll;
    float *pf = &f;
    double *pd = &d;
    long double *pld = &ld;

    printf("Avant la manipulation :\n\n");

    printf("Adresse de c : %p, Valeur : ", (void *)&c);
    afficherHex(&c, sizeof(c));
    printf("\n");

    printf("Adresse de s : %p, Valeur : ", (void *)&s);
    afficherHex(&s, sizeof(s));
    printf("\n");

    printf("Adresse de i : %p, Valeur : ", (void *)&i);
    afficherHex(&i, sizeof(i));
    printf("\n");

    printf("Adresse de l : %p, Valeur : ", (void *)&l);
    afficherHex(&l, sizeof(l));
    printf("\n");

    printf("Adresse de ll : %p, Valeur : ", (void *)&ll);
    afficherHex(&ll, sizeof(ll));
    printf("\n");

    printf("Adresse de f : %p, Valeur : ", (void *)&f);
    afficherHex(&f, sizeof(f));
    printf("\n");

    printf("Adresse de d : %p, Valeur : ", (void *)&d);
    afficherHex(&d, sizeof(d));
    printf("\n");

    printf("Adresse de ld : %p, Valeur : ", (void *)&ld);
    afficherHex(&ld, sizeof(ld));
    printf("\n");


    /* Modification des valeurs avec les pointeurs */
    *pc = 66;
    *ps = 999;
    *pi = 9;
    *pl = 99999;
    *pll = 999999;
    *pf = 1.0f;
    *pd = 2.0;
    *pld = 3.0;


    printf("\nApres la manipulation :\n\n");

    printf("Adresse de c : %p, Valeur : ", (void *)&c);
    afficherHex(&c, sizeof(c));
    printf("\n");

    printf("Adresse de s : %p, Valeur : ", (void *)&s);
    afficherHex(&s, sizeof(s));
    printf("\n");

    printf("Adresse de i : %p, Valeur : ", (void *)&i);
    afficherHex(&i, sizeof(i));
    printf("\n");

    printf("Adresse de l : %p, Valeur : ", (void *)&l);
    afficherHex(&l, sizeof(l));
    printf("\n");

    printf("Adresse de ll : %p, Valeur : ", (void *)&ll);
    afficherHex(&ll, sizeof(ll));
    printf("\n");

    printf("Adresse de f : %p, Valeur : ", (void *)&f);
    afficherHex(&f, sizeof(f));
    printf("\n");

    printf("Adresse de d : %p, Valeur : ", (void *)&d);
    afficherHex(&d, sizeof(d));
    printf("\n");

    printf("Adresse de ld : %p, Valeur : ", (void *)&ld);
    afficherHex(&ld, sizeof(ld));
    printf("\n");

    return 0;
}