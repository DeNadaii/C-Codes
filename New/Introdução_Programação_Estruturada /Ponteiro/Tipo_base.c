#include <stdio.h>

int main()
{
    int i = 84;
    float f = 84.0;
    char c = 84;

    int *pi = &i;
    float *pf = &f;
    char *pc = &c;

    pi = (int *)pf;

    printf("o que tem na variavel i: %d\n", i);
    // printf("o que tem no ponteiro pi: %d\n",pi);
    printf("o que tem no ponteiro *pi: %d\n", *pi);

    printf("o que tem na variavel f: %f\n", f);
    // printf("o que tem no ponteiro pf: %f\n",pf);
    printf("o que tem no ponteiro *pf: %f\n", *pf);

    printf("o que tem na variavel c: %c\n", c);
    // printf("o que tem no ponteiro pc: %c\n",pc);
    printf("o que tem no ponteiro *pc: %c\n", *pc);


    return 0;
}