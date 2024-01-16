#include <stdio.h>

int main(){
 int numero;
 int numeroo;

 printf("dimmi un numero\n");
 scanf("%d", &numero);
 printf("dimmi un altro numeroo\n");
 scanf("%d", &numeroo);

    if(numero % numeroo == 0){
        printf("numeri sono multipli, non sto a capi nulla");
    }
    else if (numero % numeroo > 0) {
        printf("i due numeri non sono divisibili per dio");
    }
    return(0);

}