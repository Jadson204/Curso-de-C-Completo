#include <stdio.h>
#include <stdlib.h>

/*Ler sexo, idade, peso e altura*/

int main() {

  char sexo;
  int idade;
  float peso, altura;

  printf("Digite o seu sexo: ", sexo);
  scanf("%c", &sexo);
  printf("Digite a sua idade: ", idade);
  scanf("%d", &idade);
  printf("Digite o seu peso: ", peso);
  scanf("%f", &peso);
  printf("Digite a sua altura: ", altura);
  scanf("%f", &altura);

  printf("Seu sexo e %c\n", sexo);
  printf("Sua idade e: %d anos\n", idade);
  printf("Seu peso e: %.2f kg\n", peso);
  printf("Sua altura e: %.2f m\n", altura);
  return 0;
}