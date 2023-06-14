#include <stdio.h>
//A declaração da estrutura de dados struct pode ser feita de três maneiras diferentes.

// primeira é a declaração do tipo struct realizada da mesma forma que declaramos 
//variáveis de outros tipos quaisquer. Por exemplo
struct livro livro1;

//A segunda maneira é a declaração de uma ou mais variáveis durante a definição da própria estrutura. 
struct livro {
	char nome[30];
	char autor[50];
	int paginas;
	float preco;
} livro2, livro3, livro4;

//E por último, a terceira maneira é para o caso de apenas uma variável do tipo estrutura ser 
//necessária no programa. Sendo assim, não precisamos declarar um identificador, basta definir 
//o nome da variável que será criada. 
struct {
	char nome[30];
	char autor[50];
	int paginas;
	float preco;
} livro5;



int main(){

    printf("hello world");

    return 0;
}