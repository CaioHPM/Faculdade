#include<stdio.h>
#include<stdlib.h>

main(){
    float custoMercadoria, frete, despesas, valorFinal, lucro;
    float porcentagem;

    printf("Digite o valor da mercadoria:");
    scanf("%f", &custoMercadoria);

    getchar();

    printf("Digite o custo do frete:");
    scanf("%f", &frete);
    
    getchar();

    printf("Digite o valor das outras despesas:");
    scanf("%f", &despesas);

    getchar();

    printf("Digite o valor da venda do produto:");
    scanf("%f", &valorFinal);

    getchar();

    lucro = valorFinal - (custoMercadoria + frete + despesas);
    porcentagem = (lucro/valorFinal) * 100;

    printf("O lucro e %.2f, e em porcentagem e %.2f", lucro, porcentagem);








}