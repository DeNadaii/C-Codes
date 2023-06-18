#include <stdio.h>

typedef struct horario
{
    int hora;
    int minuto;
    int segundo;
};


int main(){

    struct horario agora[5];
    
    for (int i = 0; i < 5; i++)
    {
        agora[i].hora = 12;
        agora[i].minuto = 30;
        agora[i].segundo = 10+i;

        printf("%d:%d:%d\n", agora->hora,agora->minuto,agora[i].segundo);
    }
    

    return 0;
}