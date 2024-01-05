/* ============================================================================================
Titulo da aula: Operações Bit a Bit

Autor: Pedro Dias Pinto
Data 31/12/2023
===============================================================================================*/
/*
Conversão Hexadecimal em Binário:
Hexadecimal (h)     Binário (b)
0h                  0000b
1h                  0001b
2h                  0010b
3h                  0011b
4h                  0100b
5h                  0101b
6h                  0110b
7h                  0111b
8h                  1000b
9h                  1001b
Ah                  1010b
Bh                  1011b
Ch                  1100b
Dh                  1101b
Eh                  1110b
Fh                  1111b

Operadores bit a bit:

Operador    Descrição
~           Inversão de bits, complementa todos os bits, o que é 0 vira 1 e vice versa.
>>          Deslocamento a direita (shift right). Desloca todos os bits para direita, de acordo com o número utilizado
<<          Deslocamento a esquerda (shift left). ||
&           Operação E (AND) bit a bit.
^           Operação OU-Exclusivo (XOR) bit a bit.
|           Operação OU (OR) bit a bit.

*/


/* ============================================================================================ */
/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>

/* ============================================================================================ */
/* --- Variáveis Globais e Constantes --- */

/* ============================================================================================ */
/* --- Estruturas --- */

typedef enum {
    AND,
    OR,
    XOR
} oper;

typedef enum{
    left,
    right
}shift;

struct{
    /*definição de um campo de bits onde cada port P armazena 1 bit*/
    unsigned P0 : 1;
    unsigned P1 : 1;
    unsigned P2 : 1;
    unsigned P3 : 1;
    unsigned P4 : 1;
    unsigned P5 : 1;
    unsigned P6 : 1;
    unsigned P7 : 1;
} PORT;

struct dados_sensor{
    unsigned char protocolo : 4;
    unsigned char erro      : 2;
    unsigned char sinal     : 1;
    unsigned char unidade   : 1;
    signed char temperatura;
}campo;

/* ============================================================================================ */

/* --- Protótipo das Funções --- */
char *hextobin(unsigned char hex);
int bintohexa(char bin[]);
void logic_bitbit(unsigned char byte1, oper op, unsigned char byte2);
void desloca_bits(unsigned char byte, shift direction, int num);
unsigned char *sensor_hextobin(unsigned int hex);
int sensor_bintohexa(unsigned char bin[]);
/* ============================================================================================ */

/* --- Função Principal --- */

int main() {
    /*
    unsigned char reg1 = 0x27; 
    unsigned char reg2 = 0x64;
    logic_bitbit(reg1, AND, reg2);
    logic_bitbit(reg1, OR, reg2);
    logic_bitbit(reg1, XOR, reg2);

    desloca_bits(reg1, right, 1);
    desloca_bits(reg1, left, 1);
    */

   // unsigned char outp; 
   // /*Inicialização dos ports. Por padrão os PORTs não inicializados tem o valor 0*/
   // PORT.P0 = 1;
   // PORT.P6 = 1;
   // 
   // puts("Passo a passo da composicao do PORT:");
   // printf("%.2X (hex)\n", PORT.P0);
   // printf("%s (bin)\n", hextobin(PORT.P0));
   // printf("%.2X (hex)\n", PORT.P1<<1);
   // printf("%s (bin)\n", hextobin(PORT.P1<<1));
   // printf("%.2X (hex)\n", PORT.P2<<2);
   // printf("%s (bin)\n", hextobin(PORT.P2<<2));
   // printf("%.2X (hex)\n", PORT.P3<<3);
   // printf("%s (bin)\n", hextobin(PORT.P3<<3));
   // printf("%.2X (hex)\n", PORT.P4<<4);
   // printf("%s (bin)\n", hextobin(PORT.P4<<4));
   // printf("%.2X (hex)\n", PORT.P5<<5);
   // printf("%s (bin)\n", hextobin(PORT.P5<<5));
   // printf("%.2X (hex)\n", PORT.P6<<6);
   // printf("%s (bin)\n", hextobin(PORT.P6<<6));
   // printf("%.2X (hex)\n", PORT.P7<<7);
   // printf("%s (bin)\n", hextobin(PORT.P7<<7));
   // 
   // outp = PORT.P0      |
   //        PORT.P1 << 1 |
   //        PORT.P2 << 2 |
   //        PORT.P3 << 3 |
   //        PORT.P4 << 4 |
   //        PORT.P5 << 5 |
   //        PORT.P6 << 6 |
   //        PORT.P7 << 7 ;

   // puts("Resultado da composicao de bits:");
   // printf("%.2X (hex)\n", outp);
   // printf("%s (bin)\n", hextobin(outp));
    
    /*
    Exercício proposto: um sensor digital de temperatura pode ler valores na faixa de -255 a 255
    (Celsius ou Fahrenreit) e envia dados seriais a partir do protocolo ilustrado abaixo, no formato
    de 2 bytes. Os primeiros 4 bits do byte mais significativo consistem na informação do protocolo
    em si, padrão definido em Ah. Os 2 bits seguintes consistem nos indicadores de erro (sensor fora
    do range, falha na comunicação, etc) e estarão em 0 quando estiver tudo ok. O próximo bit é o de
    sinal, que será 0 para o positivo e 1 para o negativo. Após vem o bit de unidade, que será 0 para
    Celcius e 1 para Fahrenheit. O byte menos significativo é reservado para o valor da temperatura
    em si. 
    |   protocolo   | erro  |sig|uni|         temperatura           |
    | 1 | 0 | 1 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 1 | 0 | 0 | 1 | 0 |
    
    projete um software para ler os dois bytes no formato hexadecimal, onde você entra com o valor
    A012h e no console será impresso 18 graus Celsius, ou a temperatura que for verificada, de acordo
    com os bytes recebidos do sensor hipotético.
    */

    char input[5];
    unsigned int valor_hex;
    puts("Digite um valor para medida em hexadecimal (ex: A012): ");
    scanf("%4s", input); /*lê até 4 caracteres evitando estouro de buffer*/
    printf("Valor lido em hex: %s\n", input);

    /*Converte a string em hexadecimental para um valor inteiro:*/
    sscanf(input, "%x", &valor_hex);
    printf("Valor lido em bin: %s\n", sensor_hextobin(valor_hex));

    /*Extraindo o byte mais significativo e o menos significativo:*/
    unsigned char byte_sup = (valor_hex >> 8) & 0xFF; /*desloca os 8 bits mais signigicativos para o final e filtra utilizando a máscara 0xFF*/
    unsigned char byte_inf = valor_hex & 0xFF; /*filtra os 8 bits menos significativos e zera o byte mais significativo*/
    
    printf("byte_sup hex: %.2X\n", byte_sup);
    printf("byte_sup bin: %s\n", hextobin(byte_sup));

    printf("byte_inf hex: %.2X\n", byte_inf);
    printf("byte_inf bin: %s\n", hextobin(byte_inf));

    campo.protocolo = (byte_sup >> 4) & 0x0F;
    campo.erro = (byte_sup >> 2) & 0x03;
    campo.sinal = (byte_sup >> 1) & 0x01;
    campo.unidade = byte_sup & 0x01;
    campo.temperatura = byte_inf; 

    /*Mostrando as informações*/
    printf("Protocolo (hex): %.2X\n", campo.protocolo);
    printf("Protocolo (bin): %s\n", hextobin(campo.protocolo));
    printf("Erro (hex): %.2X\n", campo.erro);
    printf("Erro (bin): %s\n", hextobin(campo.erro));
    printf("Sinal (hex): %.2X\n", campo.sinal);
    printf("Sinal (bin): %s\n", hextobin(campo.sinal));
    printf("Unidade (hex): %.2X\n", campo.unidade);
    printf("Unidade (bin): %s\n", hextobin(campo.unidade));
    printf("Temperatura (hex): %.2X\n", campo.temperatura);
    printf("Temperatura (bin): %s\n", hextobin(campo.temperatura));

    /*Testando se existe algum erro*/
    if(campo.erro) puts("Falha na aquisicao de dados!");
    else{
        /*Verificando o sinal o calculando a temperatura*/
        int temperatura = (campo.sinal==0) ? campo.temperatura : -campo.temperatura;
        /*Imprimindo o resultado de medição*/
        printf("Temperatura: %d graus %s\n", temperatura, (campo.unidade==0) ? "Celsius" : "Fahrenheit");
    }

    return 0;
} /* end main */

/* ============================================================================================ */
/* --- Desenvolvimento das Funções --- */
char *hextobin(unsigned char hex){
    static char result[9];
    register int i;
    /*mascara de bits (preserva determinada quantidade de bits em um byte):*/
    for(i=7;i>=0;i--) result[7-i] = (hex>>i) & 1 ? '1' : '0'; 
    result[8] = '\0';
    return result;
}

int bintohexa(char bin[]){
    unsigned short result = 0;
    register int i;
    for(i=0;i<8;i++) result |= (int)(bin[i]-'0') << (7 - i);
    
    return result;

}

void logic_bitbit(unsigned char byte1, oper op, unsigned char byte2){
    unsigned char result;
    printf("byte1 (hex): %.2X\n", byte1);
    printf("byte1 (bin): %s\n", hextobin(byte1));
    printf("byte2 (hex): %.2X\n", byte2);
    printf("byte2 (bin): %s\n", hextobin(byte2));
    switch(op){
        case AND:
            puts("Operacao logica AND");
            result = byte1 & byte2;
            printf("byte1 & byte2 (hex): %.2X\n", result);
            printf("byte1 & byte2 (bin): %s\n", hextobin(result));
            break;
        case OR:
            puts("Operacao logica OR");
            result = byte1 | byte2;
            printf("byte1 | byte2 (hex): %.2X\n", result);
            printf("byte1 | byte2 (bin): %s\n", hextobin(result));
            break;
        case XOR:
            puts("Operacao logica XOR");
            result = byte1 ^ byte2;
            printf("byte1 ^ byte2 (hex): %.2X\n", result);
            printf("byte1 ^ byte2 (bin): %s\n", hextobin(result));
            break;
        default:
            puts("Operacao logica bit a bit nao suportada.");
    }

}

void desloca_bits(unsigned char byte, shift direction, int num){
    unsigned char result;
    printf("byte (hex): %.2X\n", byte);
    printf("byte (bin): %s\n", hextobin(byte));
    switch(direction){
        case right:
            puts("Operacao deslocamento para direita:");
            result = byte >> num;
            printf("byte (hex): %.2X >> %d = %.2X\n", byte, num, result);
            printf("byte (bin): %s >> %d = ", hextobin(byte), num);
            printf("%s\n", hextobin(result));
            break;
        case left:
            puts("Operacao deslocamento para esquerda:");
            result = byte << num;
            printf("byte (hex): %.2X << %d = %.2X\n", byte, num, result);
            printf("byte (bin): %s << %d = ", hextobin(byte), num);
            printf("%s\n", hextobin(result));
            break;
        default:
            puts("Operacao nao suportada");
    }

}

unsigned char *sensor_hextobin(unsigned int hex){
    static unsigned char result[17];
    register int i;
    /*mascara de bits (preserva determinada quantidade de bits em um byte):*/
    for(i=15;i>=0;i--) result[15-i] = (hex>>i) & 1 ? '1' : '0'; 
    result[16] = '\0';
    return result;
}

int sensor_bintohexa(unsigned char bin[]){
    unsigned short result = 0;
    register int i;
    for(i=0;i<16;i++) result |= (int)(bin[i]-'0') << (15 - i);
    
    return result;

}
 
/* =//=========================================================================================== */