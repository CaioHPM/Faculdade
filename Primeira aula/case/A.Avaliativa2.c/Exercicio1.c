#include<stdio.h>
#include<math.h>
#define SALARIO_BASE 600

    
    float calculoSalario(int bonus, int pecas){
        float salarioBonus;

        if (bonus == 1)
        {
            salarioBonus = (pecas - 80) * 0.75 + (30 * 0.5);
        }
        else
        {
            salarioBonus = (pecas - 50) * 0.5;
        }

        return salarioBonus;
    }
    
    
    int validaQuantidade(int pecas){
        int bonus;

        if (pecas < 50)
        {
            printf("O funcionario nao tera bonus. Seu salario sera de R$600.");
            return;
        }
        else if (pecas > 50 && pecas < 80)
        {
            bonus = 2;
        }
        else if (pecas > 80)
        {
            bonus = 1;
        }

        return bonus;
        
    }


int main(){
    int opcao, pecas, bonus;
    float salarioBonus;
    
    do
    {
        printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\nDigite 1 - Novo calculo de salario\nDigite 2 - Encerrar operacao.\n");
        scanf("%d", &opcao);

    if (opcao == 1)
    {
         printf("Digite a quantidade de pecas vendidas por esse funcionario.\n");
        scanf("%d", &pecas);

        getchar();

        bonus = validaQuantidade(pecas);

        salarioBonus = calculoSalario(bonus, pecas);

        printf("O valor do salario final e %.2f reais.\n", salarioBonus + SALARIO_BASE);
    }
    else if (opcao == 2)
    {
        break;
    }
    else
    {
        printf("O valor digitado e invalido.\n");
    }
    } while (opcao != 2);
    
    
    
    
    




    return 0;
}