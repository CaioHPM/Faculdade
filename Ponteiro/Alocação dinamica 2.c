#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef struct{
    char nome[20];
    int idade;
    float nota;
}Aluno;

Aluno* cadastrar(){
    Aluno *aluno = (Aluno*)malloc(sizeof(Aluno));
    printf("Digite o nome do aluno:\n");
    fgets(aluno->nome, sizeof(aluno->nome), stdin);
    fflush(stdin);
    
    printf("Digite a idade do aluno:\n");
    scanf("%d", &aluno->idade);
    getchar();

    printf("Digite a nota do aluno:\n");
    scanf("%f", &aluno->nota);
    getchar();

    return aluno;
}

int main(){
    Aluno *a;
    a = cadastrar();

    printf("Nome: %s", a->nome);
    printf("Idade: %d\n", a->idade);
    printf("Nota: %f\n", a->nota);

    free(a);

    return 0;
}