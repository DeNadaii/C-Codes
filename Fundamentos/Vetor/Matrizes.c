#include <stdio.h>

int main(){

    int matriz[3][3] = {1,1,1,2,2,2,3,3,3}; //quando chega no terceiro membro, automaticamente declara o segundo

    for (int i = 0; i < 3; i++)
    {    
        for (int j = 0; j < 3; j++)
        {
            printf("matriz[%d][%d] = %d\n",i,j,matriz[i][j]);
        }   
    }

    return 0;
}