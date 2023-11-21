#include<stdio.h>
#include<math.h>

    double validaQuantidade(){
        int pecas;
        float bonus1 = 0, bonus2 = 0;

        printf("Digite a quantidade de pecas vendidas por esse funcionario.");
        scanf("%d", &pecas);

        getchar();

        if (pecas < 50)
        {
            printf("O funcionario nao tera bonus. Seu salario sera de R$600.");
            return;
        }
        else if (pecas)
        {
            bonus1 = 0.5;
        }
        else if (pecas > 80)
        {
            bonus2 = 0.75;
            bonus1 = 0.5;
        }

        calculoSalario(pecas, bonus1, bonus2);
        
    }

    float calculoSalario



int main(){
    float salarioBase = 600;
    int opcao;
    
    do
    {
        printf("Digite 1 - Novo calculo de salario\nDigite 2 - Encerrar operacao.");
    scanf("%d", &opcao);

    if (opcao == 1)
    {
        validaQuantidade();
    }
    else if (opcao == 2)
    {
        break;
    }
    else
    {
        printf("O valor digitado e invalido.");
    }
    } while (opcao == 2);
    
    
    
    
    




    return 0;
}