#include<stdio.h>
#include<string.h>

struct pessoa
{
    char nome[20];
    int idade;
    double cpf;
    float salario;
};

typedef struct
{
    char rua[10];
    int numero;
}Endereco;

int main(){
    struct pessoa p1;
    Endereco end;

    strcpy(p1.nome, "Caio");
    p1.idade = 18;
    p1.cpf = 12345678911;
    p1.salario = 3500;

    printf("Nome: %s", p1.nome);
    printf("\nIdade: %d", p1.idade);
    printf("\nCPF: %.2lf", p1.cpf);
    printf("\nSalario: %.2f", p1.salario);

    printf("\nDigite a rua: ");
    fgets(end.rua, sizeof(end.rua), stdin);
    printf("Digite o numero: ");
    scanf("%d", &end.numero);

    fflush(stdin);

    printf("\nNome: %s", end.rua);

    fflush(stdin);

    printf("Numero: %d", end.numero);

    return 0;
}
