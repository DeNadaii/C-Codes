#include <stdio.h>

// por exemplo aqui, garantimos que a string não vai mudar de tamanho
size_t strlen(const char *str)
{
    size_t tamanho = 0;

    // O loop continua até encontrar o caractere nulo '\0'
    while (str[tamanho] != '\0')
    {
        tamanho++;
    }

    return tamanho;
}

int press_buttom(volatile int *endereco_botao)
{
    printf("Aguardando o botao ser pressionado...\n");

    // Corrigido: Usa o parâmetro da função para checar o valor
    while (*endereco_botao == 0)
    {
        // Espera o hardware mudar o valor para 1
    }

    printf("Botao pressionado com sucesso!\n");
    return 0;
}

int main()
{

    // CONST
    // a variavel do tipo const não pode ser alterada pelo seu programa
    // ela ainda pode ser alterada externamente, por hardware, por exemplo
    const int i = 10;
    printf("%d \n", i);
    printf("tamanho da string: %zu \n", strlen("bom dia"));

    // VOLATILE
    // avisa ao compilador que o valor de uma variável pode ser alterado a qualquer momento
    // por algo fora do controle do próprio código, como o hardware ou outra linha de execução (thread).

    // Avisa ao compilador: "O valor neste endereço muda externamente!"
    volatile int *botao_pressionado = (int *)0x4000;
    press_buttom(botao_pressionado);

    //ambos podem ser utilizados juntos
    const volatile unsigned char *port = 0x30;

    return 0;
}