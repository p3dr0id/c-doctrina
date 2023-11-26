/* ===========================================================================================

Titulo da aula: Números reais

Autor: Pedro Dias Pinto
Data 26/11/2023

==============================================================================================*/

/*
- palavras reservadas float (4 bytes) e double (8 bytes)
- float = 6 casas de precisão
- double = 10 a 15 casas de precisão (dependendo da máquina)
- utilizando %f são impressas 6 casas de precisão
- %.2f = duas casas de precisão
- %.12f = doze casas de precisão
- quando atribuir uma variável do tipo float/double, coloque o ponto da casa decimal
- em alguns compiladores pode dar problema uma declaração do tipo: float a = 2;
*/

/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>

/* Função Principal */

int main() {

    float pi = 3.14159265358979;

    /* não imprime corretamente as 14 casas decimais pela limitação do float*/
    printf("pi (impreciso)= %.14f\n", pi);

    double pi_preciso = 3.14159265358979;
    /* agora vai imprimir corretamente pois o double tem até 15 casas de precisão*/
    printf("pi (preciso)= %.14f\n", pi_preciso);

    /* Exemplo da Lei de Ohm*/
    float resistor = 5.0E3, /* resistor de 5 kohm*/
          voltage = 12.0,   /* fonte de 12 V*/
          current;

    current = voltage/resistor; /* Lei de Ohm*/
    printf("I = %.2E\n", current);
    /* também pode ser escrito com E minúsculo*/
    printf("I = %.2e\n", current);
    /* colocando na unidade de Amperes*/
    printf("I = %.4f A\n", current);

    /*
    Exercício proposto:
    - Escreva um algoritmo que calcule a frequência de corte de um filtro passa-vaixas,
    dada pela equação:
    f = 1 / (2 pi R C)
    - Considere um capacitor de 1 micro F
    - Considere um resistor de 3 k ohm
    - Mostrar o valor da frequência com 2 casas de precisão
    */

   /* Resposta: */

   float C = 1.0e-6,
         R = 3.0e3,
         f;

    f = 1/(2*pi*R*C);

    printf("A frequência do filtro é f = %.2f Hz\n", f);


    return 0;
} /* end main */