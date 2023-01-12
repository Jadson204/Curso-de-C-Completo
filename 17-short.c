#include <stdio.h>
#include <stdlib.h>

int main () {
  // Operador short para o tipo int, intervalo: -32768 até 32767
  int y = 0;
  short int x = 32767;

  printf("Valor de x: %d\n", x);
  x++;

  printf("Valor de x: %hi\n", x);

  return 0;
}