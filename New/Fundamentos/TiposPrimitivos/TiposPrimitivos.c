#include <stdio.h>

int main(){

    char car_1 = 67;
    char car_2 = 'C';

    printf("tipo char tem tamanho de 2 bytes e usa a tabela ASCII\n");
    printf("\tEm decimal: %c\n", car_1);
    printf("\tEm caracter: %c\n",car_2);
    
    int inteiro = 2147483647;//-2.147.483.648 até 2.147.483.647
    int inteiroNegativo = -2147483648;//-2.147.483.648 até 2.147.483.647
    printf("tipo int tem tamanho de 4 bytes e vai de:\n");
    printf("\t%d a %d\n",inteiroNegativo,inteiro);

    float Real = 1.5555555;
    float RealNegativo = -1.5555555; 
    printf("tipo float tem tamanho de 4 bytes e guarda por volta de 6 casas decimais:\n");
    printf("\t%f e %f\n",RealNegativo,Real);

    double DuplaPrecisao = 1.555555555555555;
    double DuplaPrecisaoNegativo = -1.555555555555555;
    printf("tipo double tem tamanho de 8 bytes e guarda por volta de 15 casas decimais:\n");
    printf("\t%.15f e %.15f\n",DuplaPrecisaoNegativo,DuplaPrecisao);

    //void;
    unsigned long int inteiroLongoSemSinal = 4294967295;
    printf("modificadores dos tipos: long; unsigned; signed; short\n");
    printf("Por exemplo: \n\tunsigned long int = %lu \n",inteiroLongoSemSinal);
    printf("nescessario colocar os modificadores para imprimir (lu)");

    return 0;
}