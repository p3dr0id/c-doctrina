/* ===========================================================================================

Tipos de dados da linguagem C

Autor: Pedro Dias Pinto
Data 22/11/2023

==============================================================================================*/

/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>

/* Função Principal */

int main() {

    /* char: armazena valores inteiros e caracteres. Ocupa 1 byte de memória*/
    /* int: armazena valores inteiros. Ocupa 2 ou 4 bytes de memória (depende da máquina) */
    /* float: armazena números reais. Ocupa 4 bytes de memória*/
    /* double: armazena números reais com maior precisão. Ocupa 8 bytes de memória */
    /* 1 byte equivalem a 8 bits*/

    /* 4 modificadores:
    unsigned: determina que o tipo não terá sinal
    signed: determina que o tipo terá sinal (seu uso normalmente é redundante)
    short: usado principalmente para estabelecer o limite de 2 bytes para o tipo int
    long: usado para estabelecer o limite de 4 bytes para o tipo int e também para aumentar
    a precisão do tipo double
    */

   printf("int ocupa %d byte(s)\n", sizeof(int));
   printf("short int ocupa %d byte(s)\n", sizeof(short));
   printf("long int ocupa %d byte(s)\n", sizeof(long));
   printf("char ocupa %d byte(s)\n", sizeof(char));
   printf("float ocupa %d byte(s)\n", sizeof(float));
   printf("double ocupa %d byte(s)\n", sizeof(double));
   return 0;
} /* end main */