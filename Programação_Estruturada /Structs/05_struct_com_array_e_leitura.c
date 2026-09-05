#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

// EXEMPLO STRUCT 1
// struct com um array de floats como campo, usado para calcular uma média


// Aqui um dos campos da struct ("v_nota") não é um único número, 
// e sim um ARRAY de 3 floats. Ou seja, uma struct pode ter campos de qualquer tipo, 
// inclusive vetores. Cada "aluno" desse tipo carrega consigo suas 3 notas guardadas juntas.

// Cria uma estrutura para armazenar dados de um aluno
struct aluno
{
    int v_nmat;      // número da matrícula
    float v_nota[3]; // notas
    float v_media;   // media
};

void exemplo_struct_com_array(){

    struct aluno Felipe; // declara uma variável do tipo struct
    Felipe.v_nmat = 120;
    Felipe.v_nota[0] = 8.5;
    Felipe.v_nota[1] = 7.2;
    Felipe.v_nota[2] = 5.4;
    // Aqui acessamos cada posição do array "v_nota" dentro da struct normalmente,
    // com colchetes (Felipe.v_nota[0], Felipe.v_nota[1], etc.) 
    // e usamos os três valores para calcular a média, guardando o resultado em 
    // outro campo da mesma struct (v_media)

    Felipe.v_media = (Felipe.v_nota[0] + Felipe.v_nota[1] + Felipe.v_nota[2]) / 3.0;
    printf("Matricula: %d\n", Felipe.v_nmat);
    printf("Media: %2f\n", Felipe.v_media);
}

// EXEMPLO STRUCT 2
// (struct com campo aninhado, lida via scanf)

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

Aluno aluno;

void exemplo_struct_aninhada_com_leitura()
{
    aluno.codigo = 0;
    strcpy(aluno.nome, "NULL");
    aluno.datNasc.dia = 0;
    aluno.datNasc.mes = 0;
    aluno.datNasc.ano = 0;
    printf(" \n O código do aluno é: %d ", aluno.codigo);
    printf(" \n O nome do aluno é: %s ", aluno.nome);
    printf(" \n A data de nascimento do aluno é: %d / %d / %d ", aluno.datNasc.dia, aluno.datNasc.mes, aluno.datNasc.ano);
    printf(" \n \n");
    printf(" Digite o código do aluno: ");
    scanf("%d%*c", &aluno.codigo);
    printf(" Digite o nome do aluno: ");
    scanf("%s%*c", &aluno.nome);
    printf(" Digite o dia do nascimento do aluno: ");
    scanf("%d%*c", &aluno.datNasc.dia);
    printf(" Digite o mês do nascimento do aluno: ");
    scanf("%d%*c", &aluno.datNasc.mes);
    printf(" Digite o ano do nascimento do aluno: ");
    scanf("%d%*c", &aluno.datNasc.ano);
    printf(" \n O código do aluno é: %d ", aluno.codigo);
    printf(" \n O nome do aluno é: %s ", aluno.nome);
    printf(" \n A data de nascimento do aluno é: %d / %d / %d ", aluno.datNasc.dia, aluno.datNasc.mes, aluno.datNasc.ano);
    printf(" \n \n");
}

int main()
{
    printf("\n Struct com array interno (media) \n");
    exemplo_struct_com_array();

    printf("\n Struct aninhada com leitura via scanf \n");
    exemplo_struct_aninhada_com_leitura();

    return (0);
}
