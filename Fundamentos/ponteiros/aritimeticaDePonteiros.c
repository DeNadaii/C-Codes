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

    int v[] = {0,1,2,3};
    int *pt_v;
    pt_v = v;
    printf("%d",v);
    //*pt_v = 6;


    // for (int i = 0; i < 4; i++)
    // {
    //     printf("");
    // }
    

    // printf("\n%d",pt_v);
    // pt_v = pt_v + 1;
    // printf("\n%d",pt_v);

    return 0;
}