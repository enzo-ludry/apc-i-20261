#include <stdio.h>

int main() {
    int numero = 0;
    printf("entre com um numero de 1 a 100: ");
    scanf("%i", &numero);

    for(int i=1; i<=100; i++) {
        printf("%i X %i = %i\n", i, numero, i * numero);
    }

    return 0;
}