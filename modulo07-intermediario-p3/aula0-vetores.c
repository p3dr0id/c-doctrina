/* ============================================================================================
Titulo da aula: Vetores

Autor: Pedro Dias Pinto
Data 10/12/2023
===============================================================================================*/

/* ============================================================================================ */
/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>

/* ============================================================================================ */
/* --- Constantes --- */
#define N 5

/* ============================================================================================ */
/* --- Protótipo das Funções --- */


/* ============================================================================================ */
/* --- Função Principal --- */

int main() {
    /*
    Exercício proposto: desenvolva um projeto em C onde o usuário define um valor máximo de aporte
    para a bolsa de valores. Após, ele entra com o valor de 5 ações (que devem ser armazenadas em
    um vetor) e a quantidade para cada ativo. O sistema imprime o valor total em dinheiro e soa um
    alerta caso o aporte seja menor que o total. Desenvolva o projeto de modo que possa ser alterado
    para N ações.
    */

    int quantidade[N];
    float preco_ativo[N];
    float subtotal[N]; /*preço do ativo i vezes a quantidade*/
    float aporte;
    char opt, ok = 0;
    while(!ok){
        float total=0.0;
        puts("Entre com o valor máximo de aporte em R$:");
        scanf("%f", &aporte);
        for(register int i=0; i<N; i++){
            printf("Ativo %d R$: ", i+1);
            scanf("%f", &preco_ativo[i]);
            printf("Quantidade do ativo %d: ", i+1);
            scanf("%d", &quantidade[i]);
            subtotal[i] = preco_ativo[i]*quantidade[i];
        }
        for(register int i=0; i<N; i++){
            total += subtotal[i];
        }
        if(total > aporte){
            printf("Total R$: %.2f\n", total);
            printf("Aporte insuficiente!\a\n");
            printf("Calcular novamente? (s) sim ou (n) não: \n");
            scanf(" %c", &opt);
            if(opt == 's') continue;
            else ok = 1;
        }
        else{
            printf("Total R$: %.2f\n", total);
            printf("Aporte suficiente.\n");
            printf("Calcular novamente? (s) sim ou (n) não: \n");
            scanf(" %c", &opt);
            if(opt == 's') continue;
            else ok = 1;
        }
    }


    return 0;
} /* end main */

/* ============================================================================================ */
/* --- Desenvolvimento das Funções --- */


/* ============================================================================================ */