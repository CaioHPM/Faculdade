#include<stdio.h>
#include<stdlib.h>

int main(){
    int pedido1, pedido2, pedido3, calorias1, calorias2, calorias3, caloriaT;

    printf("=-=-=-=-=-=-Refeicao-=-=-=-=-=-=");
    printf("\n\nPrato Principal!");
    printf("\n1 - Vegetariano ");
    printf("\n2 - Peixe ");
    printf("\n3 - Frango ");
    printf("\n4 - Carne ");
    printf("\n---------------------------------------------");


    printf("\n\nDigite seu pedido:");
    scanf("%d", &pedido1);

    getchar();

    printf("=-=-=-=-=-=-Refeicao-=-=-=-=-=-=");
    printf("\n\nSobremesa!");
    printf("\n1 - Abacaxi ");
    printf("\n2 - Sorvete Diet ");
    printf("\n3 - Mouse Diet ");
    printf("\n4 - Mouse Chocolate ");
    printf("\n---------------------------------------------");


    printf("\n\nDigite seu pedido:");
    scanf("%d", &pedido2);


    getchar();

    printf("=-=-=-=-=-=-Refeicao-=-=-=-=-=-=");
    printf("\n\nBebida!");
    printf("\n1 - Cha ");
    printf("\n2 - Suco de Laraja ");
    printf("\n3 - Suco de Melao ");
    printf("\n4 - Refrigerante Diet ");
    printf("\n---------------------------------------------");


    printf("\n\nDigite seu pedido:");
    scanf("%d", &pedido3);

    getchar();



    switch (pedido1)
    {
        case 1: 
            calorias1 = 180;
            break;
        case 2: 
            calorias1 = 230;
            break;
        case 3:
            calorias1 = 250;
            break;
        case 4: 
            calorias1 = 350;
            break;
        default: printf("Esse numero nao tem no Prato Principal.");
            printf("\n");
            break;
    }
    switch (pedido2)
    {
        case 1: 
            calorias2 = 75;
            break;
        case 2: 
            calorias2 = 110;
            break;
        case 3:
            calorias2 = 170;
            break;
        case 4: 
            calorias2 = 200;
            break;
        default: printf("Esse numero nao tem na Sobremesa.");
            printf("\n");
            break;
    }
    switch (pedido3)
    {
        case 1: 
            calorias3 = 20;
            break;
        case 2: 
            calorias3 = 70;
            break;
        case 3:
            calorias3 = 100;
            break;
        case 4: 
            calorias3 = 65;
            break;
        default: printf("Esse numero nao tem na Bebida.");
            printf("\n");
            break;
    }

    caloriaT = calorias1 + calorias2 + calorias3;

    printf("O valor de calorias totais da refeicao e %d", caloriaT);


    return 0;
}