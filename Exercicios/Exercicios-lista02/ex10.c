#include <stdio.h>
#include <stdlib.h>

int main() {
  int l1, l2, l3, soma;

  printf("Digite o primeiro valor: ");
  scanf("%d", &l1);
  printf("Digite o segundo valor: ");
  scanf("%d", &l2);
  printf("Digite o terceiro valor: ");
  scanf("%d", &l3);

  if(l1 + l2 > l3 && l1 + l3 > l2 && l2 + l3 > l1) {
    printf("Os tres lados formam um triangulo\n");
    if(l1 == l2 && l1 == l3) {
      printf("Equilatero\n");
    }
    else {
      if(l1 == l2 || l1 == l3 || l2 == l3) {
      printf("Isosceles\n"); 
      }
      else {
      printf("Escaleno\n");
      }
    }
  }

  else {
    printf("Os tres lados nao formam um triangulo\n");
  }


  return 0;
}