#include <stdio.h>

int main(){

    //casting é usado para converter um tipo em outro
    double a = 1.12345678910;
    printf("double (a): %.15f\n",a);

    float b = (float)a;
    printf("double para float(b): %f\n",b);

    double e = 1.99999;
    printf("double (e): %.5f\n",e);

    int i = (int)e;
    printf("double para int(e): %d\n",i);

    return 0;
}