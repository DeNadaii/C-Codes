#include <stdio.h>

int main()
{
    // for comum
    for (int i = 0; i < 10; i++)
    {
        //printf("i = %d\n", i);
    }
    // variavel de controle declarada fora do loop
    int x = 0;
    for (; x <= 10;)
    {
        //printf("x = %d\n", x);
        x++;
    }
    // criar um laco for decresente
    for (int i = 10; i >= 0; i -= 2)
    {
        //printf("i = %d\z", i);
    }
    //for aninhado
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            //printf("[i = %d][j = %d] \n", i, j);
        }
    }
    return 0;
}