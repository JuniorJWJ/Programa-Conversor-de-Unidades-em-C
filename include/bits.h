#ifndef BITS_H
#define BITS_H

#include <stdio.h>

#include "./utils.h"

void displayBitsMenu() {
    printf("CONVERSOR DE BITS:\n\n");

    printf("1. Bits para Bytes.\n");
    printf("2. Bytes para Bits.\n");
    printf("3. Kilobytes para Bytes.\n");
    printf("4. Bytes para Kilobytes.\n");
    printf("5. Megabytes para Bytes.\n");
    printf("6. Bytes para Megabytes.\n");
    printf("7. Gigabytes para Bytes.\n");
    printf("8. Bytes para Gigabytes.\n");
    printf("9. Terabytes para Bytes.\n");
    printf("10. Bytes para Terabytes.\n");

    printf("\n0. Sair.\n");
}

void conversorBits() {
    int option;

    do {
        do {
            clearTerminal();
            displayBitsMenu();
        } while (input(&option, INT, "\nEscolha uma opção: ") != 1);

        switch (option) {
            case 1:
                convert("Digite o valor em bits: ", " bits", "=", " bytes", 1/8.0);
                break;
            case 2:
                convert("Digite o valor em bytes: ", " bytes", "=", " bits", 8);
                break;
            case 3:
                convert("Digite o valor em kilobytes: ", " KB", "=", " bytes", 1e+3);
                break;
            case 4:
                convert("Digite o valor em bytes: ", " bytes", "=", " KB", 1/1e+3);
                break;
            case 5:
                convert("Digite o valor em megabytes: ", " MB", "=", " bytes", 1e+6);
                break;
            case 6:
                convert("Digite o valor em bytes: ", " bytes", "=", " MB", 1/1e+6);
                break;
            case 7:
                convert("Digite o valor em gigabytes: ", " GB", "=", " bytes", 1e+9);
                break;
            case 8:
                convert("Digite o valor em bytes: ", " bytes", "=", " GB", 1/1e+9);
                break;
            case 9:
                convert("Digite o valor em terabytes: ", " TB", "=", " bytes", 1e+12);
                break;
            case 10:
                convert("Digite o valor em bytes: ", " bytes", "=", " TB", 1/1e+12);
                break;
            case 0:
                printf("Saindo do conversor de bits...\n");
                break;
            default:
                printf("Selecione uma opção válida!\n\n");
                break;
        }

        if (option != 0) {
            printf("\nPressione Enter para continuar...");
            while (getchar() != '\n');
        }
    } while (option != 0);
}
#endif