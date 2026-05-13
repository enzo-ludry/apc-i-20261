#include <stdio.h>

int main(){
    char informe_seu_sexo;

    printf("informe seu sexo: ");
    scanf("%c", &informe_seu_sexo);
    while(getchar() != '\n');

    printf("Seu sexo e %c\n", informe_seu_sexo);

    int idade;
    printf("informe sua idade: ");
    scanf("%i", &idade);
    while(getchar() != '\n');

    printf("Voce tem %i anos\n", idade);

    float altura;
    printf("informe sua altura: ");
    scanf("%f", &altura);
    while(getchar() != '\n');

    printf("Voce tem %.2f de altura\n", altura);

    double peso = 72.845;
    double peso;
    printf("informe seu peso: ");
    scanf("%lf", &peso);
    while(getchar() != '\n');

    printf("Voce tem %.02p de peso\n", peso);





    return 0;
}