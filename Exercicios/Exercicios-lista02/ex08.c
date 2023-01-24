// Elabore um programa que, dado o número do mês, indica quantos dias têm esse mês. Utilize para isso a estrutura de seleção switch. Obs: Considere fevereiro como tendo 28 dias.

#include <stdio.h>
#include <stdlib.h>

int main() {
  int mes;

  printf("Digite o numero do mes: ");
  scanf("%d", &mes);

  switch (mes) {
    case 1:
    printf("31 dias\n");
    break;

    case 2:
    printf("28 dias\n");
    break;

    case 3:
    printf("31 dias\n");
    break;

    case 4:
    printf("30 dias\n");
    break;

    case 5:
    printf("31 dias\n");
    break;

    case 6:
    printf("30 dias\n");
    break;

    case 7:
    printf("31 dias\n");
    break;

    case 8:
    printf("31 dias\n");
    break;

    case 9:
    printf("30 dias\n");
    break;

    case 10:
    printf("31 dias\n");
    break;

    case 11:
    printf("30 dias\n");
    break;

    case 12:
    printf("31 dias\n");
    break;

    default:
    printf("Opcao invalida");

  }
  return 0;
}