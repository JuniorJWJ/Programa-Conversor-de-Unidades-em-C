#include <stdio.h>
#include <stdlib.h>

#include "../include/velocidade.h"
#include "../include/comprimento.h"
#include "../include/volume.h"
#include "../include/limpaTelaePause.h"
#include "../include/massa.h"


int main()
{
    system("chcp 65001>null");  //função para aceitar caracteres em pt-br

    int conversao;

    do
    {
        printf("CONVERSOR DE UNIDADES EM C:\n");
        printf("1. Conversor de Velocidade\n");
        printf("2. Conversor de Comprimento\n");
        printf("3. Conversor de volume\n");
        printf("4. (Conversor de massa)\n");
        printf("5. (colocar o tipo de conversao)\n");
        printf("6. (colocar o tipo de conversao)\n");
        printf("7. (colocar o tipo de conversao)\n");
        printf("8. (colocar o tipo de conversao)\n");
        printf("9. (colocar o tipo de conversao)\n");
        printf("0. Sair\n");
        printf("Escolha o tipo de conversao que deseje fazer: ");
        scanf("%d", &conversao);
        printf("\n");
        
        limparTela();

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
            conversorVolume();
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