#include <stdio.h>
#include <math.h>

int main(){
    // 1. entrada
    int operador1;
    int operador2;

    printf("entre com um numero inteiro: ");
    scanf("%i", &operador1);
    while(getchar() != '\n');

    printf("entre com outro numero inteiro: ");
    scanf("%i", &operador2);
    while(getchar() != '\n');

    // 2. processamento
    int soma = operador1 + operador2;
    int subtracao = operador1 - operador2;
    int multiplicacao = operador1 * operador2;
    float divisao = operador1 / operador2;
    int resto = operador1 % operador2; // modulo, nao percentual

    // 3. Saida
    printf("%i + %i = %i\n", operador1, operador2, soma);
    printf("%i - %i = %i\n", operador1, operador2, subtracao);
    printf("%i * %i = %i\n", operador1, operador2, multiplicacao);
    printf("%i / %i = %f\n", operador1, operador2, divisao);
    divisao = operador1 * 1.0f / operador2;
    printf("%i / %i = %f\n", operador1, operador2, divisao);

    // funcoes da matematica
    double potencia = pow(2, 3); // 2^3 = 2 * 2 * 2
    double raiz_quatrada = sqrt(2);
    double logartimo = log(2);
    double seno = (2*3.14/180); // 2 graus = 2*PI/180 radianos 

    return 0;
}