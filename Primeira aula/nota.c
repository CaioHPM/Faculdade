#include<stdio.h>
#include<stdlib.h>

main(){
    float nota1, nota2, resultado;

    printf("Digite a sua nota mensal:");
    scanf("%f", &nota1);

    getchar();

    printf("Digite o valor da nota bimestral:");
    scanf("%f", &nota2);

    getchar();

    resultado = (nota1 + nota2) / 2;
    
    if(resultado >= 7){
        printf("Aprovado, Parabens.");
    }
    else if(resultado > 7 && resultado >= 4){
        printf("Voce esta de recuperacao.");
    }
    else{
        printf("Reprovado.");
    }

}
