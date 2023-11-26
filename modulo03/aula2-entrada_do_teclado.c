/* ===========================================================================================

Titulo da aula: Entrada do Teclado

Autor: Pedro Dias Pinto
Data 26/11/2023

==============================================================================================*/

/*
- scanf("formato_do_dado_a_ser_lido", &variavel_carregada)
- %c lê um único caractere
- %d lê um inteiro decimal (também pode ser usado %i)
- %f lê um ponto flutuante
- %e lê um ponto fluturante
- %u lê um unsigned
- %s lê uma string
- %% lê o símbolo percentual

- utiliza o buffer do teclado para armazenar temporariamente os caracteres (possibilita correção)
*/


/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>

/* Função Principal */

int main() {
    char chr;
    printf("Digite um caractere e pressione enter: ");
    scanf("%c", &chr);
    printf("O caractere digitado foi: %c\n", chr);

    char carac1, carac2;
    printf("Digite um caractere: ");
    scanf(" %c", &carac1); /* a partir do segunda scanf é necessário dar espaço depois da aspas*/
    printf("Digite outro caractere: ");
    scanf(" %c", &carac2); /* caso fique sem espaço ele aceita o botão enter como a próxima entrada*/
    printf("Os caracteres digitados foram: %c e %c\n", carac1, carac2);

    /* No programa abaixo que envolve números não existe o problema do enter no buffer do teclado*/
    int num1=0, num2=0, res=0; /* é uma boa prática inicializar as variáveis (evita lixo de memória)*/

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    res = num1 + num2;
    printf("%d + %d = %d\n", num1, num2, res);

    /* veja o problema agora do lixo de memória ao não atribuir valor a uma variável*/

    int res2;
    printf("Mesmo exemplo anterior agora com erro na resposta devido ao lixo de memória\n");
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    res = num1 + num2;
    printf("%d + %d = %d\n", num1, num2, res2);

    /* Utilizando o scanf para receber dois números de uma vez*/
    printf("Digite dois números inteiros (pode serem separados por espaço ou enter): ");
    scanf("%d%d", &num1, &num2);
    res = num1 + num2;
    printf("%d + %d = %d\n", num1, num2, res);

    /* 
    Exercício proposto 1: Escreva um programa em C que solicite ao usuário a entrada de dois números
    reais e o programa calcule e mostre no console o resultado da subtração, multiplicação
    e divisão desdes dois números.
    */
   
    /* Resposta */
    float n1 = 0.0, n2 = 0.0;
    printf("Digite dois números reais: ");
    scanf("%f%f", &n1, &n2);
    printf("%.2f - %.2f = %.2f\n", n1, n2, n1-n2);
    printf("%.2f x %.2f = %.2f\n", n1, n2, n1*n2);
    printf("%.2f / %.2f = %.2f\n", n1, n2, n1/n2);
    /*
    Exercício proposto 2: Escreva um programa em C que solicite ao usuário o valor de temperatura em ºC
    e o software imprima na tela o valor da temperatura em ºF. A equação de conversão é:
    TF = (1.8 x TC) + 32
    */
    float TC = 0.0, TF = 0.0;
    printf("Digite um valor de temperatura em °C: ");
    scanf("%f", &TC);
    TF = (1.8 * TC) + 32.0;
    printf("O valor da temperatura digitada em °F é: %.2f\n", TF);

    return 0;
} /* end main */