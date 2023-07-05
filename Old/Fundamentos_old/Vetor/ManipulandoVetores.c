#include <stdio.h>

int main(){

    float notas[3];
    float media;
    float total;

    for (int i = 0; i < 3; i++)
    {
        scanf("%f",&notas[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        total += notas[i];
    }
    media = total/3;

    printf("Total:%.2f, media: %.2f\n",total,media);
    

    return 0;
}