#include<stdio.h>
#include<stdint.h>
#include<math.h>
#include<string.h>
#define Tam_Max 1000

typedef struct
{
    char nome[100];
    char email[100];
    char sexo[10];
    char endereco[20];
    int id;
    int vacina;
    double altura; 
} Usuario;

void cadastrar(int p[], int indice){
    p[indice].id = rand() % 1000;
    printf("\nDigite o nome:");
    fgets(p[indice].nome, sizeof(p[indice].nome), stdin);
    fflush(stdin);

    printf("\nDigite o seu sexo(Masculino, Feminino, indifirente):");
    fgets(p[indice].sexo, sizeof(p[indice].sexo), stdin);
    fflush(stdin);

    printf("\nDigite seu email:");
    fgets(p[indice].email, sizeof(p[indice].email), stdin);
    fflush(stdin);

    printf("\nDigite 1 - foi vacinado ou 0 - se nao foi vacinado:");
    scanf("%d", &p[indice].vacina);
    getchar():

    printf("\nDigite seu tamanho de 1 a 2 metros:");
    scanf("%lf", &p[indice].altura);
    getchar();

}

void listar(Usuario p[],int totalPessoa){
    for (int i = 0; i < totalPessoa; i++)
    {
        printf("\nId: %d", p[i].id);
        printf("\nNome: %s", p[i].nome);
        printf("\nEmail: %s", p[i].email);
        printf("\nAltura: %lf", p[i].altura);
        printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=--=-");

    }
}

void buscar(Usuario p[], int totalPessoa, int id){
    if (totalPessoa == 0)
    {
        printf("Lista vazia");
        return;
    }
    else{
        for (int i = 0; i < totalPessoa; i++)
        {
            if (p[i].id == id)
            {
                printf("Nome: %s", p[i].nome);
                printf("Altura: %lf", p[i].altura);
                printf("Sexo: %s", p[i].sexo);
                printf("Email: %s", p[i].email);
                printf("Vacina: %d", p[i].vacina);
                
            }
        }
        
    }
    
void Alterar(Usuario p[], int totalPessoa, int id){
    if (totalPessoa == 0)
    {
        printf("Lista vazia");
        return;
    }
    else{
        for (int i = 0; i < totalPessoa; i++)
        {
            if (p[i].id == id)
            {
                printf("Nome: %s", p[i].nome);
                printf("\nAlteracao do registro:");

                
            }
        }
        
    }
    
}

int main(){
    char arroba;
    Usuario p[Tam_Max];
    int opcao, totalPessoas = 0;

    do
    {
        printf("\nDigite:\n");
        printf("\n1 - Cadastrar");
        printf("\n2 - Listar");
        printf("\n3 - Buscar");
        printf("\n4 - Alterar");
        printf("\n5 - Excluir");
        scanf("%d", &opcao);

        getchar();
        switch (opcao)
        {
        case 1:
            if (totalPessoas < Tam_Max)
            {
                cadastrar(p, totalPessoas);
                totalPessoas++;
            }
            else
            {
                printf("O limite foi atingido.");
                opcao = 0;
            }
            break;
        case 2:
            listar(p, totalPessoas);
            break;
        case 3:
            buscar(p, totalPessoas, id);
            break;
        case 4:
            alterar(totalPessoas);
            break;
        case 5:
            excluir(totalPessoas);
            break;
        default:
            if (opcao == 0)
            {
                break;
            }
            else
            {
                printf("Numero digitado e inexistente.");
            }
            break;
        }

    } while (opcao != 0);
    


    //arroba = strchr(p[indice].email, '@');//




    return 0;
}
