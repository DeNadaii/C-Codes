#include <stdio.h>

typedef struct data{
        int dia;
        int mes;
        int ano;
};

    
int main(){

    struct data funcaoRecebeStruct(struct data x);

    struct data hoje;
    hoje.dia = 27;
    hoje.mes = 11;
    hoje.ano = 23;

    printf("hoje: %d/%d/%d\n", hoje.dia,hoje.mes,hoje.ano);
    
    struct data proxima;
    proxima = funcaoRecebeStruct(hoje);

    printf("depois da func: %d/%d/%d\n", proxima.dia, proxima.mes, proxima.ano);

    return 0;
}

struct data funcaoRecebeStruct(struct data x){

    x.dia = 1;
    x.mes = 10;
    x.ano = 25;

    printf("dentro da funcao: %d/%d/%d\n", x.dia, x.mes, x.ano);

    return x;
};