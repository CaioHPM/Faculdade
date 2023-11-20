#include<stdio.h>
#include<math.h>

double volumeE(double);

main(){
    double raio = 1;
    double volume = volumeE(raio);

    printf("O volume e %lf", volume);

    volumeE (raio);
}

double volumeE(double raio){
    double pi = 3.1414592, volume;

    volume = 4 / (3*pi * pow(raio, 3));
    return volume;
}