#include <stdio.h>
#include <stdlib.h>

// Caractere de escape para saltar uma linha -> \n

int main() {
    
    // printf � uma fun��o de sa�da
    printf("Menu\n\n");
    printf("==========================================\n");
    printf("1 - Logar    2 - Cadastrar    3 - Imprimir\n");
    printf("==========================================\n");

    printf("Valor retornado: %d", printf("\nOi\n"));

    printf("\nPressione qualquer tecla para finalizar.");
    getchar();

    return 0;
}
