/* ============================================================================================
Titulo da aula: Passagem de Matrizes para Funções

Autor: Pedro Dias Pinto
Data 21/12/2023
===============================================================================================*/

/* ============================================================================================ */
/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>

/* ============================================================================================ */
/* --- Variáveis Globais e Constantes --- */

#define LIN 3
#define COL 3

/* ============================================================================================ */
/* --- Protótipo das Funções --- */
void desenha_matriz(int mat[LIN][COL]);

/* ============================================================================================ */
/* --- Função Principal --- */

int main() {
    int matriz[LIN][COL] = {{1, 2, 3},
                            {4, 5, 6},
                            {7, 8, 9,}};

    desenha_matriz(matriz);

    return 0;
} /* end main */

/* ============================================================================================ */
/* --- Desenvolvimento das Funções --- */
void desenha_matriz(int mat[LIN][COL]){ /*é necessário passar pelo menos o tamanho da coluna da matriz*/
    register int i, j;
    for(i=0;i<LIN;i++){
        for(j=0;j<COL;j++) printf("%3d ", mat[i][j]);
    puts("");
    }/*end for*/
}/*end desenha_matriz*/


/* ============================================================================================ */