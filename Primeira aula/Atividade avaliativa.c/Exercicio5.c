#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int x1, x2, y1, y2;
    float resultado;

    printf("Digite o X e o Y do primeiro ponto:");
    scanf("%d %d", &x1, &y1);

    getchar();

    printf("Digite o X e o Y do segundo ponto:");
    scanf("%d %d", &x2, &y2);

    getchar();


    resultado = sqrt((pow(x2, 2) - pow(x1,2)) + (pow(y2, 2) - pow(y1, 2)));

    printf("A distancia e %.4f", resultado);

    return 0;
}