#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef struct pessoa{
    int id;
    char nome[40];
    int idade;
    struct pessoa *prox;
}pessoa;
pessoa* criarListaVazia(){
    return NULL;
}

pessoa* criarNovaPessoa(){
    pessoa *novaPessoa;
    novaPessoa = (pessoa*)malloc(sizeof(pessoa));

    if(novaPessoa == NULL){
        printf("Não foi possivel alocar memoria.");
        exit(EXIT_FAILURE);
    }
    novaPessoa -> prox = NULL;
    
    return novaPessoa;
}

pessoa* cadastrar(pessoa *lista){
    pessoa *novaPessoa = criarNovaPessoa();
    
    srand(time(NULL));
    novaPessoa->id = rand() % 100; 
    printf("\nDigite o nome:");
    fgets(novaPessoa->nome, sizeof(novaPessoa->nome), stdin);
    printf("Digite a sua idade:");
    scanf("%d", &novaPessoa->idade);

    if (lista == NULL){
        lista = novaPessoa;
    }
    else
    {
        pessoa *atual = lista;
        while (atual->prox != NULL)
        {
            atual = atual->prox;
        }
        atual->prox = novaPessoa;
    }
    return lista;
}

int main(){
    pessoa *lista = criarListaVazia();

    int opcao;
    do
    {
        printf("\nDigite 1 - Cadastrar uma pessoa");
        printf("\nDigite 2 - Mostrar todas as pessoas");
        printf("\nDigite 3 - Buscar pessoa");
        printf("\nDigite 4 - Alterar usuario");
        printf("\nDigite 5 - Excluir usuario");
        printf("\nDigite 0 - Sair\n");
        scanf("%d", &opcao);

        getchar();

        switch (opcao)
        {
        case 1:
            lista = cadastrar(lista);
            break;
        case 2:

        
        default:
            break;
        }
    } while (opcao != 0);
    





    return 0;
}