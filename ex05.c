#include <stdio.h>

int main(){

int eta;
int etaPatente;

printf("a che eta puoi prendere la patente nel tuo paese\n");
scanf("%d", &eta);

printf("quanti anni hai\n");
scanf("%d", &etaPatente);

if (eta > etaPatente) {
    printf("puoi prendere la patente\n");

}

else if ( eta < etaPatente){
printf("non puoi guidare cugg\n");

}



 return(0);
}



