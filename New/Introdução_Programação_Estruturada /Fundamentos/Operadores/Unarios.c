#include <stdio.h>
#include <stdbool.h>

int main(){
    
    int a = 5;
    int b = 10;

    //++a e --a faz a operacao antes de imprimir
    printf("a = %d\n",a);
    printf("a = a + 1 -> %d\n",(++a));
    printf("a = %d\n",a);
    printf("a = a - 1 -> %d\n",(--a));
    //b++ e b-- faz a operacao depois de imprimir
    printf("\nb = %d\n",b);
    printf("b = b - 1 -> %d\n",(b--));
    printf("b = %d\n",b);
    printf("b = b + 1 -> %d\n",(b++));

    printf("\n++a --> %d\n",(++a));
    printf("b-- --> %d\n",(b--));
    printf("b = %d\n",b);
    printf("--b -->%d\n", (--b));

    printf("++a == b-- ? --> %d\n",(++a == b--));
    printf("++a == --b ? --> %d\n",(++a == --b));

    return 0;
}