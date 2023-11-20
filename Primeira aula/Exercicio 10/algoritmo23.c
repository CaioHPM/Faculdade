#include<stdio.h>
#include<stdlib.h>

int main(){
    float vetorA[10], vetorB[10], vetorC[10];
    int i;

    for ( i = 0; i < 5; i++)
    {
        printf("Digite um numero para o vetor A:");
        scanf("%f", &vetorA[i]);

        getchar();
    }
    for ( i = 0; i < 5; i++)
    {
        printf("Digite um numero para o vetor B:");
        scanf("%f", &vetorB[i]);

        getchar();
    }

    printf("\nO vetor C tem:\n");

    for ( i = 0; i < 5; i++)
    {
        vetorC[i] = vetorA[i] * vetorB[i];
        printf("%.2f, ", vetorC[i]);
    }
    

    return 0;
}