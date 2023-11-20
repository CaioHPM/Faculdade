#include<stdio.h>
#include<stdlib.h>

int main(){
    int vetor[10], i;

    for ( i = 0; i < 10; i++)
    {
        printf("Digite um numero:");
        scanf("%d", &vetor[i]);

        getchar();
    }
    for ( i = 0; i < 10; i++)
    {
        if (vetor[i] < 0)
        {
            vetor[i] = 0;
        }
        printf("%d", vetor[i]);
    }
    
    
 
    return 0;
}