#include <stdio.h>
#include <stdlib.h>

int main() {
  char a, b;

  printf("Digite uma letra: ");
  scanf("%c",&a);
  // buffer ->
  scanf("%c");

  printf("Digite uma letra: ");
  scanf("%c", &b);

  // espaço entre os %c -> comando para o computador desconsiderar o ENTER, TAB e ESPAÇO

  printf("Primeira letra: %c\nSegunda letra: %c\n", a, b);
  return 0;
}