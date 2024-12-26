#include <stdio.h>
#include "./utils.h"

float quilogramaParaGrama(float kg) {
    return kg * 1000.0;
}

float quilogramaParaTonelada(float kg) {
    return kg / 1000.0;
}

float gramaParaQuilograma(float g) {
    return g / 1000.0;
}

float gramaParaTonelada(float g) {
    return g / 1000000.0;
}

float toneladaParaQuilograma(float t) {
    return t * 1000.0;
}

float toneladaParaGrama(float t) {
    return t * 1000000.0;
}

void conversorMassa() {
    int cMassa;
    float valorM;

    do {
        do {
            clearTerminal();
            
            printf("CONVERSOR DE MASSA:\n\n");

            printf("1. Quilograma para Grama.\n");
            printf("2. Quilograma para Tonelada.\n");
            printf("3. Grama para Quilograma.\n");
            printf("4. Grama para Tonelada.\n");
            printf("5. Tonelada para Quilograma.\n");
            printf("6. Tonelada para Grama.\n");
            
            printf("\n0. Sair.\n");
        } while (input(&cMassa, INT, "\nEscolha o tipo de conversão que deseja fazer: ") != 1);

        switch (cMassa) {
            case 1:
                printf("Digite o valor em quilogramas: ");
                scanf("%f", &valorM);
                printf("\n%.2f quilogramas = %.2f gramas\n\n", valorM, quilogramaParaGrama(valorM));
                break;
            case 2:
                printf("Digite o valor em quilogramas: ");
                scanf("%f", &valorM);
                printf("\n%.2f quilogramas = %.6f toneladas\n\n", valorM, quilogramaParaTonelada(valorM));
                break;
            case 3:
                printf("Digite o valor em gramas: ");
                scanf("%f", &valorM);
                printf("\n%.2f gramas = %.2f quilogramas\n\n", valorM, gramaParaQuilograma(valorM));
                break;
            case 4:
                printf("Digite o valor em gramas: ");
                scanf("%f", &valorM);
                printf("\n%.2f gramas = %.6f toneladas\n\n", valorM, gramaParaTonelada(valorM));
                break;
            case 5:
                printf("Digite o valor em toneladas: ");
                scanf("%f", &valorM);
                printf("\n%.6f toneladas = %.2f quilogramas\n\n", valorM, toneladaParaQuilograma(valorM));
                break;
            case 6:
                printf("Digite o valor em toneladas: ");
                scanf("%f", &valorM);
                printf("\n%.6f toneladas = %.2f gramas\n\n", valorM, toneladaParaGrama(valorM));
                break;
            case 0:
                printf("Saindo do conversor de massa...\n");
                break;
            default:
                printf("Selecione uma opção válida!\n\n");
                break;
        }
        pause();
    } while (cMassa != 0);
}
