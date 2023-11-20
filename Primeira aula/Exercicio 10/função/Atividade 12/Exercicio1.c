#include<stdio.h>
#include<stdlib.h>

void imprimirOpcoes(double gastos){
    int opcao;

    printf("Tem 3 opcoes de pagamento:\n 1 - a vista com 10%% de descontos.\n 2 - Parcelar em duas vezes.\n 3 - Parcelas de 3 a 10 com 3%% de juros ao mes sobre o valor de cada pretacao(so compras acima de 100).");
    scanf("%d", &opcao);

    escolhadeOpcoes(gastos, opcao);
    
}

void escolhadeOpcoes(double gastos, int opcao){
   
    if (opcao == 1)
    {
        opcao1(gastos);
    }
    else if (opcao == 2)
    {
        opcao2(gastos);
    }
    else if (opcao == 3)
    {
        opcao3(gastos);
    }
    else
    {
        printf("Escolha invalida.");
        imprimirOpcoes(gastos);
    }

}

void opcao1(double gastos){
    double resultado;

    resultado = gastos / 100 * 90;

    printf("O valor ficou %lf a vista.", resultado);
}

void opcao2(double gastos){
    double resultado;

    resultado = gastos / 2;

    printf("Seu pagamento vai ficar em duas parcelas de %lf.", resultado);
}

void opcao3(double gastos){
    int parcelas;
    float juros, valorParcela, resultado;

    if (gastos < 100)
    {
        printf("Para ativar esta opcao seu gasto tem que ser maior que 100.\nEscolha uma nova opcao de pagamento.");
        imprimirOpcoes(gastos);
    }
    else{
        printf("Digite em quantas parcelas voce preferi dividir:");
        scanf("%d", &parcelas);

        valorParcela = gastos / parcelas;
        juros = valorParcela / 100 * 3;
        resultado = valorParcela + juros;

        printf("O valor das parcelas ficou %.2f reais com um juros de %.2f reais.", resultado, juros);

    }
    
}
int main(){
    double gastos;

    printf("Qual os gastos totais?\n");
    scanf("%lf", &gastos);

    imprimirOpcoes(gastos);



    return 0;
}