#include<stdio.h>
#include<stdlib.h>

main(){
    float comprimento, largura, area;

    printf("Digite o comprimento da sala(m):");
    scanf("%f", &comprimento);
    
    getchar();
    
    printf("\nDigite a largura da sala(m):");
    scanf("%f", &largura);

    getchar();

    area = comprimento * largura;

    printf("A area da sala e %.2fm²", area);





}