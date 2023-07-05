#include<stdio.h>

//Aos dados agruados em uma struct dá-se o nome de campos(fields).
typedef struct {
    float Peso;  
    int Idade;    
    float Altura;
}Pessoa;

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