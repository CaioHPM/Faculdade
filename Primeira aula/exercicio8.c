#include<stdio.h>
#include<stdlib.h>

int main(){
    int idade, tempo;

    printf("Digite a idade do funcionario:");
    scanf("%d", &idade);

    getchar();

    printf("Digite o tempo de serviço do funcionario:");
    scanf("%d", &tempo);

    getchar();


    if(idade >= 65 || tempo >= 30 || (idade >= 60 && tempo >= 25)){
        printf("O funcionario pode se aposentar.");
    }
    else{
        printf("O funcionario nao pode se aposentar.");
    }







    return 0;
}