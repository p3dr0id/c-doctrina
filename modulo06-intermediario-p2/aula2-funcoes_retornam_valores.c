/* ============================================================================================
Titulo da aula: Funções que retornam valores

Autor: Pedro Dias Pinto
Data 10/12/2023
===============================================================================================*/

/* ============================================================================================ */
/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>

/* ============================================================================================ */
/* --- Protótipo das Funções --- */
int conversor10para8bits(int n);

/* ============================================================================================ */
/* --- Função Principal --- */

int main() {

    /*
    Exercício proposto: um processador tem um conversor AD de 10 bits, portanto o range vai de
    0 a 1023. Implemente uma função que receba um valor de 0 a 1023 e retorne um valor linearmente
    proporcional para 8 bits, isto é, de 0 a 255.
    */
    int valor_ad;
    puts("Entre com o valor AD a ser convertido de 10 para 8 bits:");
    scanf("%d", &valor_ad);
    printf("Valor fornecido: %d\n", valor_ad);
    printf("O valor convertido é: %d\n", conversor10para8bits(valor_ad));

    return 0;
} /* end main */

/* ============================================================================================ */
/* --- Desenvolvimento das Funções --- */
int conversor10para8bits(int n){
    return 256.0/1024.0 * n;
}

/* ============================================================================================ */