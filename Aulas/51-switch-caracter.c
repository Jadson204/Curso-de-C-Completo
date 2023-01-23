// 51 - Estrutura de seleção switch case com caracter

#include <stdio.h>
#include <stdlib.h>

int main() {
  char opcao;

  printf("a - Cadastrar produto\n");
  printf("b - Vender produto\n");
  printf("c - Buscar produto\n");
  printf("d - Imprimir relatorio\n");
  printf("e - Sair\n");
  scanf("%c", &opcao);

  switch (opcao) {
    case 'a': 
      printf("\nCadastrando novo produto\n");
      break;
    case 'b':
      printf("\nVendendo novo produto\n");
      break;
    case 'c':
      printf("\nBuscando novo produto\n");
      break;
    case 'd':
      printf("\nImprimindo relatorio\n");
      break;
    case 'e':
      printf("\nSaindo...\n");
      break;
    default:
    printf("\nOpcao invalida\n");
  }
  
  return 0;
}