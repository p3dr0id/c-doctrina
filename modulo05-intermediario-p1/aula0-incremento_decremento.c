/* ===========================================================================================

Titulo da aula: Incremento e decremento

Autor: Pedro Dias Pinto
Data 05/12/2023

==============================================================================================*/

/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>

/* Função Principal */

int main() {
    int x, y, a, b;
    x = 1;
    y = 1;
    x++; /* incrementando x de 1 com o operador aplicado na direita*/
    ++y; /* incrementando y de 1 com o operador aplicado na esquerda*/
    printf("Novo valor de x = %d\n", x);
    printf("Novo valor de y = %d\n", y);
    
    a = ++y; /* aqui agora o operador incrementa o valor de y e atribui o valor alterado em a*/
    b = x++; /* aqui o valor de x é atribuido a b e depois e incrementado de 1*/
    printf("Valor da variável a = %d\n", a);
    printf("Valor da variável b = %d\n", b);

    printf("Valor de x após outro incremento:  %d\n", x);
    printf("Valor de y após outro incremento: %d\n", y);

    printf("Valor de x após um decremento:  %d\n", --x);
    printf("Valor de y atual: %d e também após um decremento: %d\n", y--, y);


    return 0;
} /* end main */