// Aula 48 - O operador lógico ou (||) na linguagem C (Disjunção)

#include <stdio.h>
#include <stdlib.h>

/*
TABELA VERDADE  a   b   a || b
                V   V     V
                V   F     V
                F   V     V
                F   F     F
*/

int main() {

  int idade;

  printf("Digite a sua idade: ");
  scanf("%d", &idade);

  if(idade <= 5 || idade >= 60) {
    printf("Voce tem direito ao transporte gratuito\n");
  } else {
    printf("Voce nao tem direito ao transporte gratuito\n");
  }
  return 0;
}