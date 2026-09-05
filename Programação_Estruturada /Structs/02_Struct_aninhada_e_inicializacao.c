#include <stdio.h>

// STRUCT ANINHADA
// Aqui temos uma "struct dentro de struct" (struct aninhada). 

// O campo "Turmas" não é um int nem um float: ele é, ele mesmo, outra struct, 
// com seus próprios campos internos (idTurma1, idTurma2, idTurma3). 
// Para acessar esses campos mais internos, encadeamos os pontos: joao.Turmas.idTurma1. 
// Como "gavetas dentro de gavetas": Professor > Turmas > idTurma1.

typedef struct 
{
    int matricula;
    struct 
    {
        int idTurma1;
        int idTurma2;
        int idTurma3;
    }Turmas;
    
} Professor;

// De novo, "Professor P" é passado por VALOR. 
// Ao chamar ImprimePessoa(joao), o C copia a struct joao inteira
// (incluindo a struct Turmas de dentro dela) para dentro de "P". 
// Alterar P aqui dentro não mudaria "joao" na função que chamou.

void ImprimePessoa(Professor P)
{
  printf("matricula: %d  \nturmas: %d/%d/%d\n", P.matricula, P.Turmas.idTurma1, P.Turmas.idTurma2,P.Turmas.idTurma3);
}

void exemplo_struct_aninhada(){

    Professor joao;

    joao.matricula = 145;
    joao.Turmas.idTurma1 = 12;
    joao.Turmas.idTurma2 = 30;
    joao.Turmas.idTurma3 = 4;

    ImprimePessoa(joao);
}

// MANIPULANDO ESTRUTURAS

struct data
{
    int dia;
    int mes;
    int ano;
}hoje_global;

void exemplo_inicializacao_struct(){
        
    // Essa sintaxe com chaves {} é a "inicialização posicional" da struct: 
    // cada valor dentro das chaves é atribuído, na ordem, aos campos da struct 
    // (na ordem em que eles foram declarados). 
    // Ou seja, {27,11,23} equivale a fazer: 
    // hoje.dia=27; hoje.mes=11; hoje.ano=23; 
    // só que em uma linha só, no momento da criação da variável
    struct data hoje = {27,11,23};

    // Aqui "amanha" é uma struct NOVA e independente, apenas com valores calculados 
    // a partir dos campos de "hoje" (dia+1). 
    // Não existe nenhum vínculo entre "amanha" e "hoje" depois dessa linha, 
    // se "hoje" mudar depois, "amanha" não muda junto, 
    // pois os valores já foram copiados no momento da inicialização

    struct data amanha = {hoje.dia + 1, hoje.mes, hoje.ano};
    struct data mesQueVem = {hoje.dia, hoje.mes + 1, hoje.ano};
    struct data anoQueVem= {hoje.dia, hoje.mes, hoje.ano + 1};

    printf("hoje: %d/%d/%d\n", hoje.dia,hoje.mes,hoje.ano);
    printf("amanha: %d/%d/%d\n", amanha.dia,amanha.mes,amanha.ano);
    printf("mes que vem: %d/%d/%d\n", mesQueVem.dia,mesQueVem.mes,mesQueVem.ano);
    printf("ano que vem: %d/%d/%d\n", anoQueVem.dia,anoQueVem.mes,anoQueVem.ano);
}
int main(){

    printf(" Struct aninhada \n");
    exemplo_struct_aninhada();

    printf("\n Manipulando/inicializando structs \n");
    exemplo_inicializacao_struct();

    return 0;
}
