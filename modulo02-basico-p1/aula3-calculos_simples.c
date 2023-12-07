/* ===========================================================================================

Alguns cálculos simples

Autor: Pedro Dias Pinto
Data 22/11/2023

==============================================================================================*/

/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>

/* Função Principal */

int main() {
    printf("Resultado = %d\n\n", 1 + 1);
    printf("Resultado = %d\n\n", 12 / 7);
    printf("Resultado = %f\n\n", 12 / 7.0); /* divisão de inteiro por float dá float */
    printf("Resultado = %d\n\n", 16/8*2); /* operadores de mesma precedência segue a ordem de ocorrência */
    printf("Resultado = %d\n\n", 16*8/2);
    return 0;
} /* end main */