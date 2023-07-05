#include <stdio.h>

void troca (int *p, int *q)
{
   int temp;
   temp = *p; 
   *p = *q; 
   *q = temp;
}

int main(){

    int a = 10;
    int b = 5;
    int *ponteiro_a = &a;
    int *ponteiro_b = &b;

    printf("valor de a = %d,valor de b = %d\n",a,b);

    troca (ponteiro_a, ponteiro_b);

    printf("valor de a = %d,valor de b = %d\n",a,b);

    return 0;
}