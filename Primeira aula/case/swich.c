#include<stdio.h>
#include<stdlib.h>

int main(){
    int ddd;

    printf("Digite um numero de DDD do Brasil:");
    scanf("%d", &ddd);

    getchar();

    switch (ddd)
    {
        case 61: printf("Esse DDD e de Brasilia.");
            break;
        case 71: printf("Esse DDD e de Salvador.");
            break;
        case 11: printf("Esse DDD e de Sao Paulo.");
            break;
        case 21: printf("Esse DDD e de Rio de Janeiro.");
            break;
        case 32: printf("Esse DDD e de Juiz de Fora.");
            break;
        case 19: printf("Esse DDD e de Campinas.");
            break;
        case 27: printf("Esse DDD e de Vitoria.");
            break;
        case 31: printf("Esse DDD e de Belo Horizonte.");
            break;
        default: printf("Esse DDD nao esta nos registros");
            break;
    }


    return 0;
}