/* ============================================================================================
Titulo da aula: Parâmetros de Funções

Autor: Pedro Dias Pinto
Data 09/12/2023
===============================================================================================*/

/* ============================================================================================ */
/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>

/* ============================================================================================ */
/* --- Protótipo das Funções --- */
void freq_tau(float R, float C, char opt);

/* ============================================================================================ */
/* --- Função Principal --- */

int main() {
    /*
    Exercício proposto: desenvolva uma função em C que imprima o valor da frequência de corte
    de um filtro passa-baixas, onde o usuário entrará com os parâmetros: R, C e 'f'. A equação
    é a que segue:
    f = 1/(2*pi*R*C)
    A mesma função deverá calcular e imprimir na tela o valor da constante de tempo, resultado
    do produto de R e C, caso o usuário entre com R, C e 't'. A equação é a que segue:
    tau = R*C
    */
    float R, C;
    char opt;
    puts("Entre com o valor da resistência R:");
    scanf("%f", &R);
    puts("Entre com o valor da capacitância C:");
    scanf("%f", &C);
    puts("Digite 'f' para obter o valor da frequência de corte ou 't' para obter o tempo característico:");
    scanf(" %c", &opt);
    freq_tau(R, C, opt);

    return 0;
} /* end main */

/* ============================================================================================ */
/* --- Desenvolvimento das Funções --- */
void freq_tau(float R, float C, char opt){
    const float PI = 3.14159265;
    float freq = 1.0/(2.0*PI*R*C);
    float tau = R*C;
    switch(opt){
        case 'f': printf("f = %.2fHz\n", freq); break;
        case 't': printf("t = %.5fs\n", tau); break;
        default: puts("Opção inválida!"); 
    }
}

/* ============================================================================================ */