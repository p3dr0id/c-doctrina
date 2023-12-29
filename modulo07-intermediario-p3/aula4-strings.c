/* ============================================================================================
Titulo da aula: Strings

Autor: Pedro Dias Pinto
Data 21/12/2023
===============================================================================================*/

/*
- exemplo de declaração de uma string: char str[30] = "Pedro"; (nesse caso a string str armazena 29 caracteres 
mais o caracter nulo)
- o caracter nulo é o \0
- uma string pode ser inicializada como um vetor: char str[10] = {'P','e','d','r','o'};
- quando inicializada como um vetor, o objeto é chamado de vetor de caracteres e não contém o caracter nulo
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
    char str1[] = {'P','e','d','r','o'}; /*aqui temos um vetor de caracteres*/
    char str2[] = "Pedro";
    char str3[6] = "Pedro";
    printf("Tamanho do vetor de caracteres: %d bytes\n", sizeof(str1));
    printf("Tamanho da string 2: %d bytes\n", sizeof(str2));
    printf("Tamanho da string 3: %d bytes\n", sizeof(str3));

    printf("Último elemento da vetor de caracteres: %c\n", str1[4]);
    printf("Último elemento da string 2: %c\n", str2[5]); /*o último byte é um caracter nulo*/
    printf("Último elemento da string 3: %c\n", str3[5]); /*o último byte é um caracter nulo*/
    /*
    Exercício proposto: desenvolva um programa que solicita ao usuário a entrada do Nome, Sobrenome,
    Endereço, Bairro, Cidade, CEP e Telefone. Após todas as entradas, os dados completos devem ser
    impressos na tela.
    */
    char nome[20];
    char sobrenome[20];
    char endereco[20];
    char telefone[10];
    printf("Digite o seu nome: ");
    gets(nome);
    printf("Digite o seu sobrenome: ");
    gets(sobrenome);
    printf("Digite o endereço completo: ");
    gets(endereco); /*serve para ler strings mais amplas*/
    printf("Digite o seu telefone: ");
    gets(telefone);
    puts("Confirme os dados completos:");
    printf("%s %s\n", nome, sobrenome);
    printf("%s\n", endereco);
    printf("%s\n", telefone);


    return 0;
} /* end main */

/* ============================================================================================ */
/* --- Desenvolvimento das Funções --- */


/* ============================================================================================ */