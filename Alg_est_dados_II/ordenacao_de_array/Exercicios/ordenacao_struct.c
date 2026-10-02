#include <stdio.h>
#include <string.h>

// Elabore um programa em linguagem C que permita a ordenação de um vetor de estruturas.
// Cada estrutura representa um produto e conterá as seguintes informações:
// -> Código: Um código de identificação único para o produto (inteiro).
// -> Nome: O nome do produto (string).
// -> Preço: O preço do produto (float).
// -> Quantidade em estoque: A quantidade do produto em estoque (inteiro)

typedef struct
{
    int cod;
    char nome[100];
    float preco;
    int qtd_estoque;
} produto;


void insertion_sort(produto *vet[], int vet_size)
{
    for (int i = 1; i < vet_size; i++)
    {
        produto *key = vet[i];
        int j = i - 1;

        while (j >= 0 && vet[j]->cod > key->cod)
        {
            vet[j + 1] = vet[j];
            j--;
        }

        vet[j + 1] = key;
    }
}


int main()
{
    produto produtos[5] = {
        {105, "Arroz",    25.90, 12},
        {102, "Feijao",    8.50, 30},
        {109, "Macarrao",  6.75, 45},
        {101, "Cafe",     18.90, 20},
        {107, "Acucar",    4.99, 50}
    };

    produto *vet[5];

    for (int i = 0; i < 5; i++)
    {
        vet[i] = &produtos[i];
    }

    int vet_size = sizeof(vet) / sizeof(vet[0]);

    insertion_sort(vet, vet_size);

    for (int i = 0; i < vet_size; i++)
    {
        printf("Codigo: %d | Nome: %s | Preco: %.2f | Estoque: %d\n",
            vet[i]->cod,
            vet[i]->nome,
            vet[i]->preco,
            vet[i]->qtd_estoque);
    }

    

    return 0;
}