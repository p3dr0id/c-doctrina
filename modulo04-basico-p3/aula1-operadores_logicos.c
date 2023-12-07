/* ===========================================================================================

Titulo da aula: Operadores Lógicos

Autor: Pedro Dias Pinto
Data 04/12/2023

==============================================================================================*/

/*
- São úteis para fazer combinações de operadores relacionais
- O C tem 3 operadores lógicos:

&& (AND lógico)
|| (OR lógico)
!  (NOT lógico)

- A linguagem C não tem um operador lógico para OU Exclusivo (XOR). É necessário produzí-lo
  a partir da combinação de operadores.
- Ordem de precedência da combinação de operadores relacionais e lógicos do maior para o menor:

!
> >= < <=
== !=
&&
||

IMPORTANTE: Negar com ! (NOT) qualquer valor diferente de 0 na linguagem C dentro de uma condição 
produz 1 (verdadeiro) como resultado. Usar esse recurso torna o código mais eficiente do que 
fazer uma comparação com o operador != (diferente) do tipo: if(a != 0). Assim a condição anterior 
pode ser escrita como: if(!a)
*/

/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>

/* Função Principal */

int main() {

/*
    int teste;

    printf("Digite um valor: ");
    scanf("%d", &teste);

    if(!teste)
        printf("O valor digitado foi ZERO.\n");
    else
        printf("Valor diferente de ZERO.\n");
*/

/* 
- Construindo um código para implementar a lógica XOR que não tem nativa no C (somente bit a bit)
- Na lógica XOR para uma saida ser verdadeira o número de entradas verdadeiras precisa ser impar
*/

/*
    int opA, opB, xor;
    printf("Entre com o opA: ");
    scanf("%d", &opA);
    printf("Entre com o opB: ");
    scanf("%d", &opB);
    xor = (opA || opB) && !(opA && opB);

    printf("%d XOR %d = %d\n", opA, opB, xor);
*/

/*
Exercício proposto: 
- Escreva um programa em C que solicite a idade do individuo e se ele tem carro (s ou S)
ou não tem (n ou N).
- Os individuos sem carro e com idade entre 18 e 50 anos receberão 500 reais de auxílio
transporte. Nos demais casos, o auxílio será de 200 reais.
- Individuo entre 18 e 50 anos sem carro recebe 500 reais.
- Individuo com qualquer idade com carro recebe 200 reais.
- Individuo com menos de 18 e mais de 50 anos recebem 200 reais.
*/

int idade;
char tem_carro;

printf("Digite a sua idade: ");
scanf("%d", &idade);
printf("Você possui carro? S(sim) ou N(não): ");
scanf(" %c", &tem_carro); /*necessário o espaço depois da primeira aspas: " %c"*/

/*OBS: ao testar a string na condição é necessário que esteja em aspas simples (apóstrofos)*/
if ((tem_carro == 'n' || tem_carro == 'N') && (idade >= 18 && idade <= 50))
    printf("Seu auxílio é de 500 reais\n");
else
    printf("Seu auxílio é de 200 reais\n");

return 0;

} /* end main */