#include<stdio.h>
#include<stdlib.h>

int main(){
    int vetor[10], i, x;

    for ( i = 0; i < 10; i++)
    {
        printf("Digite um numero:");
        scanf("%d", &vetor[i]);

        getchar();
    }
    
    printf("Digite um valor:\n");
    scanf("%d", &x);

    getchar();

    for ( i = 0; i < 10; i++)
    {
        if ((vetor[i]%x) == 0 )
        {
            printf("%d, ", vetor[i]);
        }
        
    }
     printf("\nEsses valores são multiplos do valor %d:\n", x);
    
 
    return 0;
}