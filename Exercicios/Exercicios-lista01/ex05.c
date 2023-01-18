 // Uma empresa contrata um encanador a R$ 45,00 por dia. Faça um programa que solicite o número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga, sabendo que são descontados 8% para imposto de renda.

 #include <stdio.h>
 #include <stdlib.h>

 int main() {

  int num_dias;
  float desconto, total, valor;

  printf("Numero de dias trabalhados: ");
  scanf("%d", &num_dias);

  valor = (num_dias * 45);
  total = valor - (valor * 0.08);

  printf("O total a ser pago e: R$ %.2f", total);
  return 0;
 }