#include <stdio.h>
#include <stdlib.h>

int main()
{
    int conversao;

    do
    {
        printf("CONVERSO DE UNIDADES EM C:");
        printf("1. (colocar o tipo de conversao)\n");
        printf("2. (colocar o tipo de conversao)\n");
        printf("3. (colocar o tipo de conversao)\n");
        printf("4. (colocar o tipo de conversao)\n");
        printf("5. (colocar o tipo de conversao)\n");
        printf("6. (colocar o tipo de conversao)\n");
        printf("7. (colocar o tipo de conversao)\n");
        printf("8. (colocar o tipo de conversao)\n");
        printf("9. (colocar o tipo de conversao)\n");
        printf("0. Sair\n");
        printf("Escolha o tipo de conversao que deseje fazer: ");
        scanf("%d", &conversao);
        printf("\n");

        switch (conversao)
        {
        case 1:
            printf("adicionar subinterface do tipo de conversao");
            break;
        case 2:
            printf("adicionar subinterface do tipo de conversao");
            break;
        case 3:
            printf("adicionar subinterface do tipo de conversao");
            break;
        case 4:
            printf("adicionar subinterface do tipo de conversao");
            break;
        case 5:
            printf("adicionar subinterface do tipo de conversao");
            break;
        case 6:
            printf("adicionar subinterface do tipo de conversao");
            break;
        case 7:
            printf("adicionar subinterface do tipo de conversao");
            break;
        case 8:
            printf("adicionar subinterface do tipo de conversao");
            break;
        case 9:
            printf("adicionar subinterface do tipo de conversao");
            break;
        default:
            break;
        case 0:
            printf("Saindo...\n");
            printf("\n");
            break;
        }



    } while (conversao !=0);
    
}