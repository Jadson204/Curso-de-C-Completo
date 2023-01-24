// Escreva um programa em C que leia três valores e apresente qual é o maior e qual é o menor.

#include <stdio.h>
#include <stdlib.h>

int main() {
  int num1, num2, num3;

  printf("Digite o primeiro valor: ");
  scanf("%d", &num1);
  printf("Digite o segundo valor: ");
  scanf("%d", &num2);
  printf("Digite o terceiro valor: ");
  scanf("%d", &num3);

  if(num1 > num2 && num1 > num3) {
    printf("O maior valor e %d", num1);
  }
  if(num2 > num1 && num2 > num3) {
    printf("O maior valor e %d", num2);
  }
  if(num3 > num1 && num3 > num2) {
    printf("O maior valor e %d\n", num3);
  }


  if(num1 < num2 && num1 < num3) {
    printf("O menor valor e %d", num1);
  }
  if(num2 < num1 && num2 < num3) {
    printf("O menor valor e %d", num2);
  }
  if(num3 < num2 && num3 < num2) {
    printf("O menor valor e %d", num3);
  }


  return 0;
}