// Um usuário deseja um programa onde possa escolher que tipo de média deseja calcular a partir de três notas. Faça um programa que leia as notas e o tipo da média escolhida pelo usuário e calcule a apresente a média:
//Opções:
// • ‘a’ - Aritmética.
// • ‘p’ - Ponderada (pesos: 3,3,4).

#include <stdio.h>
#include <stdlib.h>

int main() {
  float valor1, valor2, valor3, media;
  int opcao;

  printf("Digite as notas: \n");
  printf("Nota 1: ");
  scanf("%f", &valor1);
  printf("Nota 2: ");
  scanf("%f", &valor2);
  printf("Nota 3: ");
  scanf("%f", &valor3);

  printf("Tipo de media que sera calculada: \n");
  printf("1 - Aritmetica\n");
  printf("2 - Ponderada\n");
  scanf("%d", &opcao);

  switch (opcao) {
    case 1:
    media = (valor1 + valor2 + valor3) / 3;
    printf("A media das notas e %.2f\n", media);
    break;

    case 2:
    media = ((valor1 * 3) + (valor2 * 3) + (valor3 * 4)) / (3 + 3 + 4);
    printf("A media das notas e %.2f\n", media);
    break;

    default:
    printf("Opcao invalida");
  }

  return 0;
}