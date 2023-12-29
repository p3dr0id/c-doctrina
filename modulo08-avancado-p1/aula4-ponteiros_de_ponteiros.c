/* ============================================================================================
Titulo da aula: Ponteiros de Ponteiros

Autor: Pedro Dias Pinto
Data 28/12/2023
===============================================================================================*/

/* ============================================================================================ */
/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>

/* ============================================================================================ */
/* --- Variáveis Globais e Constantes --- */


/* ============================================================================================ */
/* --- Protótipo das Funções --- */
void dispmat1(char m[][50], int n);
void dispmat2(char **m, int n);

/* ============================================================================================ */
/* --- Função Principal --- */

int main() {
    int *ptr2, **ptr1, ***ptr0, var = 666;

    ptr2 = &var;
    ptr1 = &ptr2;
    ptr0 = &ptr1;

    printf("var: %d\n", var);
    printf("&var: %p\n", &var); /*endereço de memória de var*/
    printf("*ptr2: %d\n", *ptr2); /*valor apontado do endereço de memória de var*/
    printf("ptr2: %p\n", ptr2); /*endereço de memória de ptr2 (mesmo da variável var)*/
    printf("**ptr1: %d\n", **ptr1); /*valor apontado do endereço de memória de ptr2*/
    printf("ptr1: %p\n", ptr1); /*endereço de memória de ptr1 (mesmo do ponteiro ptr2)*/
    printf("***ptr0: %d\n", ***ptr0); /*valor apontado do endereço de memória de ptr1*/
    printf("ptr0: %p\n", ptr0); /*endereço de memória de ptr0 (mesmo do ponteiro ptr1)*/

    ***ptr0 = 555; /*muda o valor do ponteiro ptr1 que aponta para o ptr2 que aponta para var*/

    printf("var: %d\n", var);
    printf("*ptr2: %d\n", *ptr2); /*valor apontado do endereço de memória de var*/
    printf("**ptr1: %d\n", **ptr1); /*valor apontado do endereço de memória de ptr2*/
    printf("***ptr0: %d\n", ***ptr0); /*valor apontado do endereço de memória de ptr1*/


    int n = 3;
    char matrix1[3][50] = { "teste", "matriz", "um."};
    char *matrix2[] = {"teste", "matriz", "dois."};

    dispmat1(matrix1, n);
    dispmat2(matrix2, n);


                        

    return 0;
} /* end main */

/* ============================================================================================ */
/* --- Desenvolvimento das Funções --- */
void dispmat1(char m[][50], int n){
    register int i;
    for(i=0;i<n;i++) printf("%s\n", m[i]);
}

void dispmat2(char **m, int n){
    register int i;
    for(i=0;i<n;i++) printf("%s\n", m[i]);
}

/* ============================================================================================ */