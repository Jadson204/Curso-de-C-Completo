// 67 - Estrutura de repetição while (enquanto)

#include <stdio.h>
#include <stdlib.h>

int main() {
  int valor;

  printf("Digite um valor maior que zero: ");
  scanf("%d", &valor);

  // enquanto(valor <= 0;)
  while(valor <= 0) {
    printf("Valor invalido! Digite um valor maior que zero: ");
    scanf("%d", &valor);
  }

  printf("Valor lido: %d\n\n", valor);

  
  return 0;
}