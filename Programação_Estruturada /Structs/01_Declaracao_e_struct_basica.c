#include <stdio.h>

// DECLARACOES

//A declaração da estrutura de dados struct pode ser feita de três maneiras diferentes:

// primeira é a declaração do tipo struct realizada da mesma forma que declaramos 
// variáveis de outros tipos quaisquer. Por exemplo
struct livro livro1;
// repare que aqui "struct livro" ainda
// não foi definida (os campos dela só aparecem mais abaixo). Isso só
// compila porque, no C, é permitido declarar um ponteiro ou variável de
// um "struct incompleto" antes de defini-lo completamente - mas para usar
// os campos de "livro1" (livro1.nome, por exemplo), o compilador precisa
// já ter visto a definição completa da struct antes desse ponto do código.
// Na prática, para evitar dor de cabeça, é mais comum definir a struct
// primeiro e só depois declarar variáveis dela.

//A segunda maneira é a declaração de uma ou mais variáveis durante a definição da própria estrutura. 
struct livro {
	char nome[30];
	char autor[50];
	int paginas;
	float preco;
} livro2, livro3, livro4;
// Aqui a struct "livro" é definida E,
// na mesma instrução, já são criadas três variáveis desse tipo
// (livro2, livro3, livro4). Define o molde (struct) e já fabrica as 
// variáveis a partir dele, tudo de uma vez

//E por último, a terceira maneira é para o caso de apenas uma variável do tipo estrutura ser 
//necessária no programa. Sendo assim, não precisamos declarar um identificador, basta definir 
//o nome da variável que será criada. 
struct {
	char nome[30];
	char autor[50];
	int paginas;
	float preco;
} livro5;
// Aqui a struct não tem nome (é uma "struct anônima"). Como ela não tem um nome de tipo, 
// é impossível criar outra variável desse mesmo formato depois, "livro5" é a única variável
// que existirá com esses campos. Por isso essa forma só faz sentido quando
// você sabe que vai precisar de apenas uma variável daquele tipo.]

// STRUCT

//Aos dados agruados em uma struct dá-se o nome de campos(fields).
typedef struct {
    float Peso;  
    int Idade;    
    float Altura;
}Pessoa;

// Essa função recebe "Pessoa P" por VALOR. Isso significa que, quando 
// ImprimePessoa(Joao) é chamada lá na main, o C cria uma CÓPIA completa 
// da struct Joao e guarda essa cópia na variável local "P". 
// A função "P" é totalmente independente da variável "Joao" original: 
// se alterássemos P.Idade dentro dessa função, o valor de Joao.Idade lá na 
// main não mudaria em nada. Isso é diferente de passar um ponteiro (Pessoa *P), 
// que passaria o "endereço" da struct original, permitindo alterá-la de dentro da função

void ImprimePessoa(Pessoa P)
{
  printf("Idade: %d  Peso: %.2f Altura: %.2f\n", P.Idade, P.Peso, P.Altura);
}

int main(){
//Após a criação do tipo, é possivel declarar variáveis do tipo Pessoa, desta forma:
    Pessoa Joao;

//Para acessar os campos de uma struct, usa-se a sintaxe  NomeDaVariavel.NomeDoCampo, conforme o exemplo a seguir.
    Joao.Idade = 15;
    Joao.Peso = 60.5;
    Joao.Altura = 1.75;

    ImprimePessoa(Joao);

    return 0;
}
