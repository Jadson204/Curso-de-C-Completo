// Aula 38 - O que são operadores relacionais

/**
 * menor que (a < b)
 * maior que (a > b)
 * menor ou igual (a <= b)
 * maior ou igual (a >= b)
 * igual (a == b)
 * diferente (a != b)
*/

#include <stdio.h>
#include <stdlib.h>

int main() {

  int a = 10;
  int b = 20;

  printf("\n\tResultado: %d\n\n", a < b);
  printf("\n\tResultado: %d\n\n", a > b);
  printf("\n\tResultado: %d\n\n", a <= b);
  printf("\n\tResultado: %d\n\n", a >= b);
  printf("\n\tResultado: %d\n\n", a == b);
  printf("\n\tResultado: %d\n\n", a != b);
  
  return 0;
}