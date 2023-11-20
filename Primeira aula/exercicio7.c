#include<stdio.h>
#include<stdlib.h>

int main(){
    float nota1, nota2, nota3, resultado;

    printf("Digite o valor da primeira prova:");
    scanf("%f", &nota1);

    getchar();

    printf("Digite o valor da segunda prova:");
    scanf("%f", &nota2);

    getchar();

    printf("Digite o valor da terceira prova:");
    scanf("%f", &nota3);

    getchar();


    resultado = (nota1 + nota2 + (nota3 * 2)) / 4;

    if(resultado >= 7){
        printf("Aprovado!");
    }
    else{
        printf("Reprovado!");
    }
    printf("Sua nota e %.2f", resultado);

return 0;
}