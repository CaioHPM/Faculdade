#include<stdio.h>
#include<stdlib.h>

int diasMes(int mes){
    int diasMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
    return diasMes[ mes - 1];
}

void calcularIdade(int dia, int mes, int ano, int diaAtual, int mesAtual, int anoAtual){
    int totalAnos, totalMes, totalDias;
    if (diaAtual >= dia)
    {
        totalDias = diaAtual - dia;
    }
    else{
        totalDias = diaAtual + diasMes(mes) - dia;
        mesAtual--;
    }
    if (mesAtual >= mes)
    {
        totalMes = mesAtual - mes;
    }
    else{
        totalMes = mesAtual + 12 - mes;
        anoAtual--;
    }
    totalAnos = anoAtual - ano;
    
    printf("Idade: %d, total de dias: %d, total de meses: %d, total de anos: %d.", totalAnos, totalDias, totalMes, totalAnos);

}

int main(){
    int dia, mes, ano;
    int diaAtual, mesAtual, anoAtual;

    printf("Digite sua data de nascimento:");
    scanf("%d / %d / %d", &dia, &mes, &ano);

    getchar();

    printf("Digite a data atual:");
    scanf("%d / %d / %d", &diaAtual, &mesAtual, &anoAtual);

    calcularIdade(dia, mes, ano, diaAtual, mesAtual, anoAtual);
    return 0;
}