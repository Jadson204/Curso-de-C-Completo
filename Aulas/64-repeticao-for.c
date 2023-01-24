// Aula 64 - Estrutura de repetição for (para)

#include <stdio.h>
#include <stdlib.h>

int main() {
  int i = 0;

  printf("%d\n", i++);
  printf("%d\n", i++);
  printf("%d\n", i++);
  printf("%d\n", i++);
  printf("%d\n", i++);
  printf("%d\n", i++);
  printf("%d\n", i++);
  printf("%d\n", i++);
  printf("%d\n", i++);
  printf("%d\n", i++);
  printf("%d\n", i++);

  // para(condição de inicio; condição de parada; incremento)
  printf("\nEstrutura de repeticao for (para): \n");

  for(i = 0; i <= 10; i++) {
    printf("%d\n", i);
  }

  return 0;
}