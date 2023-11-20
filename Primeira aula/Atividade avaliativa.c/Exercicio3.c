#include<stdio.h>
#include<stdlib.h>

int main(){
    int l1, l2, l3, maior, menor1, menor2, teste;

    printf("Digite 3 valores do triangulo:");
    scanf("%d %d %d", &l1, &l2, &l3);

    getchar();

    if ((l1 > l2) && (l1 > l3)){
        maior = l1;
    }
    else if ((l2 > l1) && (l2 > l3)){
        maior = l2;
    }
    else if ((l3 > l2) && (l3 > l1)){
        maior = l3;
    }

    if ((l1 < l2) && (l1 < l3)){
        menor2 = l1;
    }
    else if ((l2 < l1) && (l2 < l3)){
        menor2 = l2;
    }
    else if ((l3 < l2) && (l3 < l1)){
        menor2 = l3;
    }

    if (l1 == l2 && l1 == l3)
    {
        maior = l1;
        menor2 = l2;
    }

    if (l1 == l2)
    {
        maior = l3;
        menor2 == l1;
    }

    if (l2 == l3)
    {
        maior == l1;
        menor2 == l2;
    }
    
    
    
    
    menor1 = (l1 + l2 + l3) - (maior + menor2);
    teste = menor1 + menor2;
    printf("%d", menor1);

    if (maior > teste)
    {
        printf("Esses valores nao formam um triangulo:");
    }
    
    else
    {
        if (maior == menor1 && maior == menor2 && menor1 == menor2)
        {
            printf("Esse triangulo e equilatero.");
        }

        else if(maior != menor1 && maior != menor2 && menor1 != menor2)
        {
            printf("Esse triangulo e escaleno.");
        }

        else
        {
            printf("Esse triangulo e isosceles.");
        }
    }

    return 0;
}