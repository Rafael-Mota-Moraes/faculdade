#include <stdio.h>
#include <stdlib.h>

#define SIZE 6

/*
Crie um programa que leia do teclado seis valores inteiros e em seguida
mostre na tela os valores lidos na ordem inversa.
*/

int main()
{
    int nums[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        printf("Digite um número: ");
        scanf("%d", &nums[i]);
    }

    for (int i = (SIZE - 1); i >= 0; i--)
    {
        printf("nums[%d] = %d\n", i, nums[i]);
    }

    return 0;
}
