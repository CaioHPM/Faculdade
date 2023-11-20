#include<stdio.h>
#include<stdlib.h>

int main(){
    int pedido, quantidade;
    float valor;

    printf("=-=-=-=-=-=-Lanchonete do Golden-=-=-=-=-=-=");
    printf("\n\nCardapio!");
    printf("\n100 - Cachorro Quente = R$10,10");
    printf("\n101 - Bauru Simples = R$8,30");
    printf("\n102 - Bauru c/ovo = R$8,50");
    printf("\n103 - Hamburger = R$12,50");
    printf("\n104 - Cheseeburger = R$13,25");
    printf("\n---------------------------------------------");


    printf("\n\nDigite seu pedido:");
    scanf("%d", &pedido);

    getchar();

    printf("Digite quantas unidades voce vai querer?");
    scanf("%d", &quantidade);

    getchar();

    switch (pedido)
    {
        case 100: 
            valor = 10.10*quantidade;
            break;
        case 101: 
            valor = 8.30*quantidade;
            break;
        case 102:
            valor = 8.50*quantidade;
            break;
        case 103: 
            valor = 12.50*quantidade;
            break;
        case 104: 
            valor = 13.25*quantidade;
            break;
        default: printf("Esse numero nao tem no cardapio.");
            break;
    }

    printf("O valor total do pedido e %.2f", valor);


    return 0;
}