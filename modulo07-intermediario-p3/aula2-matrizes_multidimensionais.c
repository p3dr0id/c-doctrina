/* ============================================================================================
Titulo da aula: Matrizes Multidimensionais

Autor: Pedro Dias Pinto
Data 20/12/2023
===============================================================================================*/

/* ============================================================================================ */
/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>

/* ============================================================================================ */
/* --- Variáveis Globais e Constantes --- */
#define LIN 4
#define COL 6

/* ============================================================================================ */
/* --- Protótipo das Funções --- */

/* ============================================================================================ */
/* --- Função Principal --- */

int main() {
    int mat1[LIN][COL] = {}; /*inicializa a matriz com zeros*/

    puts("Imprimindo na tela a matriz 1:");
    register int i, j;
    for(i=0;i<LIN;i++){
        for(j=0;j<COL;j++){
            printf("%3d", mat1[i][j]);
        }
        putchar('\n');
    }

    /* inicialização com valores: */
    int mat2[LIN][COL] = {{5, 6, 10, 13, 0, 12}, {0, 15, 62, 98, 7, 4}, {11, 5, 7, 71, 32, 1}, {1, 2, 3, 4, 5, 6}};

    puts("Imprimindo na tela a matriz 2:");
    for(i=0;i<LIN;i++){
        for(j=0;j<COL;j++){
            printf("%3d", mat2[i][j]);
        }
        putchar('\n');
    }

    /*
    Exercício proposto: desenvolva o projeto de uma matriz de 4 linhas e 6 colunas, que apareça na tela
    com um design abaixo:
    -------------------------
    |   |   |   |   |   |   |
    -------------------------
    |   |   |   |   |   |   |
    -------------------------
    |   |   |   |   |   |   |
    -------------------------
    |   |   |   |   |   |   |
    -------------------------
    Elabore uma interface onde o usuário digita o número da linha e o número da coluna e um número inteiro
    de 0 a 999. A matriz vai sendo preenchida a medida que o usuário vai inserindo novas entradas. Importante:
    nesse sistema as linhas e colunas devem começar com o índice 1. E todos os conteúdos devem ser inicializados 
    em 0. Se digitando um número de linha ou um número de coluna fora da faixa da matriz, simplesmente não
    atualiza nada.
    */

    int mat[LIN][COL] = {}; /*inicializa a matriz com zeros*/
    int linha, coluna, numero;
    register int l, c;
    
    while(1){
        printf("\n-------------------------------------\n");
        for(l=0;l<LIN;l++){
            for(c=0;c<COL;c++){
                printf("|%4d ", mat[l][c]);
            }
            printf("|");
            printf("\n-------------------------------------\n");
        }

        printf("Linha: ");
        scanf("%d", &linha);
        printf("Coluna: ");
        scanf("%d", &coluna);
        printf("Número: ");
        scanf("%d", &numero);
    

        if((linha>=1 && linha<=LIN) && (coluna>=1 && coluna<=COL) && (numero>=0 && numero<=999)){
            mat[linha-1][coluna-1] = numero;
            printf("\n-------------------------------------\n");
            for(l=0;l<LIN;l++){
                for(c=0;c<COL;c++){
                    printf("|%4d ", mat[l][c]);
                }
                printf("|");
                printf("\n-------------------------------------\n");
            }
        }
        system("cls"); /*mudar para "clean" em caso de sistema linux*/
    }

    return 0;
} /* end main */

/* ============================================================================================ */
/* --- Desenvolvimento das Funções --- */

/* ============================================================================================ */