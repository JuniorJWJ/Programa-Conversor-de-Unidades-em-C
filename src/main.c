#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#include "../include/bits.h"
#include "../include/velocidade.h"
#include "../include/comprimento.h"

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int conversao;

    do
    {    
        clearTerminal();

        printf("CONVERSOR DE UNIDADES EM C:\n");
        
        printf("1. Conversor de Velocidade\n");
        printf("2. Conversor de Comprimento\n");
        printf("3. (colocar o tipo de conversão)\n");
        printf("4. (colocar o tipo de conversão)\n");
        printf("5. (colocar o tipo de conversão)\n");
        printf("6. (colocar o tipo de conversão)\n");
        printf("7. (colocar o tipo de conversão)\n");
        printf("8. (colocar o tipo de conversão)\n");
        printf("9. Conversor de Bits\n");
        
        printf("0. Sair\n");

        printf("Escolha o tipo de conversão que deseja fazer: ");
        scanf("%d", &conversao);
        printf("\n");

        switch (conversao)
        {
        case 1:
            conversorVelocidade();
            break;
        case 2:
            conversorComprimento();
            break;
        case 3:
            printf("adicionar a função do tipo de conversão");
            break;
        case 4:
            printf("adicionar a função do tipo de conversão");
            break;
        case 5:
            printf("adicionar a função do tipo de conversão");
            break;
        case 6:
            printf("adicionar a função do tipo de conversão");
            break;
        case 7:
            printf("adicionar a função do tipo de conversão");
            break;
        case 8:
            printf("adicionar a função do tipo de conversão");
            break;
        case 9:
            runBitsConversor();
            break;
        default:
            break;
        }
    } while (conversao != 0); 
}