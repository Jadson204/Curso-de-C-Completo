// Aula 28 - Como funciona o operador de decremento --?  


#include <stdio.h>
#include <stdlib.h>

int main() {

  int resultado, contador = 10, novoResultado;

  resultado = contador--;

  printf("Valor: %d\n", contador--);
  printf("Valor: %d\n\n", --contador);

  return 0;
}