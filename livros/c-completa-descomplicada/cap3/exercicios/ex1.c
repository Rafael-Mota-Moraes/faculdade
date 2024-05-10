#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que leia um número inteiro e retorne seu
antecessor e seu sucessor.
*/

int main()
{
    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    printf("Antecessor: %d\n", num - 1);
    printf("Sucessor: %d\n", num + 1);

    return 0;
}