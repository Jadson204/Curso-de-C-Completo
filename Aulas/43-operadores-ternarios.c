// Aula 43 - O operador ternário na linguagem C

#include <stdio.h>
#include <stdlib.h>

int main() {

    int a;

  printf("\nDigite um valor qualquer: ");
  scanf("%d", &a);

  printf("Operador ternario:\n");
  a < 0 ? printf("\n\tEste e um numero negativo.\n") : printf("\n\tEste nao e um numero negativo.");

  printf("\n\nif/else\n");
  if(a < 0) {
    printf("\n\tEste e um numero negativo.\n");
  }
  else {
    printf("\n\tEste nao e um numero negativo.\n");
  }
    printf("\nContinuacao do programa...\n");
   
  return 0;
}