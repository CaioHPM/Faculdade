#include<stdio.h>
#include<stdlib.h>

void comparar(int n1, int n2){
    if (n1 > n2)
    {
        printf("O valor maior e %d.", n1);
    }
    else
    {
        printf("O valor maior e %d.", n2);
    }
}

int main(){
    int n1, n2;

    printf("Digite o valor:");
    scanf("%d", &n1);

    getchar();

    printf("Digite o segundo valor?");
    scanf("%d", &n2);

    comparar (n1, n2);

}
