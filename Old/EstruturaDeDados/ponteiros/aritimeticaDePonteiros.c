#include <stdio.h>

int main(){

    char a = 'a';
    int b = 5;

//devemos informar o tipo de dado ao declarar o ponteiro para q o compilador saiba qual tipo
//de dado ele está lidando
    void *pt_a = &a;
    void *pt_b = &b;
//teoricamente podemos utilizar "void" para apontar o ponteiro, isso diz para o compilador que
//ele pode apontar para qualquer tipo de dado, mas ao tentar alterar o valor para o qual 
//ele aponta, há um erro de compilacao

//  *pt_a = 'z';

    int v[4] = {25,14,30,47};

    int len = sizeof(v)/sizeof(v[0]);

    for (int i = 0; i < len; i++)
    {
        printf("v[%d]: %d\n",i,*(v + i));    
    }

//basicamente o v é o vetor, e o ponteiro *v aponta pra v[0], se usarmos *(v+i), mudamos para o
//endereço no qual o ponteiro está apontando, podendo percorrer o vetor usando os indices dele 
        
    return 0;
}