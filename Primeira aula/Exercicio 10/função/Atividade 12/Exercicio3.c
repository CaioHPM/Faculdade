#include<stdio.h>
#include<stdlib.h>

void printfMatriz(int matriz[10][10]){
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%d  ", matriz[i][j]);
        }
        printf("\n");
    }
    
}

void trocarlinnha2linha8(int matriz[10][10]){
    int aux;
    for (int i = 0; i < 10; i++)
    {
        aux = matriz[1][i];
        matriz[1][i] = matriz[7][i];
        matriz[7][i] = aux;
    }

}

void trocarColuna4Coluna10(int matriz[10][10]){
    int aux;
    for (int i = 0; i < 10; i++)
    {
        aux = matriz[i][3];
        matriz[i][3] = matriz[i][9];
        matriz[i][9] = aux;
    }
    
}

void trocarDiagonal(int matriz[10][10]){
    int aux;
    for (int i = 0; i < 10; i++)
    {
        aux = matriz[i][i];
        matriz[i][i] = matriz[i][i - 9];
        matriz[i][i - 9] = aux;
    }

}

void trocarLinha5Coluna10(int matriz[10][10]){
    int aux;
    for (int i = 0; i < 10; i++)
    {
        aux = matriz[4][i];
        matriz[4][i] = matriz[i][9];
        matriz[i][9] = aux;
    }
    
}

int main(){
    int matriz[10][10];

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; i++)
        {
            matriz[i][j] = i * 10 + j;
        }
        printf("\n");
    }

    printfMatriz(matriz);
    trocarlinnha2linha8(matriz);
    trocarColuna4Coluna10(matriz);
    trocarDiagonal(matriz);
    trocarLinha5Coluna10(matriz);
    printf("\n");
    printfMatriz(matriz);

    return 0;
}