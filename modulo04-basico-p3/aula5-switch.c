/* ===========================================================================================

Titulo da aula: Switch

Autor: Pedro Dias Pinto
Data 05/12/2023

==============================================================================================*/




/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>

/* Função Principal */

int main() {
    /*
    Exercício proposto: faça um programa que pede a entrada da idade e do estado civil por inicial,
    com detecção de maiúscula ou minúscula e imprima na tela a idade e estado civil digitados.
    - S ou s para solteiro
    - C ou c para casado
    - D ou d para divorciado
    - V ou v para viúvo.
    Se o usuário digitar uma letra diferente, imprima na tela que a opção é inválida. 
    */

    int idade;
    char inicial;
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("Digite a letra inicial do seu estado civil:\n");
    printf("s - solteiro\n");
    printf("c - casado\n");
    printf("d - divorciado\n");
    printf("v - viúvo\n");
    scanf(" %c", &inicial);

    switch(inicial){
        case 's':
        case 'S':
            printf("O indivíduo tem %d anos e é solteiro.\n", idade);
            break;
        case 'c':
        case 'C':
            printf("O indivíduo tem %d anos e é casado.\n", idade);
            break;
        case 'd':
        case 'D':
            printf("O indivíduo tem %d anos e é divorciado.\n", idade);
            break;
        case 'v':
        case 'V':
            printf("O indivíduo tem %d anos e é viúvo.\n", idade);
            break;
        default:
            printf("Opção inválida.\n");
    }
    return 0;
} /* end main */