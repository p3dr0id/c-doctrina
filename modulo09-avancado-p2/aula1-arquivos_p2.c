
/* ============================================================================================
Titulo da aula: Arquivos (Parte 2)

Autor: Pedro Dias Pinto
Data 29/12/2023
===============================================================================================*/

/* ============================================================================================ */
/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>

/* ============================================================================================ */
/* --- Variáveis Globais e Constantes --- */


/* ============================================================================================ */
/* --- Protótipo das Funções --- */
int file_status_open(FILE *arq);
void write_file(FILE *arq, int status);

/* ============================================================================================ */
/* --- Função Principal --- */

int main() {
    /*
    Exercício proposto: uma prática comum na aplicação de arquivos em sistemas embarcados consiste
    em salvar dados de leitura de um sensor, como o de temperatura, por exemplo. Com isso pode-se
    desenvolver um datalogger que irá registrar a temperatura ambiente (ou de uma máquina por exem-
    plo) em um período conhecido. Desenvolva o projeto de um programa em C que leia o arquivo
    "celsius.dat" e mostre 10 valores de temperatura em ºC na tela. Em seguida solicite ao usuário
    para entrar com 10 novos valores, atualizando o conteúdo do arquivo. O arquivo deve ser gerado 
    pelo próprio programa, quando este for executado pela primeira vez.
    */
    FILE *arq_temp;
    arq_temp = fopen("celsius.dat", "rb");

    switch(file_status_open(arq_temp)){
        case 1:
            puts("Valores anteriores:");
            write_file(arq_temp, 1);
            break;
        case 0:
            puts("Arquivo inexistente");
            write_file(arq_temp, 0);
            break;
    }

    return 0;
} /* end main */

/* ============================================================================================ */
/* --- Desenvolvimento das Funções --- */
int file_status_open(FILE *arq){
    if(arq==NULL){ /* testa se a abertura foi bem sucedida (caso não o ponteiro aponta para NULL) */
        return 0; /*retorna zero caso não encontre o arquivo*/
    }
    else return 1;
}

void write_file(FILE *arq, int status){
    register int i;
    float temp_data[10];
    if(status){
        fread(temp_data, sizeof(float), 10, arq);
        for(i=0;i<10;i++) printf("%.1f graus Celsius\n", temp_data[i]);
        fclose(arq);
    }
    arq = fopen("celsius.dat", "wb");
    for(i=0;i<10;i++){
        printf("Valor %d lido em Celsius: ", i+1);
        scanf("%f",&temp_data[i]);
    }
    fwrite(temp_data, sizeof(float), 10, arq);

    fclose(arq);
    puts("Novos dados de temperatura salvos com sucesso!");
}


/* ============================================================================================ */