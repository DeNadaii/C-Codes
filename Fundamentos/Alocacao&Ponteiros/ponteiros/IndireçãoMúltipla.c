#include <stdio.h>
//indireção multipla é basicamente a ideia de um ponteiro aponta pra outro ponteiro 


int main(){

    int a = 10;
    int *pt1 = &a;
    int **pt2 = &pt1;

    //endereços
    printf("end de a: %p\n", &a);
    printf("end do pt1: %p\n", &pt1);
    printf("end do pt2: %p\n", &pt2);
    //conteudo dos endereços
    printf("end apontado por pt1: %p\n", pt1);
    printf("end apontado por pt2: %p\n", pt2);
    printf("valor no endereço de a: %d\n", **pt2);

    return 0;
}