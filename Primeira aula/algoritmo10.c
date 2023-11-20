#include<stdio.h>
#include<stdlib.h>

main(){
    float salarioFixo, vendasTotais, comissao, salarioFinal;
    int porcentagemBonus, carros;
    porcentagemBonus = 5;

    printf("Digite o salario fixo:");
    scanf("%f", &salarioFixo);

    getchar();

    printf("Digite o valor das vendas totais realizadas por ele:");
    scanf("%f", &vendasTotais);

    getchar();

    printf("Digite a comissao por cada carro vendido:");
    scanf("%f", &comissao);

    getchar();

    printf("Digite quantos carro ele vendeu:");
    scanf("%d", &carros);

    getchar();

    
    salarioFinal = salarioFixo + (comissao * carros) + ((vendasTotais/100) * porcentagemBonus);

    printf("O valor do salario deste funciorario e %.2f", salarioFinal);





}