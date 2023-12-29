/* ============================================================================================
Titulo da aula: Ponteiros

Autor: Pedro Dias Pinto
Data 25/12/2023
===============================================================================================*/

/*
- O professor Wagner afirma que o operador unário & na frente de uma variável &var faz com que seja 
exibido o endereço físico da memória onde está localizado o valor da variável var.
- Comentário do aluno Ricardo S. sobre esta aula: "Em muitas partes no vídeo o professor menciona que 
o endereço mostrado é o endereço físico, porém ressalto que os endereços mostrados, são endereços lógicos. 
O Mapeamento de endereços lógicos para endereços físicos é feito pela MMU em conjunto com o kernel do SO."
- Preciso verificar melhor essas informações acima
- O ponteiro em C também é um tipo de dado em C. Ele armazena o endereço de memória de uma função ou variável
- Declaração de um ponteiro: tipo *nome_ponteiro; (o tipo de dado deve ser compatível com a variável que o
ponteiro apontar)
- Uma boa prática é inicializar o ponteiro com o conteúdo nulo, ex: int *ptr = NULL; (a constante NULL
significa o endereço 0 de memória)
- Acredito que uma vez que o compilador sempre inicializa uma variável com lixo de memória quando é criada
sem atribuição, inicializar o ponteiro atribuindo NULL evita que o compilador faça o mesmo atribuindo um
endereço "lixo" de memória ao ponteiro.
*/

/* ============================================================================================ */
/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>
#include "macro0.c"
/* ============================================================================================ */
/* --- Variáveis Globais e Constantes --- */


/* ============================================================================================ */
/* --- Protótipo das Funções --- */


/* ============================================================================================ */
/* --- Função Principal --- */

int main() {
    int var = 15;
    printf("Conteudo da variavel var: %d\n", var);
    printf("Endereco de memoria de var em hexadecimal: %p\n", &var);

    int *ponteiro; /*declarando um ponteiro para variável var*/
    ponteiro = &var;
    printf("Endereco apontado pelo ponteiro: %p\n", ponteiro);
    printf("Endereco do ponteiro: %p\n", &ponteiro); /*o próprio ponteiro também tem um endereço de memória*/
    printf("Conteudo de var acessado pelo ponteiro: %d\n", *ponteiro);

    *ponteiro = 7; /*atualiza o conteúdo de var indiretamente por meio do ponteiro*/
    printf("Conteudo de var alterado: %d\n", var);

    /*Exemplo da aula modificado*/
    short *ptr, var1, var2, upt=0;      

    var1 =    0;          
    ptr  = NULL;          
    var2 =    0;
  
    while(1)
    {
      system("cls");
      map;

      printf("var1,var2: ");
      scanf("%hd%*c%hd",&var1,&var2); /*o %*c permite indicar que o caractere que será desprezado entre os valores*/

      system("cls");
      map;
  
      printf("ptr: \n");
      printf("1. aponta para var1\n");
      printf("2. aponta para var2\n");
      printf(">>> ");
      scanf("%hd",&upt);

      if(upt==1)
        ptr = &var1;
      else
        ptr = &var2;

      system("cls");  
      map;

      printf("*ptr: ");
      scanf("%hd",ptr);

    }  
    return 0;
} /* end main */

/* ============================================================================================ */
/* --- Desenvolvimento das Funções --- */


/* ============================================================================================ */