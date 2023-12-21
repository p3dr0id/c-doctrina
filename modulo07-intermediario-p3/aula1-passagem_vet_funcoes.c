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
#include <windows.h> /*útil para acentuação correta do português em sistemas windows*/

/* ============================================================================================ */
/* --- Variáveis Globais e Constantes --- */
#define NUM 15

/* ============================================================================================ */
/* --- Protótipo das Funções --- */

void func(int vet[], int interval);
float true_rms(float volts[], int N);
int vet_dcrypto(int vet[], int num_bytes);
int crypto(int valor);

/* ============================================================================================ */
/* --- Função Principal --- */

int main() {
    SetConsoleOutputCP(65001); /*para acentuação*/
    /* Exemplo de aula: */
    //int v[NUM] = {}; /* declarando = {} inicializa todos os elementos do vetor com 0*/
    /* func(v, 5); */
    

    /* Exercício resolvido: você foi encarregado de projetar um voltímetro com a função TRUE RMS.
    Primeiramente, você deve projetar uma função em C que receba o número de pontos de tensão no 
    domínio discreto para o cálculo dos Vrms, conforme equação:
    V_rms = \sqrt{\frac{1}{N} \sum_{i=0}^{N-1} v^2(i)}
    sendo N o número de amostras do sinal de tensão.
    */
    //float V[5] = {1.5, 3.8, 4.9, 5.7, 2.1};
    /* printf("V_rms = %.4f V\n", true_rms(V, 5)); */


    /*
    Exercício proposto: um processador deve receber diversos bytes e realizar uma conversão
    criptografada dos mesmos. A criptografia será somar 5 aos elementos pares do vetor e 
    subtrair 3 dos elementos ímpares.
    Conversão Decimal em Hexadecimal:
    Dec: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17...
    Hex: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, A,  B,  C,  D,  E,  F,  10, 11... 
    Para escrever números hexadecimais em C deve-se iniciar o número com 0x(numero hex)
    */
    /* Inicio: testes com números em hexadecimal e decimal */
    //int valor = 0xA2;
    //int acrescimo = 10;
    //printf("Valor em hexadecimal: %X\n", valor);
    //printf("Valor em decimal: %d\n", valor);
    //printf("Somando o decimal %d no valor hexadecimal: %X\n", acrescimo,valor+acrescimo);
    //printf("Resultado da soma em decimal: %d\n",valor+acrescimo);
    /* Fim: testes com números em hexadecimal e decimal */

    int N;
    puts("Entre com o número inteiro de bytes a serem criptografados:");
    scanf("%d", &N);
    printf("O vetor conterá %d bytes!\n", N);
    int vet_in[N];
    int vet_crypt[N];
    register int i;
    for(i=0;i<N;i++){
        printf("Entre com o valor em hexadecimal do byte %d:\n", i+1);
        scanf("%X",&vet_in[i]);
        vet_crypt[i] = crypto(vet_in[i]);
    }
    puts("Valores armazenados:");
    for(i=0;i<N;i++){
        printf("vet_in[%d] = %X\n", i, vet_in[i]);
    }

    puts("Valores encriptados:");
    for(i=0;i<N;i++){
        printf("vet_crypt[%d] = %X\n", i, vet_crypt[i]);
    }

    puts("Valores decriptados:");
    vet_dcrypto(vet_crypt, N);

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

int vet_dcrypto(int vet[], int num_bytes){
    register int i;
    for(i=0;i<num_bytes;i++){
        int resto = vet[i] % 2;
        !resto ? (vet[i] += 3) : (vet[i] -= 5);
        printf("vet_dcrypt[%d] = %X\n", i, vet[i]);
    }
    return 0;
}

int crypto(int valor){
    int resto = valor % 2;
    !resto ? (valor += 5) : (valor -= 3);
    return valor;
}

/* ============================================================================================ */