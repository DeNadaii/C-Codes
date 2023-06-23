// Dado que podemos calcular ex por:
//  e^x = 1 + x + x2/2! + x3/3! + ...
// Fazer um trecho de programa em "C" que lê um valor para x e calcula o valor de
// e^x. O valor deve ser calculado enquanto o termo calculado for maior que 10E-6.
#include <stdio.h>
#include <stdlib.h>

int calculaPotencia(int x, int n)
{
    int pot = x;

    if (n == 0)
    {
        return 1;
    }
    if (n == 1)
    {
        return x;
    }
    else
    {
        for (int i = 1; i < n; i++)
        {
            pot *= x;
        }
    }
    return pot;
}

int fatorial(int a)
{

    int result = 1;

    for (int i = a; i > 0; i--)
    {
        result *= i;
    }
    return result;
}
int main()
{

    long double VALORMIN = 0.0000006;
    float x = 4;
    float parcela;
    float resultado;

    int i = 1;
    do
    {
        parcela = ((float)calculaPotencia(x, i)) / fatorial(i);
        resultado = resultado + parcela;
        printf("parcela [%d]: %f \n", i, parcela);
        i++;

    } while (parcela > VALORMIN);

    float resultadoFinal = x + resultado;
    printf("resultado : %f \n", resultadoFinal);

    return 0;
}