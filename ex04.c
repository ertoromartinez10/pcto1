#include <stdio.h>

int main(){
    int a;
    int b;
    printf("qual'è più grande\n");
    scanf("%d", &a);
    scanf("%d", &b);
   if (a<b){ 
    printf("il primo numero è minore del primo\n");
   }
    else if (b<a){
        printf("il secondo numero è minore del primo\n");
    }

return(0);

   }

 
