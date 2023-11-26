/* ===========================================================================================

Titulo da aula: caracteres

Autor: Pedro Dias Pinto
Data 26/11/2023

==============================================================================================*/

/* 
- O tipo char armazena  1 byte = 8 bits (2^8 = 256 valores diferentes)
- É possivel declarar tanto inteiros como caracteres como char
- no caso de caracteres, a declaração do valor é feita entre apóstrofos (aspas simples)
- Ex. char var1 = 'B';
- A vantagem de utilizar o char para inteiros é que economiza memória
*/

/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>

/* Função Principal */

int main() {
    char num1 = 2,
         num2 = 6,
         num3 = 8,
         res;
    char caractere = 'E';

    res = num1+num2+num3;
    printf("%d + %d + %d = %d\n", num1, num2, num3, num1+num2+num3);
    printf("%d + %d + %d = %d\n", num1, num2, num3, res);

    printf("caractere = %c\n", caractere);
    printf("mesmo caractere em decimal = %d\n", caractere);
    printf("mesmo caractere em hexadecimal = %x\n", caractere);

    /* 
    É possivel verificar a correspondência de caracteres e números na base
    decimal e hexadecimal utilizando a tabela ASCII
    */

    return 0;
} /* end main */