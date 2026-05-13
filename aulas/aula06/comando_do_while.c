#include <stdio.h>

int main() {
    int numero = 0;

    do {
        printf("entre com o numero entre 1 e 10: ");
        scanf("%i", &numero);
        while(getchar() != '\n');
    } while(numero < 1 )

    return 0;
}