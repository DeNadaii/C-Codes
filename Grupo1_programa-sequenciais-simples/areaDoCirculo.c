#include<stdio.h>

int main(){

    double pi,R;

    pi = 3.14;

    printf("diga o raio do circulo\n");
    scanf("%lf", &R);

    double area = pi *(R*R);
    double circunferencia = 2*pi*R;

    printf("area: %.2lf \n", area);
    printf("circunferencia: %.2lf \n", circunferencia);

    return 0;
}