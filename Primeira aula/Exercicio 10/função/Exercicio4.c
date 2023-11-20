#include<stdio.h>
#include<math.h>

double volumeC(double, double);

main(){
    double altura = 2, raio = 1;
    double volume = volumeC(altura, raio);
    printf("Volume do cilindro: %lf", volume);

    volumeC (altura, raio);
}

double volumeC(double altura, double raio){
    double pi = 3.14, volume;

    volume = (pow(raio, 2) * pi) * altura;
    return volume;
}