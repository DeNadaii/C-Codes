#include <stdio.h>
#define True 1
#define False 0

//o pre processamento define que o conjunto de caracters (TRUE) deve ser interpretado como 1
//e (FALSE) como 0

int main(){

    int x;

    printf("digite um ou zero: ");
    scanf(" %d",&x);
    if(x==1){
        printf("%d\n",True);
    }
    else{
        printf("%d\n",False);
    }

    return 0;
}