#include <stdio.h>

int main(){
    
    // ESTRUTURA DE REPETICAO
    // Mecanismo que repete um bloco de código múltiplas vezes enquanto uma 
    // condição for verdadeira ou até que um critério seja atingido

    int i = 0;

    // WHILE: executa um bloco de código enquanto uma condição for verdadeira, testando a condição antes de cada execução.
    // Se a condição for falsa logo no início, o bloco não é executado nenhuma vez.
    printf("while:");
    while (i < 10){
        printf("numero i = %d\n", i);
        i += 2;
    }
    // FOR: executa um bloco de código um número determinado ou previsível de vezes, 
    // combinando em uma única linha: inicialização, condição e incremento da variável de controle.
    printf("for comum:");
    // Parametros do for: inicialização, condição e incremento da variável de controle.
    for (int i = 0; i < 10; i++){
        printf("i = %d\n", i);
    }
    //for aninhado
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            printf("[i = %d][j = %d] \n", i, j);
        }
    }
    // DO-WHILE: executa o bloco de código pelo menos uma vez e só depois testa a condição para decidir se repete ou não.
    do{
        printf("%d \n", i);
        i++;
    }while (i <= 10);

    return 0;
}