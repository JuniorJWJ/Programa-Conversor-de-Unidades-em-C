#ifndef TEMPERATURA_H
#define TEMPERATURA_H

#include <stdio.h>

// Funções de conversão de temperatura
float celsiusParaFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

float celsiusParaKelvin(float celsius) {
    return celsius + 273.15;
}

float fahrenheitParaCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

float fahrenheitParaKelvin(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9 + 273.15;
}

float kelvinParaCelsius(float kelvin) {
    return kelvin - 273.15;
}

float kelvinParaFahrenheit(float kelvin) {
    return (kelvin - 273.15) * 9 / 5 + 32;
}

// Função principal do conversor de temperatura
void conversorTemperatura() {
    int opcao;
    float valorT;

    do {
        do {
            clearTerminal();
            
            printf("CONVERSOR DE TEMPERATURA:\n\n");

            printf("1. Celsius para Fahrenheit.\n");
            printf("2. Celsius para Kelvin.\n");
            printf("3. Fahrenheit para Celsius.\n");
            printf("4. Fahrenheit para Kelvin.\n");
            printf("5. Kelvin para Celsius.\n");
            printf("6. Kelvin para Fahrenheit.\n");

            printf("\n0. Sair.\n");
        } while (input(&opcao, INT, "\nEscolha o tipo de conversão que deseja fazer: ") != 1);


        switch (opcao) {
            case 1:
                printf("Digite o valor em Celsius: ");
                scanf("%f", &valorT);
                printf("\n%.2f Celsius = %.2f Fahrenheit\n\n", valorT, celsiusParaFahrenheit(valorT));
                break;
            case 2:
                printf("Digite o valor em Celsius: ");
                scanf("%f", &valorT);
                printf("\n%.2f Celsius = %.2f Kelvin\n\n", valorT, celsiusParaKelvin(valorT));
                break;
            case 3:
                printf("Digite o valor em Fahrenheit: ");
                scanf("%f", &valorT);
                printf("\n%.2f Fahrenheit = %.2f Celsius\n\n", valorT, fahrenheitParaCelsius(valorT));
                break;
            case 4:
                printf("Digite o valor em Fahrenheit: ");
                scanf("%f", &valorT);
                printf("\n%.2f Fahrenheit = %.2f Kelvin\n\n", valorT, fahrenheitParaKelvin(valorT));
                break;
            case 5:
                printf("Digite o valor em Kelvin: ");
                scanf("%f", &valorT);
                printf("\n%.2f Kelvin = %.2f Celsius\n\n", valorT, kelvinParaCelsius(valorT));
                break;
            case 6:
                printf("Digite o valor em Kelvin: ");
                scanf("%f", &valorT);
                printf("\n%.2f Kelvin = %.2f Fahrenheit\n\n", valorT, kelvinParaFahrenheit(valorT));
                break;
            case 0:
                printf("Saindo do conversor de temperatura...\n");
                break;
            default:
                printf("Selecione uma opção válida!\n\n");
                break;
        }
    } while (opcao != 0);
}

#endif
