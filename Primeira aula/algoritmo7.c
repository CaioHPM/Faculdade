#include<stdio.h>
#include<stdlib.h>

main(){
    int idade, diasTotais, diasN, meses, ano, mesA, mesT, diaA;
    mesA = 8;
    ano = 2023;
    diaA = 30;

    printf("Digite sua data de nascimento(DD/MM/AA):");
    scanf("%d %d %d", &diasN, &meses, &ano);

    getchar();

    idade = 2023 - ano;
    mesT = mesA - meses;
    if (mesT < 0)
    {
        idade = idade - 365;
        mesT = mesT * -1;
    }

    diasTotais = (idade * 365) + (mesT * 30) + (diaA - diasN);

    printf("O tempo total de vida em dias e %d", diasTotais);
}