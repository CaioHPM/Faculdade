#include<stdio.h>
#include<stdlib.h>

main(){
    float raio, area;

    printf("Digite o valor do raio:");
    scanf("%f", &raio);

    getchar();

    area = (pow(raio, 2)) * 3.14;

    printf("O valor da area e %.2f", area);





}