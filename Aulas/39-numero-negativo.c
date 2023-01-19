// Aula 39 - Estrutura de decisão. Verificando se um número é negativo

#include <stdio.h>
#include <stdlib.h>

int main() {

  int a;

  printf("\nDigite um valor qualquer: ");
  scanf("%d", &a);

  if(a < 0) {
    printf("Este e um numero negativo.");
  } else {
    printf("Este nao e um numero negativo.");
  }
  
  return 0;
}