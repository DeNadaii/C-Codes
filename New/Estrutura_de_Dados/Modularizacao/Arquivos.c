// Funcionalidade: A função fopen abre um arquivo, assim como os dispositivos console, 
// impressora e saída serial, que podem ser abertos como arquivos.
// As funções de manipulação de arquivos, assim como os ponteiros, devem ser declaradas 
// juntamente com a declaração de variáveis. Sendo assim, vamos entender melhor a 
// definição de ponteiros para arquivos conforme a sintaxe abaixo:
#include <stdio.h>

//fopen modos:
// "r" − Leitura (open).
// "w" − Escrita (rewrite).
// "a" − Adição (append).
// "r+" − Para atualizar um arquivo (read e write).
// "w+" − Para criar um arquivo para atualização.
// "a+" − Adição, em arquivo para leitura e escrita.

int main(){

    //linux gcc criou na pasta output
    FILE *file;
    //como esta usando o "write", o arquivo com aquele nome sera modificado
    file = fopen("sample.txt","w");
    fprintf(file,"test mensage ");
    //fclose salva e fecha o arquivo
    fclose(file);

    return 0;
}