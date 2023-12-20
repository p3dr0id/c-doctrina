/* ============================================================================================
Titulo da aula: Passagem de vetores para funções

Autor: Pedro Dias Pinto
Data 19/12/2023
===============================================================================================*/

/* ============================================================================================ */
/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>
#include <math.h> /*acrescentada para utilizar a função sqrt()*/

/* ============================================================================================ */
/* --- Variáveis Globais e Constantes --- */
#define NUM 15

/* ============================================================================================ */
/* --- Protótipo das Funções --- */

//void func(int vet[], int interval);
float true_rms(float volts[], int N);

/* ============================================================================================ */
/* --- Função Principal --- */

int main() {
    /* Exemplo de aula: */
    //int v[NUM] = {}; /* declarando = {} inicializa todos os elementos do vetor com 0*/
    //func(v, 5);
    

    /* Exercício resolvido: você foi encarregado de projetar um voltímetro com a função TRUE RMS.
    Primeiramente, você deve projetar uma função em C que receba o número de pontos de tensão no 
    domínio discreto para o cálculo dos Vrms, conforme equação:
    V_rms = \sqrt{\frac{1}{N} \sum_{i=0}^{N-1} v^2(i)}
    sendo N o número de amostras do sinal de tensão.
    */
    float V[5] = {1.5, 3.8, 4.9, 5.7, 2.1};
    printf("V_rms = %.4fV\n", true_rms(V, 5));


    /*
    Exercício proposto: um processador deve receber diversos bytes e realizar uma conversão
    criptografada dos mesmos. A criptografia será somar 5 aos elementos pares do vetor e 
    subtrair 3 dos elementos ímpares.
    */

    return 0;
} /* end main */

/* ============================================================================================ */
/* --- Desenvolvimento das Funções --- */
void func(int vet[], int interval){
    register int i;
    for(i=0;i<NUM;i++){
        vet[i] = interval*i;
        printf("vet[%d] = %d\n", i, vet[i]);
    }       
}/*end func*/

float true_rms(float volts[], int N){
    register int i;
    float tmp = 0.0;
    float rms;
    for(i=0;i<N;i++)
        volts[i] *= volts[i];
    for(i=0;i<N;i++)
        tmp += volts[i]/N;
    rms = sqrt(tmp);
    return rms;
}/*end true_rms*/

/* ============================================================================================ */