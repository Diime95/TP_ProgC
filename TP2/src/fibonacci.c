#include <stdio.h>

int main() {
    int n = 6;
    int u0 = 0;
    int u1 = 1;
    int suivant;

    printf("%d, %d", u0, u1);

    for (int i = 2; i <= n; i++) {
        suivant = u0 + u1;

        printf(", %d", suivant);

        u0 = u1;
        u1 = suivant;
    }

    printf("\n");

    return 0;
}