/* ============================================================================================
Titulo da aula: Macros

Autor: Pedro Dias Pinto
Data 10/12/2023
===============================================================================================*/

/*
- A função "rand()" gera números pseudo aleatórios de 15 bits que corresponde a um valor máximo 
2^15 - 1 = 32767 (uma vez que começa no 0). 
*/

/* ============================================================================================ */
/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>

/* ============================================================================================ */
/* --- Macros --- */
#define multip(a,b)     a*b
#define hello           puts("Hello "); \
                        puts("World! "); \
                        puts("Yes!!! ")

#define sorteia10       register int i; \
                        for(i=0; i<10;i++)  printf("%d\n", rand()/128)

#define media_ponderada(n1,n2,n3,p1,p2,p3)  (n1*p1+n2*p2+n3*p3)/(p1+p2+p3)

/* ============================================================================================ */
/* --- Variáveis Globais --- */


/* ============================================================================================ */
/* --- Protótipo das Funções --- */


/* ============================================================================================ */
/* --- Função Principal --- */

int main() {

    printf("%d\n", multip(10,7));

    hello;

    /*
    Exercício resolvido: implemente uma macro que faça o sorteio de 10 números aleatórios de
    8 bits e imprima-os na tela.
    */
    sorteia10; // não funcionou como esperado de acordo com o professor. Números acima de 8 bits

    /*
    Exercício proposto: deselvolva uma macro que calcule a média ponderada entre 3 notas de 1 a 10.
    Desenvolva o projeto da interface, onde o usuário entra com a nota e o respectivo peso. Ao final
    do terceiro peso, o sistema calcula o resultado.
    Exemplo: o usuário entra com
    Nota 1 = 7,0 Peso 1 = 2
    Nota 2 = 8,5 Peso 2 = 3
    Nota 3 = 9,1 Peso 3 = 5
    O sistema dará como resultado: 8,5
    */

    float n1, n2, n3, p1, p2, p3;
    puts("Entre com a nota 1 e seu respectivo peso: ");
    scanf("%f%f", &n1, &p1);
    puts("Entre com a nota 2 e seu respectivo peso: ");
    scanf("%f%f", &n2, &p2);
    puts("Entre com a nota 3 e seu respectivo peso: ");
    scanf("%f%f", &n3, &p3);

    printf("Sua média ponderada foi de: %.1f\n", media_ponderada(n1,n2,n3,p1,p2,p3));


    return 0;
} /* end main */

/* ============================================================================================ */
/* --- Desenvolvimento das Funções --- */


/* ============================================================================================ */