// Elabore um algoritmo que receba, por meio do teclado, dois valores, um para a variável “a” e um para a variável “b”. Em seguida, faça os passos que julgar necessário para que ao final, a variável “a” possua o valor que inicialmente estava em “b” e a variável “b” possua o valor que inicialmente estava em “a”. Traduza seu algoritmo para a linguagem C e exiba os valores na tela.

#include <stdio.h>
#include <stdlib.h>

int main() {
  int a, b, a2, b2;

  printf("Digite um valor para A: ");
  scanf("%d", &a);
  printf("Digite um valor para B: ");
  scanf("%d", &b);

  a2 = b;
  b2 = a;

  printf("Valor de A: %d\n", a2);
  printf("Valor de B: %d\n", b2);
  return 0;
}