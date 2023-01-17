#include <stdio.h>
#include <stdlib.h>

int main() {
    int valor1, valor2; // Criei uma variável para guardar um valor do tipo inteiro

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor1);

    printf("Digite outro valor inteiro: ");
    scanf("%d", &valor2);

    printf("\n\nOs valores digitados foram: %d e %d", valor1, valor2);
}