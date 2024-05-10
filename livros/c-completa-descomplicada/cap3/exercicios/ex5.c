#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que calcule o ano de nascimento de uma
pessoa a partir de sua idade e do ano atual.
*/

int main()
{
    int ano_nascimento, ano_atual = 2024;

    printf("Digite seu ano de nascimento: ");
    scanf("%d", &ano_nascimento);

    int idade = ano_atual - ano_nascimento;

    printf("Sua idade eh: %d\n", idade);

    return 0;
}