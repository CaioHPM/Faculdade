#include<stdio.h>
#include<stdlib.h>

int main(){
    int vetor[10], vetorImpar[10], i;

    for ( i = 0; i < 10; i++)
    {
        do
        {
            printf("Digite um numero de 0 a 50:");
            scanf("%d", &vetor[i]);

            getchar();

        } while (vetor[i]>50 || vetor[i]<0);
        
    }

    printf("No primeiro vetor tem:\n");

    for ( i = 0; i < 10; i++)
    {
        if (vetor[i]%2 == 1)
        {
            vetorImpar[i] = vetor[i];
        }
        printf("%d, ", vetor[i]);
    }

    printf("\nO segundo vetor tem:\n");
    
    for ( i = 0; i < 10; i++)
    {
        if (vetorImpar[i] <= 50 && vetorImpar[i] >= 0)
        {
             printf("%d, ", vetorImpar[i]);
        }
    }
    
    return 0;
}
