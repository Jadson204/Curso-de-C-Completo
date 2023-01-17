/*Aula 18 - Somei 2 numeros inteiros positivos e o resultado deu negativo*/

#include <stdio.h>
#include <stdlib.h>

/*Tamanho de um int na memoria intervalo: -2.147.483.648 até 2.147.483.647 */

int main() {

  int x = 2147483647;

  printf("Valor de x: %d\n", x);
  x++;
  printf("Valor de x: %d\n", x);

  return 0;
  
}