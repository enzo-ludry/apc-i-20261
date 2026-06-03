#include <stdio.h>

int main() {
    int numero = 0;

    printf("entre com um numero inteiro positivo: ");
    scanf("%i", &numero);

    for(int i; i>0; i--) {
        printf("%i X %i = %i\n", i, numero, i * numero);
    }

    return 0;
}