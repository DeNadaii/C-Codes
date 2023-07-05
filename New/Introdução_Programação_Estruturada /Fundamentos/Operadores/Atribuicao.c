#include <stdio.h>

int main(){

    int a = 5;
    int b = 10;
    int c = a + b;

    printf("c = c + b: %d\n",(c += b));
    printf("c = c - b: %d\n",(c -= b));
    printf("c = c * b: %d\n",(c *= b));
    printf("c = c / b: %d\n",(c /= b));
    printf("c = c (resto) b: %d\n",(c %= b));

    return 0;
}