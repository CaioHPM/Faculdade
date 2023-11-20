#include<stdio.h>
#include<stdlib.h>

   int main(){
        float altura, salario, peso;
        int idade;

        printf("Digite sua idade:");
        scanf("%d", &idade);
        
        getchar();

        printf("Digite seu salario:");
        scanf("%f", &salario);
        
        getchar();

        printf("Digite seu tamanho(metros):");
        scanf("%f", &altura);
        
        getchar();

        printf("Digite seu peso:");
        scanf("%f", &peso);
        
        getchar();
        

        if(idade >= 18){
            printf("Voce e maior de idade.");
        }
        else{
            printf("Voce e menor de idade.");
        }

        if(salario > 1320){
            printf("\nSeu salario e maior que o minimo.");
        }
        else{
            printf("\nSeu salario e minimo.");
        }

        if(altura > 1.8){
            printf("\nVoce e maior que 1 metro e 80 centimetros.");
        }
        else{
            printf("\nVoce e menor que 1 metro e 80 centimetros.");
        }

        if(peso > 60){
            printf("\nVoce ta cheinho.");
        }
        else{
            printf("\nVoce e puro osso.");
        }
    return 0;
    }