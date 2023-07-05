#include <stdio.h>

int sum(int a, int b){
    return a + b;
}

int main(){

    int a = 10;
    int b = 5;
    int *ponteiro_a = &a;
    int *ponteiro_b = &b;

    //aqui o programa faz uma "copia" do conteudo de a e b
    printf("sum %d + %d = %d\n",a,b,sum(a,b));
    //nesse caso, é passado o ponteiro das variaveis
    printf("sum %d + %d = %d\n",a,b,sum(*ponteiro_a,*ponteiro_b));

    return 0;
}