#include<stdio.h>
#include<stdlib.h>

main(){
    float custoFabrica, custoFinal, porcento1;
    int porcentagemDistri, porcentagemImposto;
    porcentagemDistri = 28;
    porcentagemImposto = 45;

    printf("Digite o valor de fabrica:");
    scanf("%f", &custoFabrica);

    getchar();

    porcento1 = (custoFabrica / 100);
    custoFinal = (porcento1 * porcentagemDistri) + (porcento1 * porcentagemImposto) + custoFabrica;

    printf("O valor do veiculo com os impostos inclusos e %.2f", custoFinal);





}