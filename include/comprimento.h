#include <stdio.h>

float metroparacent(float metro) {
    return metro*100.0;
}

float metroparamili(float metro) {
    return metro*1000.0;
}

float centparametros(float cm) {
    return cm/100.0;
}

float centparamili(float cm) {
    return cm*10.0;
}

float miliparametros(float mili) {
    return mili/1000.0;
}

float miliparacent(float mili) {
    return mili/10.0;
}

void conversorComprimento() {
    int cComprimento;
    float valorV;

    do {
        printf("CONVERSOR DE COMPRIMENTO: \n");
        printf("1. Metro para Centímetro.\n");
        printf("2. Metro para Milímetro.\n");
        printf("3. Centímetro para Metro.\n");
        printf("4. Centímetro para Milímetro.\n");
        printf("5. Milímetro para Metro.\n");
        printf("6. Milímetro para Centímetro.\n");
        printf("0. Sair.\n");
        printf("Escolha o tipo de conversão de comprimento que deseja fazer: ");
        scanf("%d", &cComprimento);
        printf("\n");

        switch (cComprimento) {
            case 1:
                printf("Digite o valor em metros: ");
                scanf("%f", &valorV);
                printf("\n%.2f metros = %.2f centímetros\n\n", valorV, metroparacent(valorV));
                break;
            case 2:
                printf("Digite o valor em metros: ");
                scanf("%f", &valorV);
                printf("\n%.2f metros = %.2f milímetros\n\n", valorV, metroparamili(valorV));
                break;
            case 3:
                printf("Digite o valor em centímetros: ");
                scanf("%f", &valorV);
                printf("\n%.2f centímetros = %.2f metros\n\n", valorV, centparametros(valorV));
                break;
            case 4:
                printf("Digite o valor em centímetros: ");
                scanf("%f", &valorV);
                printf("\n%.2f centímetros = %.2f milímetros\n\n", valorV, centparamili(valorV));
                break;
            case 5:
                printf("Digite o valor em milímetros: ");
                scanf("%f", &valorV);
                printf("\n%.2f milímetros = %.2f metros\n\n", valorV, miliparametros(valorV));
                break;
            case 6:
                printf("Digite o valor em milímetros: ");
                scanf("%f", &valorV);
                printf("\n%.2f milímetros = %.2f centímetros\n\n", valorV, miliparacent(valorV));
                break;
            case 0:
                printf("Saindo do conversor de comprimento...\n");
                break;
            default:
                printf("Selecione uma opção válida!\n\n");
                break;
        }
    } while (cComprimento != 0);
}