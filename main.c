#include <stdio.h>
#include <stdlib.h>
#include "velocidade.h"
#include "comprimento.h"

int main()
{
    int conversao;

    do
    {
        printf("CONVERSOR DE UNIDADES EM C:\n");
        printf("1. Conversor de Velocidade\n");
        printf("2. Conversor de Comprimento)\n");
        printf("3. (colocar o tipo de conversao)\n");
        printf("4. (colocar o tipo de conversao)\n");
        printf("5. (colocar o tipo de conversao)\n");
        printf("6. (colocar o tipo de conversao)\n");
        printf("7. (colocar o tipo de conversao)\n");
        printf("8. (colocar o tipo de conversao)\n");
        printf("9. (colocar o tipo de conversao)\n");
        printf("0. Sair\n");
        printf("Escolha o tipo de conversao que deseje fazer: ");
        scanf("%d", &conversao);
        printf("\n");

        switch (conversao)
        {
        case 1:
            conversorVelocidade();
            printf("\n");
            break;
        case 2:
            conversorComprimento();
            printf("\n");
            break;
        case 3:
            printf("adicionar a funcao do tipo de conversao");
            printf("\n");
            break;
        case 4:
            printf("adicionar a funcao do tipo de conversao");
            printf("\n");
            break;
        case 5:
            printf("adicionar a funcao do tipo de conversao");
            printf("\n");
            break;
        case 6:
            printf("adicionar a funcao do tipo de conversao");
            printf("\n");
            break;
        case 7:
            printf("adicionar a funcao do tipo de conversao");
            printf("\n");
            break;
        case 8:
            printf("adicionar a funcao do tipo de conversao");
            printf("\n");
            break;
        case 9:
            printf("adicionar a funcao do tipo de conversao");
            printf("\n");
            break;
        default:
            break;
        case 0:
            printf("Saindo...\n");
            printf("\n");
            break;
        }



    } while (conversao !=0);
    
}