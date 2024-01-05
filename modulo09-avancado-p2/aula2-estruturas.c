/* ============================================================================================
Titulo da aula: Estruturas

Autor: Pedro Dias Pinto
Data 30/12/2023
===============================================================================================*/
/*
Sintaxe de declaração de uma estrutura em C:

struct identificador{
    tipo nome_variavel;
    .
    .
    .
} variavel_estrutura;

Acesso a membros da estrutura:
variavel_estrutura.membro;

- Interpreto uma estrutura como um tipo de variável geral que pode englobar multiplos valores
de variados tipos acessados pelo operador .
*/


/* ============================================================================================ */
/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>

/* ============================================================================================ */
/* --- Variáveis Globais e Constantes --- */

/* ============================================================================================ */
/* --- Estruturas --- */

struct cliente{
    char nome[30];
    char endereco[40];
    char cidade[30];
    char telefone[11];
    int cep;
}infos; 
/*
Também poderia ser declarado da forma:
struct cliente infors;
*/
/*o compilador só vai reservar espaço de mémória quando a variável de estrutura for criada*/
/*a variável info ocupa o espaço de memória da soma do espaço ocupado por todas as variáveis de estrutura*/

struct clock{
    int hours;
    int minutes;
} watch;

/*É possível omitir a chamada struct utilizando o typedef:*/
typedef struct pessoa{
    char nome[50];
    int idade;
    float altura;
}pess;
    

/* ============================================================================================ */
/* --- Protótipo das Funções --- */
void display_time(struct clock var);
void mostra_pessoa(pess pessoa);

/* ============================================================================================ */


/* --- Função Principal --- */

int main(){
    printf("Nome: ");
    gets(infos.nome);
    printf("Endereco: ");
    gets(infos.endereco);
    printf("Cidade: ");
    gets(infos.cidade);
    printf("Telefone: ");
    gets(infos.telefone);
    printf("CEP: ");
    scanf("%d", &infos.cep);

    puts("Dados do cliente");
    puts(infos.nome);
    puts(infos.endereco);
    puts(infos.cidade);
    puts(infos.telefone);
    printf("CEP: %d\n", infos.cep);

    watch.hours = 15;
    watch.minutes = 45;
    display_time(watch);

    struct clock *configure; /*atribuindo um ponteiro para a variável de estrutura clock*/
    configure = &watch; /*atribuindo o endereço de memória da estrura para ser acessado pelo ponteiro*/

    configure->hours = 16; /*utilizando o operador seta -> para atribuir valores com acesso direto a memória*/
    configure->minutes = 50;
    display_time(watch);
    
    pess pessoa1;
    pess pessoa2;
    pess pessoa3;

    strcpy(pessoa1.nome, "Joao");
    pessoa1.idade = 25;
    pessoa1.altura = 1.75;
    strcpy(pessoa2.nome, "Maria");
    pessoa2.idade = 30;
    pessoa2.altura = 1.60;
    strcpy(pessoa3.nome, "Jose");
    pessoa3.idade = 28;
    pessoa3.altura = 1.80;

    mostra_pessoa(pessoa1);
    mostra_pessoa(pessoa2);
    mostra_pessoa(pessoa3);




    return 0;
} /* end main */

/* ============================================================================================ */
/* --- Desenvolvimento das Funções --- */
void display_time(struct clock var){
    printf("%d Horas\n", var.hours);
    printf("%d Minutos\n", var.minutes);
}

void mostra_pessoa(pess pessoa){
    printf("Nome: %s\n", pessoa.nome);
    printf("Idade: %d anos\n", pessoa.idade);
    printf("Altura: %.2f metros\n", pessoa.altura);
}

/* ============================================================================================ */