/* ============================================================================================
Titulo da aula: Ponteiros para Funções

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
void func1(int v[]);
void func2(int *v);
char protocol(int op1, int op2);
void result(int op1, int op2, char (*func) (int, int));

/* ============================================================================================ */
/* --- Função Principal --- */

int main(){

    int array[5] = {1, 2, 3, 4, 5};

    /*Chamada da função passando o array*/
    func1(array);
    /*Chamada da função passando o ponteiro*/
    func2(array);

    /*
    Exercício proposto: a função protocol apresentada abaixo implementa um protocolo que verifica dois
    operandos. Sendo o primeiro operando maior, a função retorna um 'H' de high, do contrário, retorna
    um 'L' de low.
    Implemente uma função que irá receber dois operandos inteiros e a função protocol como parâmetro,
    interpretando o protocolo corretamente. A função apresentará a seguinte saída: "Resultado do protocolo:
    H" para quando o primeiro operando for maior. Do contrário: "Resultado do protocolo: L"
    */
    int op1, op2;
    printf("Entre com o primeiro operando (op1): ");
    scanf("%d", &op1);
    
    printf("Entre com o segundo operando (op2): ");
    scanf("%d", &op2);

    result(op1, op2, protocol);

    return 0;
} /* end main */

/* ============================================================================================ */
/* --- Desenvolvimento das Funções --- */
void func1(int v[]) {
    // Acessando o valor do primeiro índice do array
    int primeiro_elemento = v[0];
    int segundo_elemento = v[1];
    printf("Valor no primeiro indice: %d\n", primeiro_elemento);
    printf("Valor no segundo indice: %d\n", segundo_elemento);
}

void func2(int *v) {
    // Acessando o valor armazenado no primeiro índice do array
    int primeiro_elemento = *v;
    int segundo_elemento = *(v + 1);
    printf("Valor no primeiro indice: %d\n", primeiro_elemento);
    printf("Valor no segundo indice: %d\n", segundo_elemento);
}

char protocol(int op1, int op2){
    char response;
    response = op1 > op2 ? 'H' : 'L';
    return response;
}/*end protocol*/

void result(int op1, int op2, char (*func) (int, int)){
    printf("Resultado do protocolo: %c\n", (*func)(op1, op2));
}

/* ============================================================================================ */