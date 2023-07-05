#include <stdio.h>

struct data
{
    int dia;
    int mes;
    int ano;
}hoje;
    
int main(){
        
    struct data hoje = {27,11,23};
    struct data amanha = {hoje.dia + 1, hoje.mes, hoje.ano};
    struct data mesQueVem = {hoje.dia, hoje.mes + 1, hoje.ano};
    struct data anoQueVem= {hoje.dia, hoje.mes, hoje.ano + 1};

    printf("hoje: %d/%d/%d\n", hoje.dia,hoje.mes,hoje.ano);
    printf("amanha: %d/%d/%d\n", amanha.dia,amanha.mes,amanha.ano);
    printf("mes que vem: %d/%d/%d\n", mesQueVem.dia,mesQueVem.mes,mesQueVem.ano);
    printf("ano que vem: %d/%d/%d\n", anoQueVem.dia,anoQueVem.mes,anoQueVem.ano);


    return 0;
}