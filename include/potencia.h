#include <stdio.h>
#include "./utils.h"

// Implementações das funções de conversão
double wattsParaQuilowatts(double watts) {
    return watts / 1000.0;
}

double wattsParaCavalosVapor(double watts) {
    return watts / 735.5;
}

double quilowattsParaWatts(double quilowatts) {
    return quilowatts * 1000.0;
}

double quilowattsParaCavalosVapor(double quilowatts) {
    return (quilowatts * 1000.0) / 735.5;
}

double cavalosVaporParaWatts(double cavalosVapor) {
    return cavalosVapor * 735.5;
}

double cavalosVaporParaQuilowatts(double cavalosVapor) {
    return (cavalosVapor * 735.5) / 1000.0;
}

void conversorPotencia() {
    int opcao;
    double valor;

    do {
        do {
            clearTerminal();

            printf("CONVERSOR DE POTENCIA:\n\n");
            
            printf("1. Watts para Quilowatts\n");
            printf("2. Watts para Cavalos-vapor\n");
            printf("3. Quilowatts para Watts\n");
            printf("4. Quilowatts para Cavalos-vapor\n");
            printf("5. Cavalos-vapor para Watts\n");
            printf("6. Cavalos-vapor para Quilowatts\n");

            printf("0. Sair\n");
        } while (input(&opcao, INT, "\nEscolha o tipo de conversão que deseja fazer: ") != 1);

        switch (opcao) {
            case 1:
                printf("Digite o valor em Watts: ");
                scanf("%lf", &valor);
                printf("\n%.2lf Watts = %.2lf Quilowatts\n", valor, wattsParaQuilowatts(valor));
                break;
            case 2:
                printf("Digite o valor em Watts: ");
                scanf("%lf", &valor);
                printf("\n%.2lf Watts = %.2lf Cavalos-vapor\n", valor, wattsParaCavalosVapor(valor));
                break;
            case 3:
                printf("Digite o valor em Quilowatts: ");
                scanf("%lf", &valor);
                printf("\n%.2lf Quilowatts = %.2lf Watts\n", valor, quilowattsParaWatts(valor));
                break;
            case 4:
                printf("Digite o valor em Quilowatts: ");
                scanf("%lf", &valor);
                printf("\n%.2lf Quilowatts = %.2lf Cavalos-vapor\n", valor, quilowattsParaCavalosVapor(valor));
                break;
            case 5:
                printf("Digite o valor em Cavalos-vapor: ");
                scanf("%lf", &valor);
                printf("\n%.2lf Cavalos-vapor = %.2lf Watts\n", valor, cavalosVaporParaWatts(valor));
                break;
            case 6:
                printf("Digite o valor em Cavalos-vapor: ");
                scanf("%lf", &valor);
                printf("\n%.2lf Cavalos-vapor = %.2lf Quilowatts\n", valor, cavalosVaporParaQuilowatts(valor));
                break;
            case 0:
                printf("Saindo do conversor de potencia...\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
                break;
        }
        
        pause();
    } while (opcao != 0);
}
