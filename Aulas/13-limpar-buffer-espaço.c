#include <stdio.h>
#include <stdlib.h>

int main() {
  char a, b;

  printf("Digite duas letras: ");
  scanf("%c %c",&a, &b);

  // Buffer do teclado => 

  printf("Primeira letra: %c\nSegunda letra: %c\n", a, b);
  return 0;
}