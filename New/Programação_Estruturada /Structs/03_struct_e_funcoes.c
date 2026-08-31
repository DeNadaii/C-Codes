#include <stdio.h>

//STRUCT E FUNCOES

typedef struct data{
        int dia;
        int mes;
        int ano;
};

    
int main(){

    // Essa linha é o "protótipo" da função funcaoRecebeStruct, declarado aqui dentro da main.
    // Ele avisa o compilador "existe uma função com essa assinatura, ela está definida 
    // em outro lugar do arquivo", isso permite chamar a função mais abaixo (linha 27) 
    // mesmo que a implementação dela só apareça depois da main no arquivo

    struct data funcaoRecebeStruct(struct data x);

    struct data hoje;
    hoje.dia = 27;
    hoje.mes = 11;
    hoje.ano = 23;

    printf("hoje: %d/%d/%d\n", hoje.dia,hoje.mes,hoje.ano);
    
    // Aqui é o ponto central do exemplo. Ao chamar funcaoRecebeStruct(hoje), 
    // o C faz uma CÓPIA completa da struct "hoje" e entrega essa cópia para o parâmetro
    // "x" da função (struct passada por VALOR, e não por referência/ponteiro). 
    // Tudo que a função fizer com "x" não afeta "hoje" aqui na main, são duas structs 
    // diferentes na memória a partir desse momento. Por isso, depois da chamada, 
    // "hoje" continua com os valores originais (27/11/23), e é "proxima" 
    // (que recebe o retorno da função) que guarda os valores alterados (1/10/25).

    struct data proxima;
    proxima = funcaoRecebeStruct(hoje);

    printf("depois da funcao: %d/%d/%d\n", proxima.dia, proxima.mes, proxima.ano);

    return 0;
}

struct data funcaoRecebeStruct(struct data x){

    // Estas três linhas alteram apenas a cópia local "x", que existe só dentro desta função. 
    // A variável "hoje" lá na main não é tocada
    x.dia = 1;
    x.mes = 10;
    x.ano = 25;

    printf("dentro da funcao: %d/%d/%d\n", x.dia, x.mes, x.ano);

    // Aqui a função devolve a struct "x" (com os valores já alterados) como retorno. 
    // É assim que os dados "saem" da função de volta pra quem chamou: via "return", e
    // não alterando a struct original. Lá na main, 
    // "proxima = funcaoRecebeStruct(hoje)" recebe essa cópia retornada.
    return x;
};
