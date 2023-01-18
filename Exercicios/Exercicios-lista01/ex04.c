//Escreva um programa que leia um valor de despesa de restaurante, o valor da gorjeta (em porcentagem) e o número de pessoas para dividir a conta. Imprima o valor que cada um deve pagar. Assuma que a conta será dividida igualmente.

#include <stdio.h>
#include <stdlib.h>

int main() {

  int pessoas;
  float gorjeta, despesa, valor;

  printf("Valor da despesa do restaurante: ");
  scanf("%f", &despesa);
  printf("Valor da gorjeta (em porcentagem): ");
  scanf("%f", &gorjeta);
  printf("Numero de pessoas para dividir a conta: ");
  scanf("%d", &pessoas);

  gorjeta = gorjeta / 100;
  despesa = despesa + (despesa * gorjeta);
  valor = despesa / pessoas;

  printf("\nCada pessoa devera pagar: R$ %.2f", valor);

  return 0;
}