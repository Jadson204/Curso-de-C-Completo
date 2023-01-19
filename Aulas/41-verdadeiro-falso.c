// Aula 41 - Verdadeiro e falso na linguagem C

#include <stdio.h>
#include <stdlib.h>

int main() {

  int a;

  printf("\nDigite um valor qualquer: ");
  scanf("%d", &a);

  printf("\nResultado logico: %d\n", a < 0);

  if(a < 0)
    printf("\tEste e um numero negativo.");
  else 
    printf("\tEste nao e um numero negativo.");
  
  return 0;
}