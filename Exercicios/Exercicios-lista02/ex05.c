//O IMC (Índice de Massa Corporal), pode ser calculado dividindo-se o peso da pessoa (em kg) pela altura (h em metros) elevada ao quadrado (IMC= m/h2). Escreva um programa que leia o peso e a altura de uma pessoa, calcule e mostre o IMC e a faixa em que o indivíduo se enquadra de cordo com a tabela abaixo:

#include <stdio.h>
#include <stdlib.h>

int main() {
  float peso, altura, imc;

  printf("Digite o seu peso (em kg): ");
  scanf("%f", &peso);
  printf("Digite a sua altura (em m): ");
  scanf("%f", &altura);

  imc = peso / (altura * altura);

  printf("\nO seu IMC e %.2f\n\n", imc);

  if (imc < 18.5) {
    printf("Abaixo do peso\n");
  }
  if (imc >= 18.5 && imc < 25) {
    printf("Peso normal\n");
  }
  if (imc >= 25 && imc < 30) {
    printf("Sobrepeso\n");
  }
  if (imc >= 30 && imc < 35) {
    printf("Obesidade grau 1\n");
  }
  if (imc >= 35 && imc < 40) {
    printf("Obesidade grau 2\n");
  }
  if (imc > 40) {
    printf("Obesidade grau 3\n");
  }


  return 0;
}