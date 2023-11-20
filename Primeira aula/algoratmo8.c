#include<stdio.h>
#include<stdlib.h>

main(){
    float salarioInicial, salarioFinal;
    int reajuste;

    printf("Digite o valor atual do salario do funcionario:");
    scanf("%f", &salarioInicial);

    getchar();

    printf("Digite o valor da porcentagem:");
    scanf("%d", &reajuste);

    getchar();

    salarioFinal = ((salarioInicial/100) * reajuste) + salarioInicial;

    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\nDepois do reajuste o salario do funcionario e %.2f", salarioFinal);
    printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");



}