#include<stdio.h>
#include<stdlib.h>

main(){
    float reais, dolar;

    printf("Digite a quantia em reais a ser convertida:");
    scanf("%f", &reais);

    getchar();

    dolar = reais / 4.98;

    printf("Essa quantia em dolar e: %.2f", dolar);

}