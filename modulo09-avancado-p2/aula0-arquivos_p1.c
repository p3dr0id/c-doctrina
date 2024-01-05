/* ============================================================================================
Titulo da aula: Arquivos (Parte 1)

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
void file_status_open(FILE *arq); /*função para verificar se o arquivo foi aberto com sucesso*/
void grava_texto(char *string);
void criptografa_arquivo(char *nome_arquivo);
void descriptografa_arquivo(char *nome_arquivo);
/* ============================================================================================ */
/* --- Função Principal --- */

int main(){
    int ch;
    FILE *arq1, *arq2, *arq3;
    arq1 = fopen("teste.txt", "w"); /* abre (cria se não existe) o arquivo teste.txt para escrita "w" */
    file_status_open(arq1);
    /*inicio: formas diferentes de escrever em um arquivo */
    fputc('P', arq1); /* escreve 1 caractere */
    fputc('e', arq1);
    fputc('d', arq1);
    fputc('r', arq1);
    fputc('o', arq1);
    fputs("\nEscrita de uma string no arquivo\
 com separação de linhas\n", arq1);
    char *string = "\nUma linha\nSegunda linha\nTerceira linha\n";
    fputs(string, arq1);
    fclose(arq1); /*fecha o arquivo. É necessário fechar o arquivo antes de lê-lo*/
    /*fim: formas diferentes de escrever em um arquivo */

    arq2 = fopen("teste.txt", "r"); /* abre o arquivo para leitura "r" */
    file_status_open(arq2);
    arq3 = fopen("replica.txt", "w");
    file_status_open(arq3);
    while((ch = fgetc(arq2)) != EOF){
        printf("%c",ch); /*EOF significa "final do arquivo (end of file)"*/
        fputc(ch, arq3); /*EOF significa "final do arquivo (end of file)"*/
    }
    
    fclose(arq2); /*fecha o arquivo*/
    fclose(arq3); /*fecha o arquivo*/
    
    /*
    Exercício proposto: desenvolva o projeto de um programa para criptografar arquivos de texto, 
    que desloque os caracteres digitados 3 posições para frente. Ex: 
    Mensagem original: Curso de C
    Mensagem criptografada: Fxuvr#gh#F
    Desenvolva um software para remover a criptografia e gerar um novo arquivo com a mensagem original.
    */
    grava_texto("Curso de C");
    criptografa_arquivo("texto_gravado.txt");
    descriptografa_arquivo("texto_criptografado.txt");

    return 0;
} /* end main */

/* ============================================================================================ */
/* --- Desenvolvimento das Funções --- */
void file_status_open(FILE *arq){
    if(arq==NULL){ /* testa se a abertura foi bem sucedida (caso não o ponteiro aponta para NULL) */
        puts("Erro no arquivo!!!");
        exit(1);
    }
}

void grava_texto(char *string){
    int ch;
    FILE *arq;
    arq = fopen("texto_gravado.txt", "w");
    file_status_open(arq);
    fputs(string, arq);
    fclose(arq);
}

void criptografa_arquivo(char *nome_arquivo){
    int ch;
    FILE *arq, *arq_cripto;
    arq = fopen(nome_arquivo, "r");
    file_status_open(arq);
    arq_cripto = fopen("texto_criptografado.txt", "w");
    file_status_open(arq_cripto);
    while((ch = fgetc(arq)) != EOF){
        fputc(ch+3, arq_cripto); 
    }
    fclose(arq);
    fclose(arq_cripto);
}

void descriptografa_arquivo(char *nome_arquivo){
    int ch;
    FILE *arq, *arq_decripto;
    arq = fopen(nome_arquivo, "r");
    file_status_open(arq);
    arq_decripto = fopen("texto_descriptografado.txt", "w");
    file_status_open(arq_decripto);
    while((ch = fgetc(arq)) != EOF){
        fputc(ch-3, arq_decripto); 
    }
    fclose(arq);
    fclose(arq_decripto);
}



/* ============================================================================================ */