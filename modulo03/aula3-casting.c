/* ===========================================================================================
Titulo da aula: casting

Autor: Pedro Dias Pinto
Data 26/11/2023

==============================================================================================*/

/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>

/* Função Principal */

int main() {

    int val_ADC;
    float volts;

    printf("Insira um valor de ADC entre 0 e 1023: ");
    scanf("%d", &val_ADC);

    volts = (float) val_ADC*5/1024;

    printf("A tensão lida foi: %.2fV\n", volts);

    /* 
    Exercício proposto: Escreva um programa em C que solicite ao usuário para entrar com
    um número inteiro de minutos e o valor seja convertido para horas, imprimir este resultado
    com duas casas decimais.
    */
    int min = 0;
    float horas = 0.0;
    printf("Entre com um número inteiro de minutos: ");
    scanf("%d", &min);
    horas = (float) min/60;
    printf("Esse valor corresponde %.2f h\n", horas);
    return 0;
} /* end main */