#include <stdio.h>
#include <string.h>

typedef struct {
    int v_Max;
    int qtdLitros;
    int Ano;
}info;


typedef struct {
    char modelo[20];
    double preco;
    info infoCarro;
}Carro;

Carro ListaDeCompra[2];
    
int main(){

    strcpy(ListaDeCompra[1].modelo, "pick-up");
    ListaDeCompra[1].preco = 1500;
    ListaDeCompra[1].infoCarro.Ano = 2010;
    ListaDeCompra[1].infoCarro.qtdLitros = 1000;
    ListaDeCompra[1].infoCarro.v_Max = 220;
    printf("\nmodelo: %s \n", ListaDeCompra[1].modelo);
    printf("Preco: %.2f\n", ListaDeCompra[1].preco);
    printf("Informacoes:\nvelocidade Maxima = %dkm/h\nqtd de litros = %dL\nAno = %d\n", 
    ListaDeCompra[1].infoCarro.v_Max,ListaDeCompra[1].infoCarro.qtdLitros,ListaDeCompra[1].infoCarro.Ano);
    
    
    strcpy(ListaDeCompra[2].modelo, "sedan"); 
    ListaDeCompra[2].preco = 2500;
    ListaDeCompra[2].infoCarro.Ano = 2015;
    ListaDeCompra[2].infoCarro.qtdLitros = 500;
    ListaDeCompra[2].infoCarro.v_Max = 190;
    printf("\nmodelo: %s \n", ListaDeCompra[2].modelo);
    printf("Preco: %.2f\n", ListaDeCompra[2].preco);
    printf("Informacoes:\nvelocidade Maxima = %dkm/h\nqtd de litros = %dL\nAno = %d\n", 
    ListaDeCompra[2].infoCarro.v_Max,ListaDeCompra[2].infoCarro.qtdLitros,ListaDeCompra[2].infoCarro.Ano);
    
    return 0;
}