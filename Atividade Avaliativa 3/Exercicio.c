#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef struct Produto{
    int codigo;
    char nome[40];
    int quantidade;
    float valor;
    struct Produto *prox;
}Produto;

void consultarProduto(Produto *lista, int codigo);

Produto* criarListaVazia(){
    return NULL;
}

Produto* criarNovoProduto(){
    Produto *novoProduto;
    novoProduto = (Produto*)malloc(sizeof(Produto));

    if(novoProduto == NULL){
        printf("Não foi possivel alocar memoria.");
        exit(EXIT_FAILURE);
    }
    novoProduto -> prox = NULL;
    
    return novoProduto;
}

Produto* cadastrar(Produto *lista){
    Produto *novoProduto = criarNovoProduto();

    printf("\nDigite o codigo do produto:");
    scanf("%d", &novoProduto->codigo);
    getchar();
    printf("\nDigite o nome do produto:");
    fgets(novoProduto->nome, sizeof(novoProduto->nome), stdin);
    fflush(stdin);
    printf("Digite a quantidade de produtos:");
    scanf("%d", &novoProduto->quantidade);
    getchar();
    printf("Digite o valor do produto:");
    scanf("%f", &novoProduto->valor);
    getchar();

    if (lista == NULL){
        lista = novoProduto;
    }
    else
    {
        Produto *atual = lista;
        while (atual->prox != NULL)
        {
            atual = atual->prox;
        }
        atual->prox = novoProduto;
    }
    return lista;
}

void consultarProduto(Produto *lista, int codigo){
    Produto *atual;
    atual = lista;

    if (atual == NULL)
    {
        printf("Lista de produtos esta vazia.");
        return;
    }
    else
    {
        while(atual->codigo != codigo){
            atual = atual->prox;
        }
        printf("Nome: %s", atual->nome);
        printf("Codigo: %d\n", atual->codigo);
        printf("Quantidade: %d\n", atual->quantidade);
        printf("Valor por unidade: %.2f", atual->valor);
    }
    
    return;
}

void gerarRelatorio(Produto *lista){
    Produto *atual;
    atual = lista;

    if (atual == NULL)
    {
        printf("Lista de produtos esta vazia.");
        return;
    }
    else
    {
        while(atual != NULL){
            printf("Nome: %s", atual->nome);
            printf("Codigo: %d\n", atual->codigo);
            printf("Quantidade: %d\n", atual->quantidade);
            printf("Valor por unidade: %.2f", atual->valor);
            printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
            atual = atual->prox;
        }
        printf("Nome: %s", atual->nome);
        printf("Codigo: %d\n", atual->codigo);
        printf("Quantidade: %d\n", atual->quantidade);
        printf("Valor por unidade: %.2f\n", atual->valor);
        printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");

        return;
    }
    
    return;
}

Produto* excluirProduto(Produto *lista, int codigo){
    Produto *atual;
    Produto *anterior;
    anterior = NULL;
    atual = lista;

    while(atual->codigo != codigo){
            anterior = atual;
            atual = atual->prox;
        }

    if (anterior == NULL)
    {
        lista = atual->prox;
    }
    else
    {
        anterior = atual->prox;

    }
    
    free(atual);
    return lista;
}

int main(){
    Produto *lista = criarListaVazia();

    int codigo;
    int opcao;
    do
    {
        printf("\nDigite 1 - Cadastrar um novo produto");
        printf("\nDigite 2 - Consultar produtos");
        printf("\nDigite 3 - Gerar relatorio");
        printf("\nDigite 4 - Excluir Produto");
        printf("\nDigite 0 - Sair\n");
        scanf("%d", &opcao);

        getchar();

        switch (opcao)
        {
        case 1:
            lista = cadastrar(lista);
            break;
        case 2:
            printf("Digite o codigo do produto:");
            scanf("%d", &codigo);
            getchar();
            consultarProduto(lista, codigo);
            break;
        case 3:
            gerarRelatorio(lista);
            break;
        case 4:
            printf("Digite o codigo do produto:");
            scanf("%d", &codigo);
            lista = excluirProduto(lista, codigo);
            break;
        case 0:
            break;
        default:
            printf("O valor digitado invalido.");
            break;
        }
    } while (opcao != 0);
    





    return 0;
}