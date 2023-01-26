// 68 - Estrutura de repetição do while (faça enquanto)

#include <stdio.h>
#include <stdlib.h>

int main() {
  int valor, valor2;

  printf("Digite um valor maior que zero: ");
  scanf("%d", &valor);

  // enquanto(valor <= 0;)
  while(valor <= 0) {
    printf("Valor invalido! Digite um valor maior que zero: ");
    scanf("%d", &valor);
  }

  printf("Valor lido: %d\n\n", valor);

  printf("========================================\n\n");

  do {
    printf("Digite um valor maior que zero: ");
    scanf("%d", &valor2);
  } while(valor2 <= 0);

  printf("Valor lido: %d\n\n", valor2);

  
  return 0;
}