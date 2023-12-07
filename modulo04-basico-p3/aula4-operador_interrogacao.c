/* ===========================================================================================

Titulo da aula: Operador condicional ?

Autor: Pedro Dias Pinto
Data 04/12/2023

==============================================================================================*/

/*
- Pode ser utilizado para avaliar expressões no lugar de if else
- É o único operador ternário da linguagem C
- Sintaxe: condição ? resultadoV : resultadoF; 
*/

/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>

/* Função Principal */

int main() {
    /*
    Exercício proposto: escreva um programa em C para emitir um alerta via console quando
    a tensão de uma determinada bateria estiver abaixo de 10 Volts. Caso contrário, o
    sistema informa que a tensão está OK
    - O usuário entra com o valor da tensão em número real via teclado e o sistema
    realiza a verificação e informa o status.
    - Utilize o operador interrogação (?) para o teste condicional.
    */
    
    float tensao;
    printf("Entre com o valor da tensão: ");
    scanf("%f", &tensao);
    tensao < 10.0 ? printf("A tensão da bateria está abaixo de 10 V\n") :
                    printf("A tensão está OK\n");
    
    return 0;
} /* end main */