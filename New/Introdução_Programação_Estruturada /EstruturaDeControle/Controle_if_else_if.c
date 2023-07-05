#include <stdio.h>
#include <stdbool.h>

int main()
{

    int numero = 0;

    if (numero > 5 && numero < 10)
    {
        printf("numero valido");
    }
    else if (numero > 0)
    {
        printf("numero invalido porem maior q zero");
    }
    else
    {
        printf("numero menor q zero");
    }
}
