#include <stdio.h>
#include <stdlib.h>

/*
Crie um programa que leia do teclado seis valores inteiros e em seguida
mostre na tela os valores lidos.
*/

int main()
{
    int nums[6];
    for (int i = 0; i < 6; i++)
    {
        printf("Digite um número: ");
        scanf("%d", &nums[i]);
    }

    for (int i = 0; i < 6; i++)
    {
        printf("nums[%d] = %d\n", i, nums[i]);
    }

    return 0;
}
