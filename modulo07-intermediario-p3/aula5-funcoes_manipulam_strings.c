/* ============================================================================================
Titulo da aula: Funções que Manipulam Strings

Autor: Pedro Dias Pinto
Data 21/12/2023
===============================================================================================*/

/* ============================================================================================ */
/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> /*para usar a função isdigit()*/

/* ============================================================================================ */
/* --- Variáveis Globais e Constantes --- */


/* ============================================================================================ */
/* --- Protótipo das Funções --- */
int strlen(char *s);
int strvowel(char *s);
char *strcpy(char *dest, char *orig);
char *strcat(char *dest, char *orig);
char *strrev(char *str);
int strcmp(char *s1, char *s2);
int strnumb(char *s);

/* ============================================================================================ */
/* --- Função Principal --- */

int main() {
    
    char str1[50] = "Pedro Dias";
    char comando[10];
    printf("Tamanho da string 1: %d\n", strlen(str1));
    printf("Numero de vogais da string 1: %d\n", strvowel(str1));

    strcpy(str1, "Olga Lopes");
    printf("%s\n", str1);

    printf("%s\n", strcat(str1, " Pinto"));

    printf("%s\n", strrev(str1));

    printf("%d\n", sizeof(str1));

//    printf("Digite o comando: ");
//    gets(comando);
//    if(strcmp(comando, "BIP")){
//        puts("Comando BIP executado");
//        printf("\a");
//    } 
//
    printf("%d\n", strnumb("Batatinha 123"));

    /*
    Exercício proposto: desenvolva o projeto de um interpretador para as seguintes instruções:
    RUN - rodar o interpretador.
    RUN SOUND - rodar o interpretador com "bips"
    TXT - comando para entrada de nova frase. O argumento é a frase-texto que o usuário quiser
    que o interpretador rode pelo número de repetições definido.
    REP - define o número de repetições de uma frase salva previamente com o comando TXT.
    Recebe como argumento o número de repetições desejadas.
    CLEAR - limpa a tela do console.
    CLEAR ALL - limpa a tela e restaura variáveis.
    EXIT - encerra o interpretador.
    HELP - apresenta a versão atual do interpretador e breve explicação sobre os seus comandos
    */
    char txt[20] = "----";
    int rep = 1;

    while(1){
        printf("Entre com um comando: ");
        gets(comando);

        if(strcmp(comando,"HELP")){
            puts("PDP Interpretador Simples V1.0\n");
            puts("Comandos:");
            puts("RUN           roda o interpretador");
            puts("RUN SOUND     roda o programa com \"bips\"");
            puts("REP           numero de repeticoes, arg: 1 a 999");
            puts("TXT           atualiza o texto, arg: qualquer texto");
            puts("CLEAR         limpa a tela sem perder os dados");
            puts("CLEAR ALL     limpa a tela e apaga os dados");
            puts("EXIT          finaliza o interpretador");

        }
        else if(strcmp(comando,"EXIT")) break;
        else if(strcmp(comando, "CLEAR")) system("cls");
        else if(strcmp(comando, "RUN")){
            register int i;
            for(i=0; i<rep; i++) printf("%s\n", txt);
        }
        else if(strcmp(comando, "REP")){
            int valor;
            printf("_");
            scanf("%d", &valor);
            getchar(); /*sem o getchar() a string "Entre com um comando" aparece repetida (Verificar o porque)*/
            if(valor>=1 && valor<=999) rep = valor;
            else puts("O valor digitado deve estar entre 1 e 999");
            
        }
        else if(strcmp(comando, "TXT")){
            printf("_");
            gets(txt);
        }
        else if(strcmp(comando, "CLEAR ALL")){
            strcpy(txt, "----");
            rep = 1;
            system("cls");
        }
        else if(strcmp(comando, "RUN SOUND")){
            putchar('\a');
            register int i;
            for(i=0; i<rep; i++) printf("%s\n", txt);
        }
        else puts("Comando invalido!");

    }

    return 0;
} /* end main */

/* ============================================================================================ */
/* --- Desenvolvimento das Funções --- */
int strlen(char *s){
    register int i = 0;

    while(s[i] != '\0') i++;
    return i;
}

int strvowel(char *s){
    register int i = 0,
             vowel = 0;

    while(s[i] != '\0'){

        switch (s[i]){
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
            vowel++;
    
        }/*end switch*/
        i++;
    }/*end while*/
    return vowel;
}/*end strvowel*/

char *strcpy(char *dest, char *orig){
    register int i;

    for(i=0; orig[i]!='\0'; i++) dest[i] = orig[i];

    dest[i] = '\0';

    return dest;
}

char *strcat(char *dest, char *orig){
    register int i = 0,
                 len = strlen(dest);

    while((dest[i+len] = orig[i])) i++; /*o while encerrará quando for atribuído o caracter nulo para a string dest*/

    return dest;
}

char *strrev(char *str){
    register int i, len;
    char aux;

    for(i=0, len=strlen(str)-1; i<len; i++, len--){
        aux = str[i];
        str[i] = str[len];
        str[len] = aux;
    }/*end for*/
    return str;
}

int strcmp(char *s1, char *s2){
    register int i = 0;
    while(s1[i] == s2[i] && s1[i]!='\0') i++;
    
    return !((unsigned char)s1[i] - (unsigned char)s2[i]);
    /*o resultado negado da expressão entre parênteses é 1 quando as strings são iguais e zero quando são diferentes*/
}

int strnumb(char *s){
    register int i, num = 0;

    for(i=0; s[i] !='\0'; i++){
        if(isdigit(s[i])) num++ ;
    }
    return num;
}

/* ============================================================================================ */