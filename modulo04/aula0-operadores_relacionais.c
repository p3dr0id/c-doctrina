/* ===========================================================================================

Titulo da aula: Operadores relacionais

Autor: Pedro Dias Pinto
Data 28/11/2023

==============================================================================================*/

/*
== (igualdade)
> (maior que)
>= (maior ou igual que)
< (menor que)
<= (menor ou igual que)
!= (diferente)
*/


/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>

/* Função Principal */

int main() {
    /*
    Exercício proposto 1: Escreva um programa em C que solicite o valor inteiro de dois operandos
    ao usuário e então imprima o resultado (verdadeiro ou falso) para os 6 operadores relacionais
    existentes, de acordo com as entradas do usuário.
    */
   int a, b;
   printf("Entre com dois valores inteiros: ");
   scanf("%d%d", &a, &b);
   printf("o resultado de %d == %d é: %d\n", a, b, a==b);
   printf("o resultado de %d > %d é: %d\n", a, b, a>b);
   printf("o resultado de %d >= %d é: %d\n", a, b, a>=b);
   printf("o resultado de %d < %d é: %d\n", a, b, a<b);
   printf("o resultado de %d <= %d é: %d\n", a, b, a<=b);
   printf("o resultado de %d != %d é: %d\n", a, b, a!=b);

   /*
   Exercício proposto 2: Implemente um programa em C que leia dois números inteiros e
   os apresente na tela em ordem decrescente.
   */

   printf("Seguem os valores em ordem decrescente: \n");
   if (a > b) printf("%d %d\n", a, b);
   if (a < b) printf("%d %d\n", b, a);
   else printf("%d %d\n", a, a);

   /* 
   Exercício proposto 3: Desenvolva um programa em C que adicione o bônus de 10% ao salário
   de um vendedor, caso suas vendas ultrapassem R$ 10000,00 no mês. Se as vendas ultrapassarem
   R$ 20000,00, adicione 15% ao salário. Se o vendedor vender para 30000,00 ou mais, adicione
   25% ao salário.
   */
   float salario;
   printf("Entre com o salário do vendedor: ");
   scanf("%f", &salario);
   float bonus5porcento = salario * 0.05;
   float vendas;
   printf("Entre com o valor de vendas do vendedor: ");
   scanf("%f", &vendas);

   if (vendas > 10000.0)
    salario = salario + 2*bonus5porcento;
   if (vendas > 20000.0)
    salario = salario + bonus5porcento;
   if (vendas >= 30000.0)
    salario = salario + 2*bonus5porcento;
    
   printf("O salário do vendedor é de: %.2f\n", salario);

   return 0;
} /* end main */