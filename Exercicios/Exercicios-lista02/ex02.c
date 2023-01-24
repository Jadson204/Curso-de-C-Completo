#include <stdio.h>
#include <stdlib.h>

int main() {
  int num1, num2, num3, num4, num5, positivos = 0, negativos = 0;

  printf("Digite o primeiro valor: ");
  scanf("%d", &num1);
  printf("Digite o segundo valor: ");
  scanf("%d", &num2);
  printf("Digite o terceiro valor: ");
  scanf("%d", &num3);
  printf("Digite o quarto valor: ");
  scanf("%d", &num4);
  printf("Digite o quinto valor: ");
  scanf("%d", &num5);

  if(num1 < 0) {
    negativos++; 
  }
  else {
    positivos++;
  }

  if(num2 < 0) {
    negativos++;
  }
  else {
    positivos++;
  }

  if(num3 < 0) {
    negativos++;
  }
  else {
    positivos++;
  }

  if(num4 < 0) {
    negativos++;
  }
  else {
    positivos++;
  }

  if(num5 < 0) {
    negativos++;
  }
  else {
    positivos++;
  }


  printf("\nValores positivos: %d\n", positivos);
  printf("Valores negativos: %d", negativos);

  return 0; 
}