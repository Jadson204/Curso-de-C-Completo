// Escreva um programa em C que leia um número e informe se ele é divisível por 2, por 3 ou por 5, ou se não é divisível por nenhum deles.

#include <stdio.h>
#include <stdlib.h>

int main() {
  int num;

  printf("Digite um numero: ");
  scanf("%d", &num);

  if(num % 2 == 0) {
    printf("\nEste numero e divisivel por 2");
  }
  if(num % 3 == 0) {
    printf("\nEste numero e divisivel por 3");
  }
  if(num % 5 == 0) {
    printf("\nEste numero e divisivel por 5\n");
  } else {
    printf("Este numero nao e divisivel por nenhum dos tres");
  }
  return 0;
}