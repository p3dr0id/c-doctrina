/* ===========================================================================================

Titulo da aula: O laço for

Autor: Pedro Dias Pinto
Data 07/12/2023

==============================================================================================*/

/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>

/* Função Principal */

int main() {

    /*
    Exercício resolvido: você precisa imprimir o mapa de uma memória que tem 64 bytes de endereços.
    Os 6 primeiros endereços deverão ter os dados 00h, 01h, 02h, 03h, 04h, 05h e todos os restantes
    FFh. Desenvolva um projeto em C que gere este mapa na tela, considerando que cada linha terá 
    16 bytes.
    */

    unsigned linha, coluna;

    for(linha=0;linha<4;linha++){
        for(coluna=0;coluna<16;coluna++)
            if(coluna < 6 && linha < 1) printf("%2Xh ", coluna);
            else                        printf("FFh ");
        puts(""); /*pula uma linha depois de preencher por completo*/
    }

    /* Outra forma de realizar o exercício anterior*/

    char done = 0;

    for(linha=0;linha<4;linha++){
        for(coluna=0;coluna<16;coluna++)
            if(coluna < 6 && !done) printf("%2Xh ", coluna);
            else                    printf("FFh ");
        done = 1;
        putchar('\n'); /*outra forme de pular a linha após o preenchimento*/
    }

    /*
    Exercício proposto: crie um projeto em C para solicitar ao usuário o número de degraus
    de uma escada a ser desenhada na tela. Exemplo, se o número for 3, a saída de tela será:
    #
    ##
    ###
    */

    unsigned num_deg;

    puts("Insira o número de degraus da escada: ");
    scanf("%d", &num_deg);

    system("clear");

    for(linha=0;linha<num_deg;linha++){
        for(coluna=0;coluna<linha+1;coluna++)
            printf("#");
        puts("");
    }



    return 0;
} /* end main */