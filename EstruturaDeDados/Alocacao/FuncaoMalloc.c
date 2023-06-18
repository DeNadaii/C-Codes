// Na alocação dinâmica, é requisitada explicitamente pelo programa uma área de memória 
// para armazenamento de dados. O controle das áreas alocadas dinamicamente pode ser manual 
// ou semiautomático, desta maneira o programa as utiliza e depois as libera quando não forem 
// mais necessárias ou quando o programa encerrar. 
// A liberação das áreas alocadas dinamicamente é realizada pelo programador.
#include<stdlib.h>
#include<stdio.h>

int main(){

    int *p = (int *) malloc(sizeof(int));
    //retorna um ponteiro do tipo void
    //casting usado para q o ponteiro do retorno seja do msm tipo do ponteiro passado

    *p = 10;
    //seta o valor do ponteiro para 10
    printf("%i \n", *p);

    //funcao free, Libera o end de memoria
    //caso não use a funcao free, o end de memoria será devolvido quando o programa acabar

    free(p);
    //a funcao free apenas libera o espaco do ponteiro, ela não remove o lixo do end de memoria

    return 0;
}