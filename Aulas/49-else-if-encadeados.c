// 49 - Estrutura de decisão else if encadeados na linguagem C

#include <stdio.h>
#include <stdlib.h>

int main() {
  int a = 10;

  printf("\nDigite um valor qualquer: ");
  scanf("%d", &a);

  // Primeira versão
  if(a < 0)
    printf("\n\tValor negativo\n");
  else {
    if(a > 0)
      printf("\n\tValor positivo\n");
    else
      printf("\n\tValor igual a zero!\n");
  }

  // Segunda versão
  if(a < 0)
    printf("\n\tValor negativo\n");
  else if(a > 0)
    printf("\n\tValor positivo\n");
  else
    printf("\n\tValor igual a zero!\n");
  
  return 0;
}