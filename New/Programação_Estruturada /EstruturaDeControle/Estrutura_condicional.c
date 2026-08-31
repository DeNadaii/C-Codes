#include <stdio.h>
#include <stdbool.h> //Biblioteca que adiciona o tipo bool

int main(){

    //ESTRURUDAS CONDICIONAIS
    //Mecanismo que permite executar diferentes blocos de código com base em uma condição (verdadeira ou falsa),
    
    int i = true;
    int numero = 0;

    //if somente verifica se a declaracao é verdadeira. Como não existe
    //booleano nativamente no C, 0 se considera falso e todo resto, verdadeiro
    if(0){
        printf("primeiro if\n");
    }

    //quando se tem apenas uma linha não é nescessario as chaves ( {} )
    if (true) printf("if de uma linha\n");
    
    //else nao checa absolutamente nada, apenas executa um comando SOMENTE SE o if for falso
    //Como o resultado de qualquer operador logico é 1 ou 0, usamos eles nas condicionais
    if(i != true){
        printf("false\n");
    }else{
        printf("true\n");
    }


    //else-if verifica uma condicao caso a primeira for falsa. tem a mesma validade de um if
    if (numero < 10 && numero > 5) 
    {
        printf("numero valido \n");
    }
    else if (numero > 0)
    {
        printf("numero invalido porem maior q zero\n");
    }
    else
    {
        printf("numero menor ou igual a zero\n");
    }
}