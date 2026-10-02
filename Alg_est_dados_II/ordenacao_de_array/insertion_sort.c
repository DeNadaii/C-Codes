#include <stdio.h>


int main()
{

    int vet[4] = {5, 2, 8, 1};
    int vet_size = sizeof(vet) / sizeof(vet[0]);

    for (int i = 1; i < vet_size; i++)
    {
        int key = vet[i];
        int j = i - 1;
        //para ficar decrescente, vet[j] < key
        while (j >= 0 && vet[j] > key)
        {
            vet[j + 1] = vet[j];
            j--;
        }
        vet[j + 1] = key;
    }

    for (int i = 0; i < vet_size; i++)
    {
        printf("[%d], ",vet[i]);
    }
    

    return 0;
}