#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int *p;
    char *letra;

    p = (int*)malloc(sizeof(int));
    letra = (char*)malloc(sizeof(char));

    printf("O enderco alocado para P: %d\n", p);

    *p = 1987;
    *letra = 'G';

    printf("Valor da variavel Inteiro e %d\n", *p);

    printf("Valor da variavel Letra e %c\n", *letra);




    return 0;
}