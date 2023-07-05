#include <stdio.h>

int soma(int x, int y);//assinatura da funcao 

int main(){
    printf("2 + 2 = %d", soma(2,2));//chamada da funcao
    return 0;
}

int soma(int x, int y){ //definicao da funcao
    return x + y;
}