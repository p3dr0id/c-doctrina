/* ============================================================================================
Titulo da aula: Aritmética de Ponteiros

Autor: Pedro Dias Pinto
Data 26/12/2023
===============================================================================================*/

/* ============================================================================================ */
/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>

/* ============================================================================================ */
/* --- Variáveis Globais e Constantes --- */
#define LEVELS 16
int cnt = 0;
char *ptr1, *ptr2, stk[LEVELS];

/* ============================================================================================ */
/* --- Protótipo das Funções --- */
void disp_stk();
void push(char i);
char pop();

/* ============================================================================================ */
/* --- Função Principal --- */

int main() {
    short var = 7;
    short *ptr;
    ptr = &var;

    printf("%p\n", &var);
    printf("%p\n", ptr);

    ptr++; /*incrementa para o próximo local de memória (dois bytes após &var pois var é do tipo short)*/
    printf("%p\n", ptr);
    /*para confirmar a operação podemos tomar a diferença:*/
    printf("%d\n", (int)ptr-(int)&var);

    puts("Aritmetica com ponteiro de vetores:");

    short vec1[3] = {12, 13, 14};
    long vec2[3] = {22, 23, 24};
    short *p1 = NULL;
    long *p2 = NULL;
    register int i;

    p1 = vec1;
    p2 = vec2;

    *p1 = 2;
    for(i=0;i<3;i++) printf("%hd\n",vec1[i]);

    for(i=0;i<3;i++){
        *(p1+i) = 2*i;
        *(p2+i) = 3*i;
    }

    puts("vec1 vec2");

    for(i=0;i<3;i++) printf("%2d %2ld\n", vec1[i], vec2[i]);

    /*
    Exercício proposto: projete uma pilha de memória em C que contenha 16 níveis, onde cada nível irá,
    armazenar um byte. Para mostrar a pilha, os endereços e dados devem ser apresentados no formato
    hexadecimal.
    */
    int opt;
    char data_stk;

    ptr1 = stk;
    ptr2 = stk;

    while(1){
        puts("1- mostrar pilha");
        puts("2- inserir um dado");
        puts("3- remover dado atual");
        puts("4- sair");
        printf(">>> ");
        scanf("%d", &opt);

        switch(opt){
            case 1:
                disp_stk();
                break;
            case 2:
                puts("Digite um dado: ");
                scanf(" %c", &data_stk);
                push(data_stk);
                break;
            case 3:
                pop();
                break;
            case 4:
                exit(0);
        
        }/*end switch*/
        system("cls");
    }



    return 0;
} /* end main */

/* ============================================================================================ */
/* --- Desenvolvimento das Funções --- */

void disp_stk(){
    register int i;
    if(cnt==0) puts("Stack Empty");

    for(i=0;i<cnt;i++) printf("Level: %X, Memory Adress: %p, Value: %c\n", i,&stk[i], stk[i]);
    system("pause");
}

void push(char value){
    register long t; /*variável para iterar o tempo de delay*/

    if(ptr1 == (ptr2+LEVELS)){ /*compara o endereço de ptr1 com o endereço do limite da pilha*/
        puts("Stack Overflow!");
        exit(0);
    }/*end if*/
    else{
        puts("Added");
        for(t=0;t<1e8;t++);
        *ptr1 = value;
    }
    ptr1++; /*a cada entrada incrementa o endereço apontado por ptr1*/
    cnt++;  /*incrementa o contador de dados*/
}

char pop(){
    register long t;

    if(ptr1 == ptr2){
        puts("Stack Empty");
        system("pause");
    }
    else{
        puts("Removed");
        for(t=0;t<1e8;t++);
        ptr1--;
        cnt--;
    }
    return *(ptr1+1);
}

/* ============================================================================================ */