#include<stdio.h>
#include<stdlib.h>

void meses(int mes){
    int dias;

    switch (mes)
    {
    case 1:
        printf("O mes e Janeiro.");
        dias = 30;
        break;
    case 2:
        printf("O mes e Fevereiro.");
        dias = 28;
        break;
    case 3:
        printf("O mes e Marco.");
        dias = 30;
        break;
    case 4:
        printf("O mes e abril.");
        dias = 31;
        break;
    case 5:
        printf("O mes e Maio.");
        dias = 30;
        break;
    case 6:
        printf("O mes e Junho.");
        dias = 30;
        break;
    case 7:
        printf("O mes e Julho.");
        dias = 31;
        break;
    case 8:
        printf("O mes e Agosto.");
        dias = 31;
        break;
    case 9:
        printf("O mes e Setembro.");
        dias = 30;
        break;
    case 10:
        printf("O mes e Outubro.");
        dias = 31;
        break;
    case 11:
        printf("O mes e Novembro.");
        dias = 30;
        break;
    case 12:
        printf("O mes e Marco.");
        dias = 30;
        break;
    default:
        printf("O valor não representa um mes.");
        break;
    }

    printf("Esse mes tem %d dias.", dias);
}

int main(){
    int mes;

    printf("Digite o numero do mes:");
    scanf("%d", &mes);

    meses (mes);

    return 0;
}