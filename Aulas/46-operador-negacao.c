// Aula 46 - O operador lógico de negação ! na linguagem C

#include <stdio.h>
#include <stdlib.h>

/*TABELA VERDADE x  !x
                 v  f
                 f  v
*/

int main() {

   int a;

  printf("\nDigite um valor qualquer: ");
  scanf("%d", &a);

  printf("Operador ternario:\n");
  !(a < 0) ? printf("\n\tEste e um numero negativo.\n") : printf("\n\tValor positivo ou igual a zero\n");

     printf("\n\nif/else\n");
  if(a < 0) {
    printf("\n\tValor negativo.\n");
  }
  else {
    if(a > 0)
      printf("\n\tValor positivo\n");
    else
      printf("\n\tValor igual a zero\n");
  }
    printf("\nContinuacao do programa...\n");

  return 0;
}