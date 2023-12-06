/* ===========================================================================================

Titulo da aula: if else encadeados

Autor: Pedro Dias Pinto
Data 04/12/2023

==============================================================================================*/

/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>

/* Função Principal */

int main() {
    
    /*
    Exercício proposto: Crie um programa em C que peça ao usuário para entrar com o valor de
    tensão em Volts e resistência em Ohms. Haverá um menu onde o usuário escolhe qual dado calcular:
    1 - corrente que circula pelo resistor: I = V/R
    2 - potência dissipada no resistor: P = I x V ou V²/R
    3 - valor da tensão para uma corrente de 100 mA: V = 0.1 x R
    */
   
    float V, R;
    int opc;
    printf("Entre com os valores da tensão em Volts e resistência em Ohms: ");
    scanf("%f%f", &V, &R);

    printf("Escolha uma opção:\n");
    printf("1 - corrente que circula pelo resistor\n");
    printf("2 - potência dissipada no resistor\n");
    printf("3 - valor da tensão para uma corrente de 100 mA\n");
    scanf("%d", &opc);
   
    if(opc == 1)
        printf("o valor da corrente é: %.2f A\n", V/R);
    else if(opc == 2)
        printf("a potência dissipada no resistor é: %.2f W\n", V*V/R);
    else if (opc == 3)
        printf("o valor da tensão para esta corrente é: %.2f V\n", 0.1*R);
    else 
        printf("Opção inválida\n");    
    
    return 0;
} /* end main */