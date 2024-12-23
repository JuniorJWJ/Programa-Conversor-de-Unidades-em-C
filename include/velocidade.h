#include <stdio.h>
#include "limpaTelaePause.h"

//conversor de velocidade
double kmhParaMetros(double kmh)
{
    return kmh / 3.6;
}
double kmhParaMph(double kmh)
{
    return kmh / 1.609;
}
double metrosParaKmh(double metros)
{
    return metros * 3.6;
}
double metrosParaMph(double metros)
{
    return metros * 2.237;
}
double mphParaMetros(double mph)
{
    return mph / 2.237;
}
double mphParaKmh(double mph)
{
    return mph * 1.609;
}

void conversorVelocidade()
{
    int cVelocidade;
    double valorV;

    do {
        clearTerminal();

        printf("CONVERSOR DE VELOCIDADE: \n");
        printf("1. Km/h para m/s.\n");
        printf("2. Km/h para mph.\n");
        printf("3. M/s para km/h.\n");
        printf("4. M/s para mph.\n");
        printf("5. Mph para m/s.\n");
        printf("6. Mph para Km/h\n");
        printf("0. Sair.\n");
        printf("Escolha o tipo de conversao de velocidade que deseje fazer: ");
        scanf("%d", &cVelocidade);
        printf("\n");

        switch (cVelocidade)
        {
        case 1:
            printf("Digite o valor em Km/H: ");
            scanf("%lf", &valorV);
            printf("\n%.2lf Km/h = %.2lf m/s", valorV, kmhParaMetros(valorV));
            printf("\n\n");
            break;
        case 2:
            printf("Digite o valor em Km/h: ");
            scanf("%lf", &valorV);
            printf("\n%.2lf Km/h = %.2lf mph", valorV, kmhParaMph(valorV));
            printf("\n\n");
            break;
        case 3:
            printf("Digite o valor em m/s: ");
            scanf("%lf", &valorV);
            printf("\n%.2lf m/s = %.2lf Kmh", valorV, metrosParaKmh(valorV));
            printf("\n\n");
            break;
        case 4:
            printf("Digite o valor em m/s: ");
            scanf("%lf", &valorV);
            printf("\n%.2lf m/s = %.2lf mph", valorV, metrosParaMph(valorV));
            printf("\n\n");
            break;
        case 5:
            printf("Digite o valor em mph: ");
            scanf("%lf", &valorV);
            printf("\n%.2lf mph = %.2lf m/s.", valorV, mphParaMetros(valorV));
            printf("\n\n");
            break;
        case 6:
            printf("Digite o valor em mph: ");
            scanf("%lf", &valorV);
            printf("\n%.2lf mph = %.2lf km/h.", valorV, mphParaKmh(valorV));
            printf("\n\n");
            break;
        case 0:
            printf("Saindo do conversor de velocidade...");
            printf("\n");
            break;
        default:
            printf("Selecione uma opcao valida!\n");
            printf("\n");
            break;
        }
        pause();
        limparTela();
    }while (cVelocidade !=0);
}

//fim do conversor de velocidade