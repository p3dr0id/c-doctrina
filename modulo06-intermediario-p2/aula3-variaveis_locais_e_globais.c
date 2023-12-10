/* ============================================================================================
Titulo da aula: Variáveis locais e globais

Autor: Pedro Dias Pinto
Data 10/12/2023
===============================================================================================*/

/*
- Variáveis definidas dentro de funções só são reconhecidas no escopo da função onde foram definidas
- Variáveis definidas no início do código (fora de funções) são reconhecidas dentro de todas as funções 
- Sempre que quiser preservar o conteúdo de uma variável definida no escopo local de uma função
entre uma chamada e outra da função, utilize o especificador de tipo de armazenamento "static" 
antes da definição da variável, ex: static int variavel_local; (isso tem o efeito de uma variável global)
- O especificar "static" em uma variável global preserva o conteúdo da variável no arquivo que ela
foi definida. (útil quando o código está distribuido entre vários arquivos)
- Não entendi a explicação sobre o especificador "volatile"
- O especificador "extern" é útil para trabalhar com mais arquivos, podendo acessar nos subarquivos o 
conteúdo de variáveis definidas no escopo global do arquivo principal
*/



/* ============================================================================================ */
/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>
#include "funcao.h"

/* ============================================================================================ */
/* --- Variáveis Globais --- */
int var_global1 = 3,
    var_global2 = 3,
    var_global3 = 3;

/* ============================================================================================ */
/* --- Protótipo das Funções --- */
extern void resultado_soma(); // função definida em um arquivo externo.
void repeat_hello(int n);

/* ============================================================================================ */
/* --- Função Principal --- */

int main(){

    resultado_soma(); // verificar por que não funcionou

    repeat_hello(8);

    printf("Teste de saída\n");

    return 0;
} /* end main */

/* ============================================================================================ */
/* --- Desenvolvimento das Funções --- */
void repeat_hello(int n){
    
    /* o especificador de tipo "register" permite operações mais rápidas (dispensa necessidade)
    de acessar a memória. Por esse motivo a variável não contem um endereço e não pode ser acessada
    via operador &. O especificador "register" só pode ser aplicado em variáveis locais e parâmetros
    formais de funções. Muito utilizada em laços for como mostrado abaixo */
    register int i; 

    for(i=0;i<n;i++){
        puts("Hello!");
    }
}

/* ============================================================================================ */