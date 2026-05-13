#include <stdio.h>

int main() {
    int menu;

    printf("\n");
    printf("escolha uma opcao: \n");
    printf(" 1 - novo jogo \n");
    printf(" 2 - continuar jogo \n");
    printf(" 3 - Ver pontuacao \n");
    printf(" 4 - sair \n");

    scanf("%i", &menu);
    
    while(getchar() != '\n');

    switch(menu) {
        case 1: printf("voce escolheu novo jogo\n"); break;
        case 2: printf("voce escolheu continuar jogo\n"); break;
        case 3: printf("voce escolheu ver a pontuacao\n"); break;
        case 4: printf("voce escolheu sair\n"); break;
        default: printf("comando invalido\n");
    }
    

    return 0;
}