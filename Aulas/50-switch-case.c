// Aula 50 - Estrutura de seleção switch case

#include <stdio.h>
#include <stdlib.h>

int main() {
  int opcao;

  printf("1 - Cadastrar produto\n");
  printf("2 - Vender produto\n");
  printf("3 - Buscar produto\n");
  printf("4 - Imprimir relatorio\n");
  printf("5 - Sair\n");
  scanf("%d", &opcao);

  switch (opcao) {
    case 1: 
      printf("\nCadastrando novo produto\n");
      break;
    case 2:
      printf("\nVendendo novo produto\n");
      break;
    case 3:
      printf("\nBuscando novo produto\n");
      break;
    case 4:
      printf("\nImprimindo relatorio\n");
      break;
    case 5:
      printf("\nSaindo...\n");
      break;
    default:
    printf("\nOpcao invalida\n");
  }
  
  return 0;
}