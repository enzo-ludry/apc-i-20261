#include <stdio.h>

int main() {
    int idade = 0;

    printf("insira sua idade:");
    scanf("%i", &idade);

    int menor_que_12_anos = idade < 12;
    int menor_que_13_anos = idade < 13;
    int maior_que_18_anos = idade >= 18;
    int maior_que_13_anos = idade >= 13;
    int menor_que_18_anos = idade < 18;
    int menor_que_17_anos = idade < 17;
    int menor_que_65_anos = idade < 65;
    int maior_que_65_anos = idade >= 65;

    if (menor_que_12_anos) {
        printf("%i voce e crianca!\n", idade);
    } else if (maior_que_13_anos && menor_que_18_anos) {
        printf("%i voce e adolecente!\n",idade);
    } else if (maior_que_18_anos && menor_que_65_anos) {
        printf("%i voce e adulto!\n", idade);
    } else if (maior_que_65_anos) {
        printf("%i voce e idoso!\n", idade);
    } else

    return 0;
}