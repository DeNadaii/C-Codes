#include <stdio.h>
#include <string.h>

int main(){

    char str_1[20] = "ola ";
    char str_2[20] = "mundo";
    char str_3[20] = "ola";

    // usado o %zu para printar o tamanho do vetor de caracter
    printf("Length of string a = %zu \n",strlen(str_1));
    // compara duas strings, se forem iguais, retorna 0
    printf("compare two strings = %d\n",strcmp(str_1,str_3));
    //concatena duas strings, é salva na string q foi passada primeiro
    strcat(str_1,str_2);
    printf("%s\n",str_1);
    //copia uma string na outra. A segunda a ser passada, sobresceverá a primeira 
    printf("str_1: %s || str_2: %s\n", str_1, str_2);
    strcpy(str_1, str_2);
    printf("str_1: %s || str_2: %s\n", str_1, str_2);

    return 0;
}
