#include <stdio.h>

int main() {
    int numero = 0;

    do {
        printf("entre com um numero de 0 a 10\n");
        scanf("%i", &numero);

        if (numero < 0 || numero > 10) {
            printf("nota invalida! tente novamente\n");
        }
    } while (numero < 0 || numero > 10);

    printf("nota valida!\n");
    return 0;
}