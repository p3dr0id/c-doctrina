/* ===========================================================================================

Titulo da aula: laço do-while

Autor: Pedro Dias Pinto
Data 07/12/2023

==============================================================================================*/

/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>

/* Função Principal */

int main() {

    /*
    Exercício proposto: desenvolva o projeto em C que consiste em um sistema de menus de um
    cadastro de cliente. O sistema deve apresentar as seguintes opções:
    - N para Novo Cliente;
    - C para Consultar Clientes;
    - D para Deletar Clientes;
    - L para Listar Clientes;
    - S para Sair.
    A entrada deverá aceitar maiúsculas e minúsculas. Ao acessar o menu, o resultado será
    meramente ilustrativo, imprimindo na tela o menu hipotético acessado.
    */

    /*
    OBS: a função puts("texto") é uma versão simplificada da função printf() que imprime uma
    string na tela e insere automaticamente uma nova linha. Pode ser utilizada quando não há
    interesse em imprimir em conjunto o conteúdo de variáveis.
    */

    char opc; 

    do{
        printf("(N) Novo Cliente.\n");
        printf("(C) Consultar Clientes.\n");
        printf("(D) Deletar Clientes.\n");
        printf("(L) Listar Clientes.\n");
        printf("(S) Sair.\n");
        scanf(" %c", &opc);

        system("clear"); /*apaga sempre para não acumular no terminal o menu*/

        switch(opc){
            case 'n':
            case 'N': puts("Insira o nome do novo cliente:"); break;
            case 'c':
            case 'C': puts("Insira pelo menos 3 caracteres para efetuar a consulta:"); break;
            case 'd':
            case 'D': puts("Insira o nome do cliente a ser deletado:"); break;
            case 'l':
            case 'L': puts("Clientes cadastrados na base:"); break;
            case 's':
            case 'S': puts("Saindo do sistema."); break;
        }/*end switch*/
    } while(opc!='s' && opc!='S');

    return 0;
} /* end main */