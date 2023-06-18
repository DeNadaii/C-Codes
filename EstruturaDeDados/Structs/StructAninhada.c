#include <stdio.h>

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

void ImprimePessoa(Professor P)
{
  printf("matricula: %d  \nturmas: %d/%d/%d\n", P.matricula, P.Turmas.idTurma1, P.Turmas.idTurma2,P.Turmas.idTurma3);
}


int main(){

    Professor joao;

    joao.matricula = 145;
    joao.Turmas.idTurma1 = 12;
    joao.Turmas.idTurma2 = 30;
    joao.Turmas.idTurma3 = 4;

    ImprimePessoa(joao);

    return 0;
}