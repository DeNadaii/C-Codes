// Exercício: fazer um programa em "C" que solicita o total gasto pelo cliente de
// uma loja, imprime as opções de pagamento, solicita a opção desejada e
// imprime o valor total das prestações (se houverem).
//  1) Opção: a vista com 10% de desconto
//  2) Opção: em duas vezes (preço da etiqueta)
//  3) Opção: de 3 até 10 vezes com 3% de juros ao mês (somente para compras
// acima de R$ 100,00).
// OBS: fazer uma função que imprime as opções solicita a opção desejada e retorna
// a opção escolhida. No programa principal, testar a opção escolhida e ativar a
// função correspondente (uma função para cada opção)
#include <stdio.h>


float avista(float ValorDaCompra){
    float totalDaCompra = ValorDaCompra - (ValorDaCompra*0.1); 
    printf("1 -> total a pagar: R$%.2f",totalDaCompra);
}
float duasVezes(float ValorDaCompra){
    float totalCompra = ValorDaCompra/2;
    printf("2 -> Duas parcelas de: R$%.2f", totalCompra);
}
float TresVezesOuMais(float ValorDaCompra){
    float valorParcelas,totalCompra,juros;
    int qtdDeVezes;
    
    printf("Dividir em quantas vezes ?\n");
    scanf("%d",&qtdDeVezes);
    
    juros = (ValorDaCompra*0.03);
    valorParcelas = ValorDaCompra/qtdDeVezes;
    totalCompra = (valorParcelas+juros)*qtdDeVezes;

    printf("3-> %d Parcelas de %.2f | total a pagar: %.2f",qtdDeVezes,valorParcelas,totalCompra);
}

int main(){

    float totalGasto;
    int opcao;

    printf("Digite o total gasto: \n");
    scanf(" %f", &totalGasto);
    printf("Escolha a forma de pagamento\n");
    printf(" 1 -> A vista\n 2 -> Dividir em 2x\n 3 -> Dividir de 3x até 10x\n");
    scanf("%d", &opcao);
    
    switch (opcao){
    case 1:
        avista(totalGasto);
    break;
    case 2: 
        duasVezes(totalGasto);
    break;
    case 3: 
        TresVezesOuMais(totalGasto);
    break;    
    default:
        printf("default");
        break;
    }
    return 0;
}