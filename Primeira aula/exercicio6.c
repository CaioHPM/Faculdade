#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
    int numero;

    printf("Digite um valor inteiro:");
    scanf("%d", &numero);

    getchar();

    if((numero % 2) == 0){
        printf("O valor %d e par.", numero);
    }
    else{
        printf("O valor %d e impar.", numero);
    }

    return 0;
}