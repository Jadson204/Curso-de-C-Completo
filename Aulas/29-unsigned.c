// Aula 29 - O que é operador unsigned?

#include <stdio.h>
#include <stdlib.h>

/*
 * Trocar o %d por %u
 * limite para int: 2.147.483.647
 * short int -> %d ou %hi
 * unsigned short int -> %hu ou %d
 * unsigned long int -> %lu
 */

int main() {

  unsigned int x = 2147483647; // 0 ... 4.294.967.295

  unsigned short int y = 55000;
  
  printf("\n\t %u \n\n", ++x);
  printf("\n\t %u \n\n", y);
  return 0;
}