// Faça um programa em C para trocar o valor de duas variáveis inteiras sem utilizar nenhuma variável auxiliar.

#include <stdio.h>
#include <stdlib.h>

int main() {
  int a, b;

  printf("Digite um valor para A: ");
  scanf("%d", &a);
  printf("Digite um valor para B: ");
  scanf("%d", &b);

  a = a + b;
  b = a - b;
  a = a - b;

  printf("Valor de A: %d\n", a);
  printf("Valor de B: %d\n", b);

  return 0;
}