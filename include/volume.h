#include <stdio.h>
#include "./utils.h"

float litroParaMililitro(float litro) {
    return litro * 1000.0;
}

float litroParaMetroCubico(float litro) {
    return litro / 1000.0;
}

float mililitroParaLitro(float ml) {
    return ml / 1000.0;
}

float mililitroParaMetroCubico(float ml) {
    return ml / 1000000.0;
}

float metroCubicoParaLitro(float m3) {
    return m3 * 1000.0;
}

float metroCubicoParaMililitro(float m3) {
    return m3 * 1000000.0;
}

void conversorVolume() {
    int cVolume;
    float valorV;

    do {
        do{     
            clearTerminal();

            printf("CONVERSOR DE VOLUME:\n\n");
            printf("1. Litro para Mililitro.\n");
            printf("2. Litro para Metro Cúbico.\n");
            printf("3. Mililitro para Litro.\n");
            printf("4. Mililitro para Metro Cúbico.\n");
            printf("5. Metro Cúbico para Litro.\n");
            printf("6. Metro Cúbico para Mililitro.\n");
            printf("\n0. Sair.\n");
        } while (input(&cVolume, INT, "\nEscolha o tipo de conversão que deseja fazer: ") != 1);

        switch (cVolume) {
            case 1:
                printf("Digite o valor em litros: ");
                scanf("%f", &valorV);
                printf("\n%.2f litros = %.2f mililitros\n\n", valorV, litroParaMililitro(valorV));
                getchar();
                break;
            case 2:
                printf("Digite o valor em litros: ");
                scanf("%f", &valorV);
                printf("\n%.2f litros = %.6f metros cúbicos\n\n", valorV, litroParaMetroCubico(valorV));
                getchar();
                break;
            case 3:
                printf("Digite o valor em mililitros: ");
                scanf("%f", &valorV);
                printf("\n%.2f mililitros = %.2f litros\n\n", valorV, mililitroParaLitro(valorV));
                getchar();
                break;
            case 4:
                printf("Digite o valor em mililitros: ");
                scanf("%f", &valorV);
                printf("\n%.2f mililitros = %.6f metros cúbicos\n\n", valorV, mililitroParaMetroCubico(valorV));
                getchar();
                break;
            case 5:
                printf("Digite o valor em metros cúbicos: ");
                scanf("%f", &valorV);
                printf("\n%.6f metros cúbicos = %.2f litros\n\n", valorV, metroCubicoParaLitro(valorV));
                getchar();
                break;
            case 6:
                printf("Digite o valor em metros cúbicos: ");
                scanf("%f", &valorV);
                printf("\n%.6f metros cúbicos = %.2f mililitros\n\n", valorV, metroCubicoParaMililitro(valorV));
                getchar();
                break;
            case 0:
                printf("Saindo do conversor de volume...\n");
                break;
            default:
                printf("Selecione uma opção válida!\n\n");
                break;
        }
        
        pause();
    } while (cVolume != 0);
}