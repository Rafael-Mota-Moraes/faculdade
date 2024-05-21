#include <stdio.h>
#include <stdlib.h>

/*
Elabore um programa que peça ao usuário para digitar 10
valores. Some esses valores e apresente o resultado na tela.
*/

int main()
{
    int n = 0, soma = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &n);
        soma += n;
    }

    printf("Soma = %d\n", soma);

    return 0;
}