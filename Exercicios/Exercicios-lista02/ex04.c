// Crie um programa que permita ao usuário escolher entre fazer a conversão de Real para Dólar ou de Dólar para Real. Utilize como taxa de câmbio $1 igual a R$5.30.

#include <stdio.h>
#include <stdlib.h>

int main() {
  float valor, real, dolar;
  int opcao;

  printf("Escolha o tipo de conversao: \n");
  printf("1 - Real para Dolar\n");
  printf("2 - Dolar para Real\n");
  scanf("%d", &opcao);
  

  switch (opcao) {
    case 1:
      printf("Digite o valor: ");
      scanf("%f", &valor);
      dolar = valor / 5.30;
      printf("Equivalem a %.2f dolares", dolar);
    break;
    case 2: 
      printf("Digite o valor: ");
      scanf("%f", &valor);
      real = valor * 5.30;
      printf("Equivalem a %.2f reais", real);
    break;
    default:
    printf("Erro");
  }

  return 0;
}