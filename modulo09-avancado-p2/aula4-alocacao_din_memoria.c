/* ============================================================================================
Titulo da aula: Alocação Dinâmica de Memória

Autor: Pedro Dias Pinto
Data 05/01/2024
===============================================================================================*/

/* ============================================================================================ */
/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>

/* ============================================================================================ */
/* --- Variáveis Globais e Constantes --- */
#define COL 10

/* ============================================================================================ */
/* --- Protótipo das Funções --- */
unsigned num_linhas(unsigned num_elementos);


/* ============================================================================================ */
/* --- Função Principal --- */

int main() {

    /*
    Exercício proposto: desenvolva o projeto de um leitor binário que apresente na tela os bytes
    organizados conforme o exemplo abaixo:
    00 01 02 03 04 05 06 07 08 09
    -- -- -- -- -- -- -- -- -- --
    -- -- -- -- -- -- -- -- -- --
    -- -- -- -- -- -- -- -- -- --
    .
    .
    .
    Esse vetor de bytes para exibição do conteúdo do arquivo binário deverá ser alocado dinamicamente.
    */

    FILE *arq;

    unsigned char vec[25] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 255, 6, 6, 6};
    unsigned char *palloc;
    int tam = sizeof(char);
    arq = fopen("data.bin", "wb");
    if(arq==NULL){
        printf("Erro na escrita!");
        system("pause");
        exit(1);
    }

    fwrite(vec, tam, sizeof(vec), arq);
    fclose(arq);
    puts("Arquivo escrito com sucesso!");

    arq = fopen("data.bin", "rb");
    if(arq==NULL){
        printf("Erro na leitura!");
        system("pause");
        exit(1);
    }

    fseek(arq, 0, SEEK_END); /*varre os bytes do arquivo partindo da posição zero até o final*/
    long n_bytes = ftell(arq);/*com o ponteiro no final do arquivo, atribui o número de bytes varridos a variável n_bytes*/
    printf("o arquivo tem: %ld bytes\n", n_bytes);
    rewind(arq); /*"rebobina" o ponteiro de memória para posição inicial*/

    palloc = (unsigned char *)malloc(n_bytes * tam);
    
    if (palloc == NULL) {
        printf("Erro na alocação de memória!");
        system("pause");
        exit(1);
    }

    fread(palloc, tam, n_bytes, arq);

    register unsigned i, j;
    unsigned count = 0;
    unsigned n_elementos = n_bytes / tam;
    printf("Num elementos: %d\n", n_elementos);
    printf("Num bytes: %ld\n", n_bytes);
    printf("Num linhas: %d\n", num_linhas(n_elementos));
    puts("00 01 02 03 04 05 06 07 08 09");
    for(i=0;i<num_linhas(n_elementos);i++){
        for(j=0;j<COL;j++){
            printf("%.2X ", palloc[count]);
            count++;
            if(count>=n_elementos) break;
        }
        puts("");
    }
    
    free(palloc); /*libera a memória alocada dinamicamente*/
    fclose(arq);

    return 0;
} /* end main */

/* ============================================================================================ */
/* --- Desenvolvimento das Funções --- */
unsigned num_linhas(unsigned num_elementos){
    float linhas = (float)num_elementos/COL;
    int n = linhas;
    if((linhas/n) > 1.0) n+=1;

    return n;
}


/* ============================================================================================ */