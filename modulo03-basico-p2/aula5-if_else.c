/* ===========================================================================================
Titulo da aula: 

Autor: Pedro Dias Pinto
Data 28/11/2023

==============================================================================================*/

/* 
- o comando if-else segue a estrurura:
if (condição verdadeira ou falsa){
    bloco de comandos;
}
else{
    bloco de comandos;
}
- caso só haja uma instrução apenas dentro do if ou else, 
não precisa abrir e fechar chaves como mostrado no exercício abaixo
*/

/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>

/* Função Principal */

int main() {

    /*
    Exercício proposto: Escreva um software em C que peça ao usuário para fornecer dois valores
    inteiros e o programa irá imprimir esses valores na tela, informando se são iguais ou 
    diferentes.
    */

    int a, b;

    printf("Informe dois valores inteiros: ");
    scanf("%d%d", &a, &b);
    if (a == b) printf("Os números %d e %d são iguais\n", a, b);

    else printf("Os números %d e %d são diferentes\n", a, b);
    
    return 0;
} /* end main */