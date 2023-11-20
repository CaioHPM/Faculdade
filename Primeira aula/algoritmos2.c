#include<stdio.h>
#include<stdlib.h>

main(){
    float valor1, multi;

    printf("Digite qualquer valor:");
    scanf("%f", &valor1);
    
    getchar();

    multi = valor1 * 2;

    printf("O dobro e %.2f", multi);


}
