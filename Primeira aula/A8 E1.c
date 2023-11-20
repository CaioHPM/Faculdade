#include<stdio.h>
#include<stdlib.h>

int main(){
    int contador, idade, voto, otimo = 0, bom = 0, regular = 0, ruim = 0, pessimo = 0;
    float mediaIdade = 0;

    for ( contador = 0; contador < 100; contador++)
    {
        printf("Digite sua idade:");
        scanf("%d", &idade);

        getchar();

        printf("Digite sua opiniao[1 - otimo, 2 - bom, 3 - regular, 4 - ruim, 5 - pessimo.]:");
        scanf("%d", &voto);

        getchar();

        switch (voto)
        {
        case 1:
            otimo++;
            break;
        case 2: 
            bom++;
            break;
        case 3:
            regular++;
            break;
        case 4:
            ruim++;
            mediaIdade = mediaIdade + idade;
            break;
        case 5: 
            pessimo++;
            break; 
        }
        
    }
    printf("")
    




    return 0;
}