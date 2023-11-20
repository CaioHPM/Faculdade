#include<stdio.h>
#include<stdlib.h>

int main(){
    int vetorA[10], vetorB[10], vetorC[10], i;

    for ( i = 0; i < 10; i++)
    {
        printf("Digite um numero para o vetor A:");
        scanf("%d", &vetorA[i]);

        getchar();
    }
    for ( i = 0; i < 10; i++)
    {
        printf("Digite um numero para o vetor B:");
        scanf("%d", &vetorB[i]);

        getchar();
    }

    printf("\nOs valores do vetor C e:\n");

    for ( i = 0; i < 10; i++)
    {
        vetorC[i] = vetorA[i] - vetorB[i];
        printf("%d, ", vetorC[i]);
    }

    return 0;
}