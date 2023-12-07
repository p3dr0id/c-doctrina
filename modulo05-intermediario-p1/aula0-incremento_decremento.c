/* ===========================================================================================

Titulo da aula: Incremento e decremento

Autor: Pedro Dias Pinto
Data 05/12/2023

==============================================================================================*/

/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>

/* Função Principal */

int main() {
    int x, y, a, b, c, d;
    x = 1;
    y = 1;
    x++; /* incrementando x de 1 com o operador aplicado na direita*/
    ++y; /* incrementando y de 1 com o operador aplicado na esquerda*/
    printf("Novo valor de x = %d\n", x);
    printf("Novo valor de y = %d\n", y);
    
    a = ++y; /* aqui agora o operador incrementa o valor de y e atribui o valor alterado em a*/
    b = x++; /* aqui o valor de x é atribuido a b e depois e incrementado de 1*/
    printf("Valor da variável a = %d\n", a);
    printf("Valor da variável b = %d\n", b);

    printf("Valor de x após outro incremento:  %d\n", x);
    printf("Valor de y após outro incremento: %d\n", y);

    c = y--;
    d = y;
    printf("Valor de x após um decremento:  %d\n", --x);
    printf("Valor de y atual: %d e também após um decremento: %d\n", c, d);

    /*
    Exercício proposto: projete um código em C para receber a entrada de um número
    inteiro positivo de 16 bits (deverá ser compatível em máquinas diferentes) e o 
    sistema calcule:
    - O valor do número somado a 1;
    - O valor do número subtraido em 1;
    - A soma de todos os valores envolvidos;
    - O quadrado da soma de todos os valores envolvidos;
    O sistema deve apresentar o limite de valor igual a 85. Caso o usuário digite um valor maior
    que 85, deverá gerar uma mensagem de erro. 
    */
    
    unsigned short int n0, n1, n2, n3, n4; /* garante um inteiro de 2 bytes (16 bits) 0 a 65535 */
    printf("Digite um número inteiro positivo menor que 85: ");
    scanf("%hu", &n0); /* o hu faz referência ao tipo unsigned short int*/

    if (n0 > 85)
        printf("Você digitou um número fora do intervalo permitido!");
    else {
        n1 = n0++; /* atribui o valor do número digitado n0 a variável "n1" e incrementa o número*/
        printf("O valor digitado foi: %d\n", n1); /* mostra o valor digitado */
        printf("O valor do número somado de 1 é: %d\n", n0); /* mostra a valor digitado incrementado */
        n2 = n1--; /* armazena o valor digitado em n2 (original) e decrementa o valor digitado em 1*/
        printf("O valor do número subtraído de 1 é: %d\n", n1);
        n3 = n0 + n1 + n2; /* soma de todos os valores envolvidos */
        printf("A soma de todos os valores envolvidos é: %d\n", n3);
        n4 = n3 * n3;
        printf("O quadrado da soma de todos os valores envolvidos é: %d\n", n4);
    }


    return 0;
} /* end main */