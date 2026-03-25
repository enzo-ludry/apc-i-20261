#include <stdio.h>

int main() {
    /* entrada de dados*/

    char tecla_pressionada;
    char estado;

    printf("pressione uma tecla: ");
    scanf("%c", &tecla_pressionada);
    while(getchar() != '\n'); // limpar o buffer

    printf("voce pressionou a tecla %c\n", tecla_pressionada);

    int idade;
    printf("informe a sua idade: ");
    scanf("%i", &idade);
    while(getchar() != '\n');

    printf("voce tem %i anos\n", idade);

    printf("informe o seu estado: ");
    scanf("%p", &estado);
    while(getchar() != '\n');

    printf("voce mora %p estado \n", estado);

    float preco;
    printf("informe o preco da passagem: ");
    scanf("%f", &preco);
    while(getchar() != '\n');

    printf("o preco da passagem eh %.2f \n", preco);

    return 0;
}