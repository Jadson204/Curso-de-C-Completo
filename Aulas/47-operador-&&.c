// Aula 47 - O operador lógico e (&&) na linguagem C (Conjunção)

#include <stdio.h>
#include <stdlib.h>

/*TABELA VERDADE  a   b   a & b
                  V   V     V
                  V   F     F
                  F   V     F
                  F   F     F
*/

int main() {

  int idade;
  char sexo;

  printf("Digite seu sexo (m ou f): ");
  scanf("%c", &sexo);
  printf("Digite sua idade: ");
  scanf("%d", &idade);

  if(sexo == 'm' && idade == 18) {
    printf("Alistamento obrigatório\n");
  } else 
    printf("Dispensado\n");

  return 0;
}