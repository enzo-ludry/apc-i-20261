#include <stdio.h>

int main() {
    int dia;

    printf("insira um dia: ");
    scanf("%i", &dia);
    while(getchar() != '\n');

    switch(dia) {
        case 1: printf("dia util!\n"); break;
        case 2: printf("dia util!\n"); break;
        case 3: printf("dia util!\n"); break;
        case 4: printf("dia ultil!\n"); break;
        case 5: printf("dia ultil!\n"); break;
        case 6: printf("final de semana!\n"); break;
        case 7: printf("final de semana!\n"); break;
        default: printf("dia invalido! tente novamente.\n");
    }
    return 0;
}