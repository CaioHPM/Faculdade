#include<stdio.h>
#include<stdlib.h>

int main(){
    float salario, reajuste;
    int tempo;

    printf("Digite o salario do funcionario:");
    scanf("%f", &salario);

    getchar();

    printf("Digite o tempo de servico do funcionario(ano):");
    scanf("%d", &tempo);

    getchar();

    if(salario <= 500){
        reajuste = ((salario/100)*25) + salario;
    }
    else if(salario <= 1000 && salario > 500){
        reajuste = ((salario/100)*20) + salario;
    }
    else if(salario <= 1500 && salario > 1000){
        reajuste = ((salario/100)*15) + salario;
    }
    else if(salario <= 2000 && salario > 1500){
        reajuste = ((salario/100)*10) + salario;
    }
    else{
        reajuste = salario;
    }


    if(tempo < 0){
        reajuste = reajuste;
    }
    else if(tempo >= 1 && tempo <=3){
        reajuste = reajuste + 100;
    }
    else if(tempo >= 4 && tempo <=6){
        reajuste = reajuste + 200;
    }
    else if(tempo >= 7 && tempo <=10){
        reajuste = reajuste + 300;
    }
    else if(tempo > 10){
        reajuste = reajuste + 500;
    }
    
    printf("O valor do reajuste e %.2f", reajuste);
    
    return 0;
}