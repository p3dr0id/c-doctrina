/* ===========================================================================================

Titulo da aula: break e continue

Autor: Pedro Dias Pinto
Data 07/12/2023

==============================================================================================*/

/*
Quando o break é executado dentro de um bloco de comandos, o seu efeito é sair do bloco e
continuar a execução do restante do programa do bloco mais externo.

O continue tem o mesmo efeito de sair do bloco que o break realiza mas ele leva ao inicio do
bloco imediatamente mais externo. Caso haja uma condição no inicio, ela será testada.

OBS: a função getchar() pode ser utilizada no lugar de scanf() para receber um caractere digitado
pelo usuário e atribuir a alguma variável, ex: var = getchar();

OBS: 
*/

/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>

/* Função Principal */

int main() {

/* O código abaixo serve para mostrar o estouro de uma variável do tipo unsigned short*/
/*
    unsigned short i = 0;

    while(1){
        i++;
        printf("%d\n",i);
        if(i==0) break;
    }
*/

/* O código abaixo "criptografa" o texto digitado deslocando cada caractere duas vezes para
frente na tabela ASCII 
OBS: esse programa pode ser facilmente adaptado para uma criptografia mais confiável inserindo
uma chave composta por uma série de valores aleatórios compartilhada entre o emissor e receptor. */

/*
char ok, chr;

ok = 0;

while(!ok)
{
    chr = getchar();

    if(chr == '@'){
        ok = 1;
        continue;
    }
    putchar(chr+2);
}

*/

/*
Exercício proposto: projete um código em liguagem C que gere a Série de Fibonacci de 0 até
no máximo 1000 na tela. A série inicia com a sequência 0, 1 e o próximo número sempre será
o resultado da soma dos dois anteriores: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34... 
*/

int num_anterior = 0, num_atual = 1, num_posterior;

printf("%d\n", num_anterior);
printf("%d\n", num_atual);
while(1){
    num_posterior = num_atual + num_anterior;
    if(num_posterior>=1000) break;
    printf("%d\n", num_posterior);
    num_anterior = num_atual;
    num_atual = num_posterior;
}
    return 0;
} /* end main */