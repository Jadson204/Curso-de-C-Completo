// Aula 66 - Estrutura de repetição for com incremento diferente de 1

#include <stdio.h>
#include <stdlib.h>

int main() {
  int i;

  for(i = 1; i <= 100; i+=2) {
    printf("%d ", i);
  }
  return 0;
}