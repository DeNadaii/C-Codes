#include <stdio.h>

struct data
{
    int dia;
    int mes;
    int ano;
}hoje;
    
int main(){
    
struct data hoje;
    hoje.dia = 27;
    hoje.mes = 11;
    hoje.ano = 23;

struct data amanha;
    amanha.dia = hoje.dia + 1;
    amanha.mes = hoje.mes;
    amanha.ano = hoje.ano; 

struct data mesQueVem;
    mesQueVem.dia = hoje.dia;
    mesQueVem.mes = hoje.mes + 1;
    mesQueVem.ano = hoje.ano; 

struct data anoQueVem;
    anoQueVem.dia = hoje.dia;
    anoQueVem.mes = hoje.mes;
    anoQueVem.ano = hoje.ano + 1; 

    printf("hoje: %d/%d/%d\n", hoje.dia,hoje.mes,hoje.ano);
    printf("amanha: %d/%d/%d\n", amanha.dia,amanha.mes,amanha.ano);
    printf("mes que vem: %d/%d/%d\n", mesQueVem.dia,mesQueVem.mes,mesQueVem.ano);
    printf("ano que vem: %d/%d/%d\n", anoQueVem.dia,anoQueVem.mes,anoQueVem.ano);


    return 0;
}