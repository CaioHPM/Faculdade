#include<stdio.h>
#include<stdlib.h>

int main(){
    int vetor[10], parecidos[10], i1, i2;

    for ( i1 = 0; i1 < 10; i1++)
    {
        printf("Digite um numero:");
        scanf("%d", &vetor[i1]);

        getchar();
    }
    
    for ( i1 = 0; i1 < 10; i1++)
    {
        for ( i2 = i1+1; i2 < 10; i2++)
        {
            if (vetor[i1] == vetor[i2])
            {
                vetor[i1] = 0;
                vetor[i2] = 0;
            }
        }
        
    }
    for ( i1 = 0; i1 < 10; i1++)
    {
        if (vetor[i1] != 0)
        {
            printf("%d", vetor[i1]);
        }
        
    }
    
 
    return 0;
}