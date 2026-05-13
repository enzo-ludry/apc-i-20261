#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%i", &numero);
    while(getchar() != '\n');

    if (numero % 2 == 0) {
        printf("%i o numero e par!\n", numero);
    } else {
        printf("%i o numero e impar!\n", numero);
    }
    
    return 0;
}