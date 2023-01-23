// Aula 45 - O operador ternário aninhado na linguagem C

#include <stdio.h>
#include <stdlib.h>

int main() {

    int a;

  printf("\nDigite um valor qualquer: ");
  scanf("%d", &a);

  printf("Operador ternario:\n");
  a < 0 ? printf("\n\tEste e um numero negativo.\n") : 
    a > 0 ? printf("\n\tValor positivo\n") : printf("\n\tValor igual a zero\n");
/*
  printf("\n\nif/else\n");
  if(a < 0) {
    printf("\n\tValor negativo.\n");
  }
  else {
    if(a > 0)
      printf("\n\tValor positivo\n");
    else
      printf("\n\tValor igual a zero\n");
  }
    printf("\nContinuacao do programa...\n");
*/
   
  return 0;
}