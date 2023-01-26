// Aula 69 -  Diferença entre as estruturas de repetição for, while e do while

#include <stdio.h>
#include <stdlib.h>

int main() {
  int i = 0;

  printf("\nGerado com for: ");
  for(i = 0; i <= 10; i++) {
    printf("%d ", i);
  }

  i = 0;

  printf("\nGerado com while: ");
  while(i <= 10) {
    printf("%d ", i++);
  }

  i = 0;

  printf("\nGerado com do while: ");
  do {
    printf("%d ", i++);
  } while(i <= 10);

  return 0;
}