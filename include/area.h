#include <stdio.h>
#include "limpaTelaePause.h"

float metro2paracent2(float metro2) {
    return metro2*10000.0;
}

float metro2paramili2(float metro2) {
    return metro2*1000000.0;
}

float cent2parametros2(float cm2) {
    return cm2/10000.0;
}

float cent2paramili2(float cm2) {
    return cm2*100.0;
}

float mili2parametros2(float mili2) {
    return mili2/1000000.0;
}

float mili2paracent2(float mili2) {
    return mili2/100.0;
}

void conversorArea() {
    int cArea;
    float valorV;

    do {
    
        printf("CONVERSOR DE AREA: \n");
        printf("1. Metro quadrado para Centímetro quadrado.\n");
        printf("2. Metro quadrado para Milímetro quadrado.\n");
        printf("3. Centímetro quadrado para Metro quadrado.\n");
        printf("4. Centímetro quadrado para Milímetro quadrado.\n");
        printf("5. Milímetro quadrado para Metro quadrado.\n");
        printf("6. Milímetro quadrado para Centímetro quadrado.\n");
        printf("0. Sair.\n");
        printf("Escolha o tipo de conversão de área que deseja fazer: ");
        scanf("%d", &cArea);
        printf("\n");

        switch (cArea) {
            case 1:
                printf("Digite o valor em metros quadrados: ");
                scanf("%f", &valorV);
                printf("\n%.2f metros quadrados = %.2f centímetros quadrados\n\n", valorV, metro2paracent2(valorV));
                break;
            case 2:
                printf("Digite o valor em metros quadrados: ");
                scanf("%f", &valorV);
                printf("\n%.2f metros quadrados = %.2f milímetros quadrados\n\n", valorV, metro2paramili2(valorV));
                break;
            case 3:
                printf("Digite o valor em centímetros quadrados: ");
                scanf("%f", &valorV);
                printf("\n%.2f centímetros quadrados = %.2f metros quadrados\n\n", valorV, cent2parametros2(valorV));
                break;
            case 4:
                printf("Digite o valor em centímetros quadrados: ");
                scanf("%f", &valorV);
                printf("\n%.2f centímetros quadrados = %.2f milímetros quadrados\n\n", valorV, cent2paramili2(valorV));
                break;
            case 5:
                printf("Digite o valor em milímetros quadrados: ");
                scanf("%f", &valorV);
                printf("\n%.2f milímetros quadrados = %.2f metros quadrados\n\n", valorV, mili2parametros2(valorV));
                break;
            case 6:
                printf("Digite o valor em milímetros quadrados: ");
                scanf("%f", &valorV);
                printf("\n%.2f milímetros quadrados = %.2f centímetros quadrados\n\n", valorV, mili2paracent2(valorV));
                break;
            case 0:
                printf("Saindo do conversor de Área...\n");
                break;
            default:
                printf("Selecione uma opção válida!\n\n");
                break;
        }
        pause();
        limparTela();
    } while (cArea != 0);
}