#include <stdio.h>

int main() {

    int nombres[5] = {0, 4096, 65536, 65535, 1024};

    for (int n = 0; n < 5; n++) {

        int nombre = nombres[n];
        int binaire[32];
        int i = 0;

        printf("%d en binaire : ", nombre);

        if (nombre == 0) {
            printf("0");
        } else {

            while (nombre > 0) {
                binaire[i] = nombre % 2;
                nombre = nombre / 2;
                i++;
            }

            for (int j = i - 1; j >= 0; j--) {
                printf("%d", binaire[j]);
            }
        }

        printf("\n");
    }

    return 0;
}