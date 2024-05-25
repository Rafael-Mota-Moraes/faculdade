#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que leia uma string e imprima as quatro primeiras
letras dela.
*/

int main()
{
    char str[100];
    printf("Digite sua string: ");
    fgets(str, 100, stdin);

    for (int i = 0; i < 4; i++)
        printf("%c ", str[i]);

    return 0;
}
