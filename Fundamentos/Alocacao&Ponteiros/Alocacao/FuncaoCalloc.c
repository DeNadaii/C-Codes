// Na alocação dinâmica, é requisitada explicitamente pelo programa uma área de memória
// para armazenamento de dados. O controle das áreas alocadas dinamicamente pode ser manual
// ou semiautomático, desta maneira o programa as utiliza e depois as libera quando não forem
// mais necessárias ou quando o programa encerrar.
// A liberação das áreas alocadas dinamicamente é realizada pelo programador.
#include <stdlib.h>
#include <stdio.h>

int main()
{

    int *p = (int *)calloc(5, sizeof(int));
    //casting usado para q o ponteiro do retorno seja do msm tipo do ponteiro passado

    // o primeiro argumento informa quantos elementos do
    // tamanho desejado deve ser alocado
    // o segundo argumento de calloc eh o tamanho em bytes
    // para ser alocado, o tamanho de uma var int no caso
    // o tamanho de int sao 4bytes. 5 x 4 = 20. 20 bytes
    printf("%i \n", p[0]);

    for (int i = 0; i < 5; i++)
    {
        printf("end de p%i = %p |",i,&p[i]);
        printf("| valor de p%i = %i \n",i,*(p+i));
    }
    //a funcao calloc ela inicializa os espacos com 0, ou seja
    //ela limpa os end de memoria

    printf("\nsetando os valores dos end \n");
    //manipulando os end
    *p = 1;
    *(p+1) = 2;
    *(p+2) = 3;
    *(p+3) = 4;
    *(p+4) = 5;

    for (int i = 0; i < 5; i++)
    {
        printf("end de p%i = %p |",i,&p[i]);
        printf("| valor de p%i = %i \n",i,*(p+i));
    }

    //agora os end de memoria foram definidos



    return 0;
}