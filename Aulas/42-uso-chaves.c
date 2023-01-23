// Aula 41 - Verdadeiro e falso na linguagem C

#include <stdio.h>
#include <stdlib.h>

int main() {

  int a;

  printf("\nDigite um valor qualquer: ");
  scanf("%d", &a);

  if(a < 0) {
    printf("\n\tEste e um numero negativo.");
  }
  else {
    printf("\n\tEste nao e um numero negativo.");
    printf("\n\t**Este nao e um numero negativo.**");
  }
    printf("\nContinuacao do programa...\n");
   
  return 0;
}