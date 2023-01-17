/* Aula 22 - Como usar o operador long para o tipo primitivo double? */

#include <stdio.h>
#include <stdlib.h>

int main() {

  float x = 3.1415;

  long double y = 3.14159265358979323846;

  printf("Valor de y: %Lf\n", y);
  __mingw_printf("Valor de y: %.15Lf\n", y);
  printf("Um double precisa de %d bytes de memoria.\n", sizeof(y));
  
  return 0;
}