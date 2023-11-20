#include<stdio.h>
#include<math.h>

void promocao(int livrosClientes[500]){
    int livroExtra;
    
    for (int i = 0; i < 500; i++)
    {
        livroExtra = livrosClientes[i] / 15;
        printf("Esse cliente tem acesso a %d livros da promocao.\n", livroExtra);
    }
    
}

int main(){
    int livrosClientes[500];

    for (int i = 0; i < 500; i++)
    {
        printf("Quantos livros esse cliente pegou:\n");
        scanf("%d", &livrosClientes[i]);
    }

    promocao(livrosClientes);

    return 0;
}