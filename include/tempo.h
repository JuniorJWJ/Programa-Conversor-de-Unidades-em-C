#include <stdio.h>
#include "./utils.h"

// Implementações das funções de conversão
double segundosParaMinutos(double segundos) {
    return segundos / 60;
}
double segundosParaHoras(double segundos) {
    return segundos / 3600;
}
double minutosParaSegundos(double minutos) {
    return minutos * 60;
}
double minutosParaHoras(double minutos) {
    return minutos / 60;
}
double horasParaSegundos(double horas) {
    return horas * 3600;
}
double horasParaMinutos(double horas) {
    return horas * 60;
}

void conversorTempo() {
    int cTempo;
    double valorT;

    do {
        do {
            clearTerminal();
            
            printf("CONVERSOR DE TEMPO:\n\n");
            
            printf("1. Segundos para minutos.\n");
            printf("2. Segundos para horas.\n");
            printf("3. Minutos para segundos.\n");
            printf("4. Minutos para horas.\n");
            printf("5. Horas para segundos.\n");
            printf("6. Horas para minutos.\n");

            printf("\n0. Sair.\n");
        } while (input(&cTempo, INT, "\nEscolha o tipo de conversão que deseja fazer: ") != 1);

        switch (cTempo) {
            case 1:
                printf("Digite o valor em segundos: ");
                scanf("%lf", &valorT);
                printf("\n%.2lf segundos = %.2lf minutos\n", valorT, segundosParaMinutos(valorT));
                break;
            case 2:
                printf("Digite o valor em segundos: ");
                scanf("%lf", &valorT);
                printf("\n%.2lf segundos = %.2lf horas\n", valorT, segundosParaHoras(valorT));
                break;
            case 3:
                printf("Digite o valor em minutos: ");
                scanf("%lf", &valorT);
                printf("\n%.2lf minutos = %.2lf segundos\n", valorT, minutosParaSegundos(valorT));
                break;
            case 4:
                printf("Digite o valor em minutos: ");
                scanf("%lf", &valorT);
                printf("\n%.2lf minutos = %.2lf horas\n", valorT, minutosParaHoras(valorT));
                break;
            case 5:
                printf("Digite o valor em horas: ");
                scanf("%lf", &valorT);
                printf("\n%.2lf horas = %.2lf segundos\n", valorT, horasParaSegundos(valorT));
                break;
            case 6:
                printf("Digite o valor em horas: ");
                scanf("%lf", &valorT);
                printf("\n%.2lf horas = %.2lf minutos\n", valorT, horasParaMinutos(valorT));
                break;
            case 0:
                printf("Saindo do conversor de tempo...\n");
                break;
            default:
                printf("Selecione uma opcao valida!\n");
                break;
        }
        
        pause();
    } while (cTempo != 0);
}
