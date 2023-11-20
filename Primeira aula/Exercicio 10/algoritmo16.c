#include<stdio.h>
#include<stdlib.h>

int main(){
    int i, escolha;
    float vetor[5];

    for ( i = 0; i < 5; i++)
    {
        printf("Digite um numero:");
        scanf("%f", &vetor[i]);

        getchar();
    }

    printf("Digite um codigo[0 - Encerrar o programa, 1 - Ordem direta, 2 - Ordem inversa]:");
    scanf("%d", &escolha);
    switch (escolha)
    {
    case 0:
        break;
    case 1:
        for ( i = 0; i < 5; i++)
        {
            printf("%.2f  ", vetor[i]);
        }
        break;
    case 2:
        for ( i = 4; i >= 0; i -= 1)
        {
            printf("%.2f  ", vetor[i]);
        }
        break;
    default:
        printf("Codigo invalido!");
        break;
    }
    
    
 
    return 0;
}