/* ===========================================================================================

Titulo da aula: Atribuições compostas

Autor: Pedro Dias Pinto
Data 07/12/2023

==============================================================================================*/

/*
a = a + 1 é o mesmo que a += 1
a = a / 2 é o mesmo que a /= 2
a = a * (b+c) é o mesmo que a *= (b+c) e também pode ser escrito como a *= b+c (sem erro de precedência)
a++ é o mesmo que a += 1 (em compiladores antigos a primeira atribuição é mais rápida)
a-- é o mesmo que a -= 1
*/

/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>

/* Função Principal */

int main() {

    /*
    Exercício proposto: faça um projeto em C para comprovar que as atribuições compostas 
    envolvendo os operadores binários: +, -, *, / e % são equivalentes ao uso convencional.
    */

    int a1, a2, b, num_op=0;

    for(num_op=0;num_op<5;num_op++){
        a1 = 10;
        a2 = a1;
        b = 5;
        printf("a = %d\t b = %d\n", a1, b);

        if(num_op==0){
            a1 = a1 + b;
            a2 += b;
            printf("a = a + b: %d\t a += b: %d\n", a1, a2);
        }
        else if(num_op==1){
            a1 = a1 - b;
            a2 -= b;
            printf("a = a - b: %d\t a -= b: %d\n", a1, a2);

        }
        else if(num_op==2){
            a1 = a1 * b;
            a2 *= b;
            printf("a = a * b: %d\t a *= b: %d\n", a1, a2);

        }
        else if(num_op==3){
            a1 = a1 / b;
            a2 /= b;
            printf("a = a / b: %d\t a /= b: %d\n", a1, a2);

        }
        else if(num_op==4){
            a1 = a1 % b;
            a2 %= b;
            printf("a = a %% b: %d\t a %%= b: %d\n", a1, a2);

        }
            

    }

    return 0;
} /* end main */