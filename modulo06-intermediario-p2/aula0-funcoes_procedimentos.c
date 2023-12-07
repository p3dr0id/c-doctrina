/* ============================================================================================
Titulo da aula: Funções e Procedimentos

Autor: Pedro Dias Pinto
Data 07/12/2023

===============================================================================================*/
/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>

/* ============================================================================================ */
/* --- Protótipo das Funções --- */
void placa_numero(int n);

/* ============================================================================================ */
/* --- Função Principal --- */

int main() {
    /*
    Exercício proposto: desenvolva uma função em C para imprimir na tela a mensagem abaixo quando
    a entrada do usuário for o número 3:
    +++++++++++++++++
    |               |
    | N U M E R O 3 |
    |               |
    +++++++++++++++++
    Como desafio para isso para os números de 0 a 9
    */
    char num;

    while(1){
        puts("Digite um número entre 0 e 9 ou @ para sair");
        scanf(" %c", &num);
        if(num == '@') break;
        placa_numero(num);
    }
    puts("Saindo...");
    return 0;
} /* end main */

/* ============================================================================================ */
/* --- Desenvolvimento das Funções --- */

void placa_numero(int n){
    printf("+++++++++++++++++\n");
    printf("|               |\n");
    printf("| N U M E R O %c |\n",n);
    printf("|               |\n");
    printf("+++++++++++++++++\n");
}


/* ============================================================================================ */