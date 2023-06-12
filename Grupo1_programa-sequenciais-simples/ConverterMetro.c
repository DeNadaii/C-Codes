// Fazer um programa em C que pergunta um valor em metros e imprime o
// correspondente em decímetros, centímetros e milímetros.
#include <stdio.h>

int main()
{

    float Metros, dm, cm, mm;

    printf("Digite o valor em metros \n");
    scanf("%f", &Metros);

    dm = Metros * 10;
    cm = Metros * 100;
    mm = Metros * 1000;

    printf("%.2f Metros equivale a %.2f em DM,%.2f em CM, %.2f em MM", Metros, dm, cm, mm);

    return 0;
}