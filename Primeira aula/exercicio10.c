#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int a, b, c, delta;
    float r1, r2;

    printf("Digite os valores de A, B, C:");
    scanf("%d %d %d", &a, &b, &c);

    getchar();

    delta = pow(b, 2) + (-4*a*c);

    if(a == 0){
        printf("Nao e equacao de segundo grau.");
    }
    else if(delta < 0){
        printf("Nao existe raiz.");
    }
    else if(delta == 0){
        printf("So existe uma raiz.");
        r1 = -b/(2*a);
        printf("\nO resultado da raiz e %.1f", r1);
    }
    else if(delta > 0){
        printf("Existe duas raizes.");
        r1 = (-b + sqrt(delta)) / (2*a);
        r2 = (-b - sqrt(delta)) / (2*a);
        printf("Os valores das raizes e %.2f e %.2f", r1, r2);
    }



    return 0;
}