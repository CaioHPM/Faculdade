#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int *p1, *p2;

    p1 = (int)malloc(sizeof(int));
    p2 = (int)malloc(sizeof(int));

    printf("\nDigite o valor do primeiro numero:");
    scanf("%d", *p1);

    getchar();

    printf("\nDigite o valor do segundo numero:");
    scanf("%d", *p2);

    if (*p1 > *p2)
    {
        printf("O primeiro numero e maior.");
    }
    else if (*p2 > *p1)
    {
        printf("O segundo numero e o maior.");
    }
    



    return 0;
}