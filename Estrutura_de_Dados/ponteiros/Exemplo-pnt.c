#include <stdio.h>

void main()
{   
    int a = 5;
    int *pt_1 = &a;

    printf("o que tem na variavel a: %d\n",a);
    printf("o que tem no ponteiro pt_1: %d\n",pt_1);
    printf("o que tem no ponteiro *pt_1: %d\n",*pt_1);

}