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

    printf("\nNo vetor C tem:\n");

    for ( i = 0; i < 10; i++)
    {
        if (i % 2 == 1)
        {
            vetorC[i] = vetorB[i];
        }
        if (i % 2 == 0)
        {
            vetorC[i] = vetorA[i];
        }
        
        printf("%d, ", vetorC[i]);

    }
    

    return 0;
}