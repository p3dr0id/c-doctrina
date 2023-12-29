/* ============================================================================================
Titulo da aula: Passagem de Parâmetros e Recursividade

Autor: Pedro Dias Pinto
Data 28/12/2023
===============================================================================================*/

/* ============================================================================================ */
/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>

/* ============================================================================================ */
/* --- Variáveis Globais e Constantes --- */


/* ============================================================================================ */
/* --- Protótipo das Funções --- */
void quad_cube(int *a, int *b);
void upton(int n);

/* ============================================================================================ */
/* --- Função Principal --- */

int main(int argc, char *argv[]) { /* - parâmetros a serem passados para função principal
                                      - argc: contém o número de parâmetros passados 
                                        (o primeiro é o nome do programa)
                                      - *argv[]: é um vetor de strings. 
                                      - depois de compilar é necessário chamar o executável passando
                                        os parâmetros posteriormente, ex: .\quad 2 3 4 5 */

   // int i, num, quad;

   // puts("num quad");
   // for(i=1;i<argc;i++){
   //     num = atoi(argv[i]); /*atoi = ASCII to Integer*/
   //     quad = num*num;
   //     printf("%2d %3d\n", num, quad);
   // }
    
    /*Exemplo de passagem de variáveis utilizando ponteiros para atualizar o valor das variáveis:*/
    /* 
    int x = 2,
        y = 3;
    printf("x = %d, y = %d\n", x, y);
    quad_cube(&x, &y);
    printf("x^2 = %d, y^3 = %d\n", x, y);
    */

    /*
    Exercício proposto: escreva um programa que você digite ohm seguido dos parâmetros de tesão e corrente
    e seja calculado o valor da resistência, lembrando que R = V/I.
    Exemplo: você digita ohm 12 1 15 2 5 0.001
    e o resultado será impresso no seguinte formato:
    Resistores: 12.0 | 7.5 | 5000.0 | Ohms.
    */

    float V, I, R;
    register int i;
    printf("Resistores: ");
    for(i=1;i<argc;i+=2){
        V = atof(argv[i]);
        I = atof(argv[i+1]);
        R = V/I;
        printf("%.1f | ",R);
    }
    printf("Ohms.");

    /*
    Exercício proposto: projete uma função recursiva para imprimir os números de 1 a n, sendo
    n o número passado como parâmetro para função. Ex: o parâmetro passado é 5. A saída da função
    será 1, 2, 3, 4, 5
    */
    puts("");
    int n = 5;
    upton(n);


    return 0;
} /* end main */

/* ============================================================================================ */
/* --- Desenvolvimento das Funções --- */
void quad_cube(int *a, int *b){
    int temp_a = *a,
        temp_b = *b;

    *a = temp_a*temp_a;
    *b = temp_b*temp_b*temp_b;
}/*end quad_cube*/

void upton(int n){
    /*
    - Apesar de ter conseguido realizar o exercício proposto ainda estou confuso com a lógica por 
    trás dessas chamadas recursivas de funções em C
    - No exemplo abaixo se mudar a ordem passando o printf() para cima de upon() a impressao ocorre
    de n até 1.
    */
    if(n<=0) return;
    upton(n-1);
    printf("%d\n", n);
}


/* ============================================================================================ */