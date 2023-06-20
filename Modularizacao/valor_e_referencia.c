#include <stdio.h>

void trocaPorValor(int x, int y)
{
    int aux;
    aux = x;
    x = y;
    y = aux;
}
void trocaPorReferencia(int *x, int *y)
{
    int aux;
    if (x != NULL && y != NULL)
    {             // se endereços forem válidos
        aux = *x; // faz a troca
        *x = *y;
        *y = aux;
    }
}

int main()
{

    int v1 = 5, v2 = 10;
    printf("Antes troca por valor: v_1 = %d e v_2 = %d\n", v1, v2);
    trocaPorValor(v1, v2);
    printf("Depois troca por valor: v_1 = %d e v_2 = %d\n", v1, v2);

    printf("Antes troca referencia: v_1 = %d e v_2 = %d\n", v1, v2);
    trocaPorReferencia(&v1, &v2);
    printf("Depois troca referencia: v_1 = %d e v_2 = %d\n", v1, v2);
    exit(0);
}
