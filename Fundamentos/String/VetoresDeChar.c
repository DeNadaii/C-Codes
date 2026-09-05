#include <stdio.h>

int main(){

    char VetorDeChar[] = {'o','l','a'};
    int len = sizeof(VetorDeChar)/sizeof(VetorDeChar[0]);

    for (int i = 0; i < len; i++)
    {
        printf("%c",VetorDeChar[i]);
    }

    return 0;
}