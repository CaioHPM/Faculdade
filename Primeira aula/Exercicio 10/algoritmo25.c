#include<stdio.h>
#include<stdlib.h>

int main(){
    int vetor[100], i, j = 0;

    for ( i = 0; i < j; i++)
    {
        j++;
        if (i % 7 == 0 || (i-7)%10 == 0)
        {
            vetor[i] = 0;
            j++;
        }
        else
        {
            vetor[i] = i;
        }
        
    }
    for ( i = 0; i < j; i++)
    {
        if (vetor[i]!=0)
        {
            printf("%d, ", vetor[i]);
        }
        
    }
    
    return 0;
}