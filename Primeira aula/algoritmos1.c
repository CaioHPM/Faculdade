#include<stdio.h>
#include<stdlib.h>

/// @brief 
main(){
    int valor1, valor2, soma, subtracao, multiplicacao;
    float divisao;

    printf("Digite o primeiro valor:");
    scanf("%d", &valor1);
    
    getchar();

    printf("\nDigite o segundo valor:");
    scanf("%d", &valor2);

    getchar();

    soma = valor1 + valor2;
    subtracao = valor1 - valor2;
    multiplicacao = valor1 * valor2;
    divisao = (float)valor1 / (float)valor2;

    printf("A soma tem como resultado: %d", soma);
    printf("\nA subtracao tem como resultado: %d", subtracao);
    printf("\nA multiplicacao tem como resultado: %d", multiplicacao);
    printf("\nA divisao tem como resultado: %.2f", divisao);


}