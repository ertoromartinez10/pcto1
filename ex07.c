#include <stdio.h>

int main(){
float c;

printf("dimmi una temperatura in c\n");
scanf("%f", &c);

if( c <= -273.15){
    printf(" temperatura impossibile\n");
}
 else {
    printf(" temperatura in far è %f \n",(9/5) * c + 32);
    printf(" temperatura in kel è %f \n",c + 273.15 );
    
    }
}







