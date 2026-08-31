//Em c, existem 3 tipos de escopos:
//Global, local e parâmetros formais
#include <stdio.h>

int num = 3;//escopo global 

void imprime(int i){//variavel parametro formal
    // o parametro pode ser alterado 
    //na pratica, cria uma copia do parametro q pode ser manipulado
    i += i;
    printf("imprime o parametro: %d\n",i);
}

int main(){
    
    int num = 5;//escopo local
    
    //podem ter o mesmo nome, porem dentro de uma sub-rotina
    //a var de escopo local se sobrepoe
    printf("num = %d\n", num);
    imprime(num);

    return 0;
}