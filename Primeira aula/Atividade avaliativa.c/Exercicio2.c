#include<stdio.h>
#include<stdlib.h>


int main(){
    float chico = 1.5, ze = 1.1;
    int ano = 0;

    while (chico > ze)
    {
        chico += 0.2;
        ze += 0.3;
        ano ++;
    }
    
    printf("Depois de %d anos ze vai ficar com %.2f metros, e chico ficara com %.2f metros.", ano, ze, chico);


    return 0;
}