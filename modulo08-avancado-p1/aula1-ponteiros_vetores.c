/* ============================================================================================
Titulo da aula: Ponteiros e Vetores

Autor: Pedro Dias Pinto
Data 26/12/2023
===============================================================================================*/
/*
- O nome do vetor é um ponteiro para o primeiro elemento do vetor ou seja vec é o mesmo que &vec[0]
- Ao definir um ponteiro *ptr e inicializá-lo com o primeiro endereço de memória do vetor, para acessar
o conteúdo subsequente do vetor com o ponteiro, basta fazer *(ptr+1). Isso quer dizer que estamos
acessando o conteúdo do primeiro indice de memória deslocado um indice acima e não o conteúdo do
primeiro indice de memória somado de 1. O valor do indice de memória dependerá do tamanho do tipo
de dado armazenado
*/
/* ============================================================================================ */
/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>

/* ============================================================================================ */
/* --- Variáveis Globais e Constantes --- */


/* ============================================================================================ */
/* --- Protótipo das Funções --- */


/* ============================================================================================ */
/* --- Função Principal --- */

int main() {
    int vec[10] = {5, 8, 9};
    int *ptr;
    ptr = &vec[0];
    printf("%p\n", vec); /*imprime o endereço de memória do índice 0 do vetor*/
    printf("Endereco de memoria do indice zero do vetor: %p\n", &vec[0]);
    printf("Endereco de memoria do indice um do vetor: %p\n", &vec[1]); /*endereço de memória do indice 1 (quatro bytes após pois vec é do tipo int)*/
    printf("Numero de bytes de memoria entre o segundo e o primeiro indice: %d\n", (int)&vec[1]-(int)&vec[0]);

    printf("Conteudo do indice 0 do vetor: %d\n", vec[0]);
    printf("Conteudo do indice 0 acessado com o ponteiro: %d\n", *ptr);
    
    printf("Conteudo do indice 1 do vetor: %d\n", vec[1]);
    printf("Conteudo do indice 1 acessado com o ponteiro: %d\n", *(ptr+1));

    /*Como strings são armazenadas em vetores, também é válido os resultados acima para strings*/
    char str[30] = "Estou com fome";
    char *ptr1;
    ptr1 = str;


    printf("%p\n", str);
    printf("Endereco de memoria do indice 0 da string: %p\n", &str[0]);
    printf("Endereco de memoria do indice 1 da string: %p\n", &str[1]);
    printf("Endereco de memoria do ponteiro deslocado um indice acima: %p\n", ptr1+1);
    printf("Numero de bytes de memoria entre o segundo e o primeiro indice da string: %d\n", (int)&str[1]-(int)&str[0]);
    /*variáveis do tipo char possuem 1 byte (8 bits)*/
    printf("Conteudo do elemento 3 da string: %c\n", str[2]);
    printf("Conteudo do elemento 3 da string acessado com o ponteiro: %c\n", *(ptr1+2));
    
    puts("Imprimindo a string completa:");
    printf("%s\n", str); 
    /*comportamento diferente de um vetor de inteiros fazendo printf("%d\n", vec); no caso de um vetor 
    de inteiros, o comando anterior do comentário imprime o endereço de memória em decimal do primeiro 
    elemento do vetor*/

    puts("Imprimindo a string completa utilizando o ponteiro:");
    for(int i=0;i<30;i++){
        printf("%c", *(ptr1+i));
    }
    putchar('\n');
    /*no caso anterior foram reservados 30 espaços de memómia para a string. Como os caracteres não ocupam
    os 30 espaços, o conteúdo do restante de espaços de memória é vazio e não aparece nada no printf. Caso
    acessamos por indice um espaço de memória acima da definição da string, o ponteiro retornará na tela um
    valor de caractere aleatório (lixo de memória) como mostrado abaixo:*/
    puts("Imprimindo a string completa utilizando o ponteiro e acessando lixo de memoria:");
    for(int i=0;i<31;i++){
        printf("%c", *(ptr1+i));
    }


    return 0;
} /* end main */

/* ============================================================================================ */
/* --- Desenvolvimento das Funções --- */


/* ============================================================================================ */