#include <stdio.h>

/*
Faça um programa que leia dois números e mostre o maior deles. Se, por acaso, os dois números forem iguais, imprima amensagem “Números iguais”.
*/

int main(void)
{
    int n1, n2;
    printf("Digite os dois números: ");
    scanf("%d %d", &n1, &n2);

    if (n1 == n2)
    {
        printf("Números iguais\n");
    }
    else if (n1 > n2)
    {
        printf("n1 é maior\n");
    }
    else
    {
        printf("n2 é maior\n");
    }

    return 0;
}