#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que leia uma string e a imprima na tela.
*/

int main()
{
    char str[100];

    printf("Digite sua string: ");
    fgets(str, 100, stdin);

    printf("%s", str);

    return 0;
}
