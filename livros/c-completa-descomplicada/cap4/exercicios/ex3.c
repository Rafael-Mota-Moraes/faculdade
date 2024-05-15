#include <stdio.h>

/*
Faça um programa que leia um número inteiro e veriﬁque se esse número é par ou ímpar.
*/

int main()
{
    int n;
    printf("Digite um número: ");
    scanf("%d", &n);

    if (n % 2 == 0)
        printf("Número par");
    return 0;

    printf("Número impar\n");
    return 0;
}