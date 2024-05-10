#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que converta uma letra maiúscula em
letra minúscula. Use a tabela ASCII para isso.
*/

int main()
{
    char maiuscula, minuscula;
    printf("Digite o char: ");
    scanf("%c", &maiuscula);

    minuscula = maiuscula + 32;

    printf("%c\n", minuscula);

    return 0;
}