//As funções são procedimentos que retornam um único valor ao final de sua execução.
#include <stdio.h>

//ao declarar uma funcao, devemos dizer oq ela ira retornar(int), o nome dela(funcaoSoma)
//os parametros(a,b) e os tipos dos parametros(int a, int b). E sempre retornam algo (return)
int funcaoSoma(int a, int b){
    return a + b;
}
//existe a funcao "void". Ela não possui retorno. Mas pode receber parametros
void funcVoid(int a){
    printf("imprime o parametro: %d\n",a);
}
//outra forma de declarar funcao void
//void como parametro informa que essa funcao NAO PODE ser chamada com parametro
funcVoidValida(void){
    printf("segunda forma void\n");
}
static int funcAltera(int x){ //func static só podem ser acessadas dentro do programa q foram criadas
    x = 2;
    return x;
}

int funcaoSubtracao(int a, int b);

int main(){
//podemos salvar o retorno da func em uma variavel
    int resultado = funcaoSoma(5,5);
    int x = 1;
    x = funcAltera(x);
    printf("x: %d\n",x);
    int resultadoSub = funcaoSubtracao(5,5);
    printf("funcao subtracao: %d\n",resultadoSub);
    funcVoid(5);
    funcVoidValida();
    printf("funcao soma: %d\n",resultado);

    return 0;
}

//prototipo de funcoes
int funcaoSubtracao(int a, int b){
    return a-b;
}