#include <stdio.h>

int main() {
    int numero = 0;

    do {
        printf("\n");
        printf("escolha uma opcao: \n");
        printf(" 1 - novo jogo \n");
        printf(" 2 - continuar jogo \n");
        printf(" 3 - Ver pontuacao \n");
        printf(" 4 - sair \n");
        scanf("%i", &numero);
        
        if (numero == 1) {
            printf("voce escolheu novo jogo\n");
        } else if (numero == 2) {
            printf("voce escolheu continuar jogo\n");
        } else if (numero == 3) {
            printf("voce escolheu ver pontuacao\n");
        } else if (numero == 4) {
            printf("voce escoleu sair\n");
        } else if (numero > 4) {
            printf("opcao invalida, tente novamente\n");
        }
    } while (numero != 4);

    printf("voce saiu\n");
    return 0;
}