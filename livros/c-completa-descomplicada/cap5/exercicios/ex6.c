#include <stdio.h>
#include <stdlib.h>
#include <windows.h> // Para windows
// #include<unistd.h> // Para linux

/*
Faça um programa que mostre uma contagem regressiva na
tela, iniciando em 10 e terminando em 0. Mostre uma
mensagem “FIM!” após a contagem.
*/

int main()
{
    int i = 10;

    for (i = 10; i >= 0; i--)
    {
        printf("%d \n", i);
        Sleep(1000);
    }

    return 0;
}