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
    int limite = vet_size - 1;
    int ultima_troca;

    do
    {
        ultima_troca = 0;

        for (int i = 0; i < limite; i++)
        {
            //para virar um decrescente, basta mudar esse sinal
            if (vet[i] < vet[i + 1])
            {
                trocar(&vet[i], &vet[i + 1]);
                ultima_troca = i + 1;
            }
        }

        limite = ultima_troca;

    } while (limite > 0);

    for (int i = 0; i < vet_size; i++)
    {
        printf("[%d], ", vet[i]);
    }

    return 0;
}