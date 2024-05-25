#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Faça um programa que leia uma string e a imprima de trás para a frente.
*/

int main()
{
    char str[100];
    printf("Digite sua string: ");
    fgets(str, 100, stdin);

    int tam = strlen(str);
    printf("%d\n", tam);
    for (int i = tam - 1; i >= 0; i--)
        printf("%c", str[i]);
    return 0;
}
