#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int x;
    float resultado, raiz;

    printf("Digite o valor de X:");
    scanf("%d", &x);

    getchar();

    raiz = pow(x, 2) - 16;
    resultado = (5*x + 3) / sqrt(raiz);

    printf("O resultado e %.2f", resultado);



    return 0;
}