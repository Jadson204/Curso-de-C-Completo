// Faça um programa para ler um número inteiro e verificar se corresponde a um mês válido no calendário. Caso corresponda, escrever o nome do mês, caso contrário, escrever a mensagem ‘Mês Inválido’.

#include <stdio.h>
#include <stdlib.h>

int main() {
  int mes;

  printf("Digite o numero correspondente a um mes: ");
  scanf("%d", &mes);

  switch (mes) {

    case 1:
    printf("Janeiro\n");
    break;

    case 2:
    printf("Fevereiro\n");
    break;

    case 3:
    printf("Marco\n");
    break;

    case 4:
    printf("Abril\n");
    break;

    case 5:
    printf("Maio\n");
    break;

    case 6:
    printf("Junho\n");
    break;

    case 7:
    printf("Julho\n");
    break;

    case 8:
    printf("Agosto\n");
    break;

    case 9:
    printf("Setembro\n");
    break;

    case 10:
    printf("Outubro\n");
    break;

    case 11:
    printf("Novembro\n");
    break;

    case 12:
    printf("Dezembro\n");
    break;

    default:
    printf("Opcao invalida\n");
  }

  return 0;
}