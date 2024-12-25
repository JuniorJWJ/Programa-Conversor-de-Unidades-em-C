#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#include "../include/bits.h"
#include "../include/velocidade.h"
#include "../include/comprimento.h"
#include "../include/volume.h"
#include "../include/limpaTelaePause.h"
#include "../include/massa.h"
#include "../include/tempo.h"
#include "../include/temperatura.h"
#include "../include/potencia.h"

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    #ifdef _WIN32
        system("chcp 65001");  // Função para aceitar caracteres em pt-br, funciona apenas no Windows
    #endif

    int conversao;

    do
    {    
        clearTerminal();

        printf("CONVERSOR DE UNIDADES EM C:\n");
        
        printf("1. Conversor de Velocidade\n");
        printf("2. Conversor de Comprimento\n");
        printf("3. Conversor de Volume\n");
        printf("4. Conversor de Tempo\n");
        printf("5. Conversor de Temperatura\n");
        printf("6. COnversor de massa\n");
        printf("7. (Conversor de Potencia)\n");
        printf("8. (colocar o tipo de conversao)\n");
        printf("9. Conversor de Bits\n");
        printf("0. Sair\n");
        printf("Escolha o tipo de conversão que deseja fazer: ");
        scanf("%d", &conversao);
        printf("\n");
        
        limparTela();

        switch (conversao)
        {
        case 1:
            conversorVelocidade();
            break;
        case 2:
            conversorComprimento();
            break;
        case 3:
            conversorVolume();
            break;
        case 4:
            conversorTempo();
            break;
        case 5:
            conversorTemperatura();  // Chama o conversor de temperatura
            printf("\n");
            break;

        case 6:
            conversorMassa();
            printf("\n");
            break;
        case 7:
            conversorPotencia();
            printf("\n");
            break;
        case 8:
            // TODO: Adicionar a função do tipo de conversão
            break;
        case 9:
            runBitsConversor();
            break;
        default:
            break;
        }
    } while (conversao != 0); 
}