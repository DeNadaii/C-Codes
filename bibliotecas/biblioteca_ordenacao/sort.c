#include "sort.h"

void trocar(int *a, int *b)
{
    int aux = *a;
    *a = *b;
    *b = aux;
}

void bubble_sort(int vet[], int tamanho)
{
    int vet_size = sizeof(vet) / sizeof(vet[0]);
    int limite = vet_size - 1;
    int ultima_troca;
    do
    {
        ultima_troca = 0;

        for (int i = 0; i < limite; i++)
        {
            // para virar um decrescente, basta mudar esse sinal
            if (vet[i] < vet[i + 1])
            {
                trocar(&vet[i], &vet[i + 1]);
                ultima_troca = i + 1;
            }
        }

        limite = ultima_troca;

    } while (limite > 0);
};
void selection_sort(int vet[], int tamanho)
{
    int vet_size = sizeof(vet) / sizeof(vet[0]);
    int end_menor_numero;
    int comeco = 0;

    do
    {
        end_menor_numero = comeco;
        for (int i = comeco; i < vet_size; i++)
        {
            // para virar descresvente, basta mudar esse sinal
            if (vet[i] < vet[end_menor_numero])
            {
                end_menor_numero = i;
            }
        }

        trocar(&vet[comeco], &vet[end_menor_numero]);

        comeco++;

    } while (comeco < vet_size);
};
void insertion_sort(int vet[], int tamanho)
{

    int vet_size = sizeof(vet) / sizeof(vet[0]);

    for (int i = 1; i < vet_size; i++)
    {
        int key = vet[i];
        int j = i - 1;
        // para ficar decrescente, vet[j] < key
        while (j >= 0 && vet[j] > key)
        {
            vet[j + 1] = vet[j];
            j--;
        }
        vet[j + 1] = key;
    }
};
