/* ===========================================================================================

Declarando variáveis em C

Autor: Pedro Dias Pinto
Data 22/11/2023

==============================================================================================*/

/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>

int global = 0; /* variável global que pode ser utilizada em todos os blocos*/

/* Função Principal */

int main() {
    int feijao = 3;
    int var1, var2, var3;
    int a = 1,
        b = 2,
        c = 3,
        d;
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    d = a + b + c;
    printf("d = %d\n", d);

    {int teste = 1;} /* isso é um bloco e a variável teste só existe dentro do bloco que ela faz parte*/

    /* teste = 0; dá erro pois a variável teste não está definida neste bloco*/

    return 0;
} /* end main */