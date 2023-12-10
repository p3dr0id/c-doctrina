#include <stdio.h>
#include "funcao.h"

extern int var_global1,
           var_global2,
           var_global3;

void resultado_soma(){
    int soma;

    soma = var_global1 + var_global2 + var_global3;

    printf("Soma = %d\n", soma);
}