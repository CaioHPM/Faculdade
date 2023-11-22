#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    char ser = 'H';
    float nr = 5.5;
    int ni = 5;
    int *pInteiro;
    float *pReal; 
    char *pChar;

    pChar = &ser;
    pReal = &nr;
    pInteiro = &ni;

    *pChar = 'P';
    *pReal = 7.8;
    *pInteiro = 3;

    printf("O valor da variavel Char e %c\n", ser);
    printf("O valor da variavel Real e %f\n", nr);
    printf("O valor da variavel Inteiro e %d\n", ni);


    return 0;
}