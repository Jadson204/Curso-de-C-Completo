// Aula 30 - Acentuação e a tabela ASCII

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Tabela ASCII e acentuação
1 byte (8 bits) -> -128 até 127
unsigned 1 byte -> 0 até 255

9 é o caractere de tabulação \t.
10 é o caractere de nova linha \n (enter).
65 é a letra A maiúscula.
66 é a letra B maiúscula.
90 é a letra Z maiúscula.

1ª = setlocale(LC_ALL, NULL); // Padrão da linguagem C
2ª = setlocale(LC_ALL, "") // Padrão do sistema operacional
3ª = setlocale(LC_ALL, "Portuguese"); // Português brasileiro
*/

int main() {
  
  setlocale(LC_ALL,"");
  printf("%s\n", setlocale(LC_ALL,"Portuguese"));

  printf("Coração\n");

  return 0;
}