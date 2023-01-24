// Faça um programa que peça ao usuário um caracter e diga se é uma vogal ou não.

#include <stdio.h>
#include <stdlib.h>

int main() {
  char letra;

  printf("Digite uma letra: ");
  scanf("%c", &letra);

  if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
    printf("E uma vogal");
  }
  else {
    printf("E uma consoante");
  }

  return 0;
}