#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

typedef struct Veiculo{
    char proprietario[30];
    char combustivel[30];
    char modelo[30];
    char cor[20];
    int numeroChassi;
    int ano;
    char placa[10];
    struct Veiculo *prox;
}Veiculo;

Veiculo* iniciarLista(){
    return NULL;
}

Veiculo* criarNovoVeiculo(){
    Veiculo *novoVeiculo;
    novoVeiculo = (Veiculo*)malloc(sizeof(Veiculo));

    if(novoVeiculo == NULL){
        printf("Não foi possivel alocar memoria.");
        exit(EXIT_FAILURE);
    }
    novoVeiculo -> prox = NULL;
    
    return novoVeiculo;
}

Veiculo* cadastrarVeiculo(Veiculo *lista){
    Veiculo *novoVeiculo = criarNovoVeiculo();

    printf("\nDigite o nome do proprietário do veiculo: ");
    scanf("%s", &novoVeiculo->proprietario);

    printf("Qual o tipo de combustível? Álcool/Diesel/Gasolina ");
    scanf("%s", &novoVeiculo->combustivel);

    printf("Digite o modelo do veículo: ");
    scanf("%s", &novoVeiculo->modelo);

    printf("Digite a cor do veículo: ");
    scanf("%s", &novoVeiculo->cor);

    printf("Digite o número do chassi: ");
    scanf("%d", &novoVeiculo->numeroChassi);

    printf("Digite o ano de fabricação: ");
    scanf("%d", &novoVeiculo->ano);

    printf("Digite a placa do veículo: [abc1234] ");
    scanf("%s", &novoVeiculo->placa);
    while (getchar() != '\n');
   
    if (lista == NULL)
    {
        lista = novoVeiculo;
    }
    else
    {
        Veiculo *atual = lista;

        while (atual->prox != NULL)
        {
            atual = atual->prox;
        }
        atual->prox = novoVeiculo;
        
    }
    return lista;
}

void listarProprietarios(Veiculo *lista){
    Veiculo *atual = lista;
    int contador = 0;

    if (lista == NULL)
    {
        printf("A lista esta vazia.");
    }
    else
    {
        while (atual->prox != NULL)
        {
            if (atual->ano >= 2010 && strcmp(atual->combustivel, 'diesel'))
            {
                printf("\nProprietario: %s", atual->proprietario);
                printf("------------------------------\n");
                contador++;
            }
        
        atual = atual->prox;
        
        }
        if (contador == 0)
        {
            printf("Não tem proprietarios que se encaixem nessa descrição.");
        }
    }
}

void listarPlacas(Veiculo *lista){
    Veiculo *atual = lista;
    int contador = 0;
    char primeiraLetra = atual->placa[0];
    int ultimoNumero = atual->placa[6];

    if (lista == NULL)
    {
        printf("A lista está vazia.");
    }
    else
    {
        while (atual->prox != NULL)
        {
            if (primeiraLetra == 'J' || primeiraLetra == 'j')
            {
                if (ultimoNumero == 0 || ultimoNumero == 2 || ultimoNumero == 4 || ultimoNumero == 7)
                {
                    printf("\n Placa: %s", atual->placa);
                    printf("------------------------------\n");
                    contador++;
                }
            }
        
            atual = atual->prox;
        
        }
        if (contador == 0)
        {
            printf("Não tem placas que se encaixem nessa descrição.");
        }
    }
}

void listarModeloCor(Veiculo *lista){
    Veiculo *atual = lista;
    int contador = 0;
    char segundaLetra = atual->placa[0];
    int soma = atual->placa[6] + atual->placa[5] + atual->placa[4] + atual->placa[3];

    if (lista == NULL)
    {
        printf("A lista está vazia.");
    }
    else
    {
        while (atual->prox != NULL)
        {
            if (segundaLetra == 'A' || segundaLetra == 'a' ||
                segundaLetra == 'E' || segundaLetra == 'e' ||
                segundaLetra == 'I' || segundaLetra == 'i' ||
                segundaLetra == 'O' || segundaLetra == 'o' ||
                segundaLetra == 'U' || segundaLetra == 'u'   )
            {
                if (soma % 2 == 0)
                {
                    printf("\n Modelo: %s", atual->modelo);
                    printf("\n Cor: %s", atual->cor);
                    printf("------------------------------\n");
                    contador++;
                }
            }
        
            atual = atual->prox;
        
        }
        if (contador == 0)
        {
            printf("Não tem placas que se encaixem nessa descrição.");
        }
    }
}

Veiculo* trocarProprietario(Veiculo *lista, int numChassi){
    Veiculo *atual;
    atual = lista;
    int primeiroNum = atual->placa[3];
    int segundoNum = atual->placa[4];
    int terceiroNum = atual->placa[5];
    int quartoNum = atual->placa[6];
    int contador = 0;

    if (lista == NULL)
    {
        printf("A lista está vazia.");
    }
    else{
        while(atual->prox != NULL){
            if (atual->numeroChassi == numChassi)
            {
                if (primeiroNum != 0 && segundoNum != 0 && terceiroNum != 0 && quartoNum != 0)
                {
                    printf("Digite o nome do novo proprietario:");
                    scanf("%s", &atual->proprietario);
                }
                contador++;
            }
        
            atual = atual->prox;
        }
    }
    if (contador == 0)
    {
        printf("Não foi encontrado nenhum veiculo com essa numeração de chassi.");
    }

    return lista;
}


int main(){
    Veiculo *lista = iniciarLista();

    int opcao, numChassi;

    do
    {
        printf("Digite 1 - Cadastrar novo Veiculo.\n");
        printf("Digite 2 - listar todos os proprietários cujos Veiculos são do ano de 2010 ou posterior e que sejam movidos a diesel.\n");
        printf("Digite 3 - listar todas as placas que comecem com a letra J e terminem com 0, 2, 4 ou 7 e seus respectivos proprietários.\n");
        printf("Digite 4 - listar o modelo e a cor dos veículos cujas placas possuem como segunda letra uma vogal e cuja soma dos valores numéricos fornece um número par.\n");
        printf("Digite 5 - troca de proprietário com o fornecimento do número do chassi apenas para Veiculos com placas que não possuam nenhum dígito igual a zero.\n");
        printf("Digite 0 - Encerrar programa.");
        scanf("%d", &opcao);


        switch (opcao)
        {
        case 1:
            lista = cadastrarVeiculo(lista);
            break;
        case 2:
            listarProprietarios(lista);
            break;
        case 3:
            listarPlacas(lista);
            break;
        case 4:
            listarModeloCor(lista);
            break;
        case 5:
            printf("\nDigite o número do chassi:");
            scanf("%d", &numChassi);
            getchar();
            lista = trocaProprietario(lista, numChassi);
            break;
        case 0:
            break;
        default:
            printf("O valor digitado e invalido, tente novamente.\n");
            break;
        }
        
        
        
    } while (opcao != 0);
    
    return 0;
}