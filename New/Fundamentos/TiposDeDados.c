#include <stdio.h>
#include <ctype.h>


int main(){
    //isupper, isalph, tolower, toupper

    char character = 'a';
    //se for falso, retorna 0, mas se for true, retorna uma inteiro. Pode ser qualquer inteiro

    printf("%c isUpper %d\n",character,isupper (character));
    printf("%c isUpper %d\n",character,isalpha (character));

    //transforma o character em uppercase
    character = toupper (character);
    printf("%c\n", character);

    return 0;
}