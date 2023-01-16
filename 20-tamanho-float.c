/*Aula 20 - Qual o tamanho em memória de um float? */

#include <stdio.h>
#include <stdlib.h>

int main() {

  float x = 3.1;

  printf("Um float precisa de %d bytes de memoria.\n", sizeof(x));

  return 0;
}