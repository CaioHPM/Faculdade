#include<stdio.h>
#include<stdlib.h>

int main(){
    int valor;

    printf("Digite um numero:");
    scanf("%d", &valor);

    getchar();

    while (0 <= valor)
    {
        printf("\n%d", valor);
        valor--;
    }
    
    return 0;
}