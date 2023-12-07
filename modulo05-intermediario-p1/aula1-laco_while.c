/* ===========================================================================================

Titulo da aula: laço while

Autor: Pedro Dias Pinto
Data 07/12/2023

==============================================================================================*/



/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>

/* Função Principal */

int main() {
    /* 
    Exercício proposto: você quer determinar o range de um gráfico que irá apresentar a resposta
    em frequência de um filtro. Desenvolva o projeto em C para solicitar a entrada do range de
    frequência em Hz, onde o mesmo deve ser impresso na tela.
    */

    int freq1, freq2;
    
    printf("Entre com os dois valores do range de frequências em Hz: ");
    scanf("%d%d", &freq1, &freq2);

    if(freq1>freq2)
        printf("O primeiro valor de frequência deve ser menor que o segundo. Reinicie o programa.\n");
    else{
        while(freq1<=freq2){
            printf("%dHz\n",freq1++);

        }/*end while*/

    }/*end else*/
    return 0;
} /* end main */