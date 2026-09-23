#include <stdio.h>

void trocar(int *a, int *b)
{
    int aux = *a;
    *a = *b;
    *b = aux;
}

int main()
{
    int vet[4] = {5, 2, 8, 1};
    int vet_size = sizeof(vet) / sizeof(vet[0]);
    int end_menor_numero;
    int comeco = 0;

    do{
        end_menor_numero = comeco;
        for (int i = comeco; i < vet_size; i++)
        {
            if (vet[i] < vet[end_menor_numero])
            {
                end_menor_numero = i;
            }
        }
        printf("[%d]\n", vet[end_menor_numero]);

        trocar(&vet[comeco], &vet[end_menor_numero]);

        comeco++;

    } while (comeco < vet_size);

    for (int i = 0; i < vet_size; i++)
    {
        printf("[%d]", vet[i]);
    }
    printf("\n");

    return 0;
}