#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


// Este arquivo mostra exemplos de vertor de struct em ordem crescente
// de complexidade: vetor de struct simples -> vetor de struct lido do
// usuário -> vetor de struct com campo aninhado (struct dentro de struct).

// VETOR DE STRUCT

typedef struct horario
{
    int hora;
    int minuto;
    int segundo;
};

void exemplo_vetor_struct_simples(){

    // agora[5]" cria um VETOR de 5 structs "horario" seguidas na memória. 
    // Cada posição do vetor (agora[0], agora[1], ..., agora[4]) é uma 
    // struct completa e independente, com seus próprios campos hora/minuto/segundo.

    struct horario agora[5];
    
    for (int i = 0; i < 5; i++)
    {
        agora[i].hora = 12;
        agora[i].minuto = 30;
        agora[i].segundo = 10+i;

        printf("%d:%d:%d\n", agora[i].hora, agora[i].minuto, agora[i].segundo);
    }
}

// EXEMPLO VETOR DE STRUCT 1

typedef struct{
    int dia;
    int mes;
    int ano;
} Data;

typedef struct{
    int codigo;
    char nome[200];
    Data datNasc;
} Aluno;

// Essa struct "Aluno" tem um campo que
// é OUTRA struct (Data datNasc) - de novo, struct aninhada, igual vimos
// no arquivo 02. Além disso, "aluno" aqui é declarado como variável
// GLOBAL (fora de qualquer função), então ela existe durante todo o
// programa e pode ser acessada por qualquer função sem precisar ser
// passada como parâmetro.
Aluno aluno[2];

void exemplo_vetor_struct_com_leitura(){

    setlocale(LC_ALL, "portuguese");
    for (int i = 0; i < 2; i++)
    {
        aluno[i].codigo = 0;
        strcpy(aluno[i].nome, "NULL");
        aluno[i].datNasc.dia = 0;
        aluno[i].datNasc.mes = 0;
        aluno[i].datNasc.ano = 0;
    }

    for (int i = 0; i < 2; i++)
    {
        printf(" \n ======================================================================");
        printf(" \n O código do aluno é: %d ", aluno[i].codigo);
        printf(" \n O nome do aluno é: %s ", aluno[i].nome);
        printf(" \n A data de nascimento do aluno é: %d / %d / %d ",
               aluno[i].datNasc.dia, 
               aluno[i].datNasc.mes,
               aluno[i].datNasc.ano);
        printf(" \n ");
    }

    for (int i = 0; i < 2; i++)
    {
        printf(" \n ======================================================================");
        printf(" \n ======================================================================");
        // o "&" antes de "aluno[i].codigo"
        // passa o ENDEREÇO daquele campo para o scanf, e não o valor. O
        // scanf precisa saber "onde na memória" ele deve escrever o número
        // digitado - por isso ele não recebe o valor em si, mas o
        // endereço de onde guardá-lo. O "%*c" no final de cada formato
        // serve para "descartar" o caractere de Enter (\n) que sobra no
        // buffer depois da leitura, evitando que ele atrapalhe a próxima
        // leitura.
        printf(" \n Digite o código do aluno: ");
        scanf("%d%*c", &aluno[i].codigo);
        // aqui o "&" antes de
        // "aluno[i].nome" é redundante (mas não chega a ser um erro que
        // impede a compilação, só gera um aviso do compilador): como
        // "nome" já é um vetor de char (char nome[200]), o próprio nome
        // do vetor já funciona como o endereço do seu primeiro caractere.
        // O correto/mais comum seria escrever só "aluno[i].nome", sem o
        // "&". Deixei como no original para não alterar o comportamento,
        // já que compila e funciona do mesmo jeito.
        printf(" \n Digite o nome do aluno: ");
        scanf("%s%*c", &aluno[i].nome);
        printf(" \n Digite o dia do nascimento do aluno: ");
        scanf("%d%*c", &aluno[i].datNasc.dia);
        printf(" \n Digite o mês do nascimento do aluno: ");
        scanf("%d%*c", &aluno[i].datNasc.mes);
        printf(" \n Digite o ano do nascimento do aluno: ");
        scanf("%d%*c", &aluno[i].datNasc.ano);
    }

    for (int i = 0; i < 2; i++)
    {
        printf(" \n ======================================================================");
        printf(" \n O código do aluno é: %d ", aluno[i].codigo);
        printf(" \n O nome do aluno é: %s ", aluno[i].nome);
        printf(" \n A data de nascimento do aluno é: %d / %d / %d ",
               aluno[i].datNasc.dia, 
               aluno[i].datNasc.mes,
               aluno[i].datNasc.ano);
        printf(" \n ");
    }
}

// EXEMPLO VETOR DE STRUCT 2

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

// "Carro" tem um campo "infoCarro" que
// é do tipo "info" (outra struct) - mais um exemplo de struct aninhada,
// dessa vez dentro de um vetor de structs. Para acessar o ano de um
// carro específico, encadeamos tudo: ListaDeCompra[i].infoCarro.Ano.
Carro ListaDeCompra[2];

void exemplo_vetor_struct_aninhado(){

    strcpy(ListaDeCompra[0].modelo, "pick-up");
    ListaDeCompra[0].preco = 1500;
    ListaDeCompra[0].infoCarro.Ano = 2010;
    ListaDeCompra[0].infoCarro.qtdLitros = 1000;
    ListaDeCompra[0].infoCarro.v_Max = 220;
    printf("\nmodelo: %s \n", ListaDeCompra[0].modelo);
    printf("Preco: %.2f\n", ListaDeCompra[0].preco);
    printf("Informacoes:\nvelocidade Maxima = %dkm/h\nqtd de litros = %dL\nAno = %d\n", 
    ListaDeCompra[0].infoCarro.v_Max,ListaDeCompra[0].infoCarro.qtdLitros,ListaDeCompra[0].infoCarro.Ano);
    
    
    strcpy(ListaDeCompra[1].modelo, "sedan"); 
    ListaDeCompra[1].preco = 2500;
    ListaDeCompra[1].infoCarro.Ano = 2015;
    ListaDeCompra[1].infoCarro.qtdLitros = 500;
    ListaDeCompra[1].infoCarro.v_Max = 190;
    printf("\nmodelo: %s \n", ListaDeCompra[1].modelo);
    printf("Preco: %.2f\n", ListaDeCompra[1].preco);
    printf("Informacoes:\nvelocidade Maxima = %dkm/h\nqtd de litros = %dL\nAno = %d\n", 
    ListaDeCompra[1].infoCarro.v_Max,ListaDeCompra[1].infoCarro.qtdLitros,ListaDeCompra[1].infoCarro.Ano);
}

int main(){

    printf("\n Vetor de struct simples \n");
    exemplo_vetor_struct_simples();

    printf("\n Vetor de struct com leitura do usuario \n");
    exemplo_vetor_struct_com_leitura();

    printf("\n Vetor de struct com campo aninhado \n");
    exemplo_vetor_struct_aninhado();

    return 0;
}
