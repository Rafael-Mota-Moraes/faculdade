#include <stdio.h>
#include <stdlib.h>

/*
Escreva um programa que leia um número inteiro e mostre o
seu complemento bit a bit
*/

int main()
{
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);

    num = ~num;
    printf("%d", num);
    return 0;
}