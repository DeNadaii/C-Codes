#include <stdio.h>
#include <stdbool.h>

int main(){

    printf("\nTabela verdade E (&&)\n");
    printf("true && true = %d\n",(true && true));
    printf("true && false = %d\n",(true && false));
    printf("false && true = %d\n",(false && true));
    printf("false && false = %d\n",(false && false));

    // OU (||)
    printf("\nTabela verdade OU (||)\n");
    printf("true || true = %d\n",(true || true));
    printf("true || false = %d\n",(true || false));
    printf("false || true = %d\n",(false || true));
    printf("false || false = %d\n",(false || false));

    // XOR (^)
    printf("\nTabela verdade OU EXCLUSIVO (^)\n");
    printf("true ^ true = %d\n",(true ^ true));
    printf("true ^ false = %d\n",(true ^ false));
    printf("false ^ true = %d\n",(false ^ true));
    printf("false ^ false = %d\n",(false ^ false));

    // NOT (!)
    printf("\nTabela verdade NOT (!)\n");
    printf("!true = %d\n",(!true));
    printf("!false = %d\n",(!false));

    return 0;
}