#include <stdio.h>
#include "./utils.h"

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
        do {
            clearTerminal();

            printf("CONVERSOR DE VELOCIDADE:\n\n");

            printf("1. Km/h para m/s.\n");
            printf("2. Km/h para mph.\n");
            printf("3. M/s para km/h.\n");
            printf("4. M/s para mph.\n");
            printf("5. Mph para m/s.\n");
            printf("6. Mph para Km/h\n");

            printf("\n0. Sair.\n");
        } while (input(&cVelocidade, INT, "\nEscolha o tipo de conversão que deseja fazer: ") != 1);

        switch (cVelocidade)
        {
            case 1:
                printf("Digite o valor em Km/H: ");
                scanf("%lf", &valorV);
                printf("\n%.2lf Km/h = %.2lf m/s", valorV, kmhParaMetros(valorV));
                printf("\n\n");
                getchar();
                break;
            case 2:
                printf("Digite o valor em Km/h: ");
                scanf("%lf", &valorV);
                printf("\n%.2lf Km/h = %.2lf mph", valorV, kmhParaMph(valorV));
                printf("\n\n");
                getchar();
                break;
            case 3:
                printf("Digite o valor em m/s: ");
                scanf("%lf", &valorV);
                printf("\n%.2lf m/s = %.2lf Kmh", valorV, metrosParaKmh(valorV));
                printf("\n\n");
                getchar();
                break;
            case 4:
                printf("Digite o valor em m/s: ");
                scanf("%lf", &valorV);
                printf("\n%.2lf m/s = %.2lf mph", valorV, metrosParaMph(valorV));
                printf("\n\n");
                getchar();
                break;
            case 5:
                printf("Digite o valor em mph: ");
                scanf("%lf", &valorV);
                printf("\n%.2lf mph = %.2lf m/s.", valorV, mphParaMetros(valorV));
                printf("\n\n");
                getchar();
                break;
            case 6:
                printf("Digite o valor em mph: ");
                scanf("%lf", &valorV);
                printf("\n%.2lf mph = %.2lf km/h.", valorV, mphParaKmh(valorV));
                printf("\n\n");
                getchar();
                break;
            case 0:
                printf("Saindo do conversor de velocidade...\n");
                break;
            default:
                printf("Selecione uma opção válida!\n\n");
                break;
        }
        
        pause();
    }while (cVelocidade !=0);
}

//fim do conversor de velocidade