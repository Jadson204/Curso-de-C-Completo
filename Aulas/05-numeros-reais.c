#include <stdio.h>
#include <stdlib.h>

int main() {

    float valor1 = 3.1415;
    printf("Valor da minha variavel: %.2f\n", valor1);

    printf("Digite um numero real: ");
    scanf("%f", &valor1);
    printf("Valor lido: %.2f", valor1);

    return 0;
}