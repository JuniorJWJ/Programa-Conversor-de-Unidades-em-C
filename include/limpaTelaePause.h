//acrecentado as linhas 2, 3 e 22 para que seja possível chamar a função limpaTelaePause.h dentro das outras lib .h  
#ifndef LIMPA_TELA_E_PAUSE_H
#define LIMPA_TELA_E_PAUSE_H

#include <stdlib.h>
#include <stdio.h>

void limparTela(){
     #ifdef _WIN32
        system("cls"); // windows
    #else
        system("clear"); // linux e outros sistemas
    #endif
}

void pause() {
    printf("Pressione qualquer tecla para continuar...");
    getchar(); // aguarda uma tecla
    getchar(); 
}

#endif // LIMPA_TELA_E_PAUSE_H