#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

/*
Faça um programa que leia cinco valores e os armazene em um vetor. Em
seguida, mostre todos os valores lidos juntamente com a média dos valores.
*/

int main()
{
    int nums[SIZE], soma = 0;
    double media = 0;

    for (int i = 0; i < SIZE; i++)
    {
        printf("Digite um número: ");
        scanf("%d", &nums[i]);
        soma += nums[i];
    }

    printf("\n Números digitados: \n\n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("nums[%d] = %d\n", i, nums[i]);
    }
    printf("\n\n");

    media = (double)soma / SIZE;

    printf("A média dos números eh: %lf\n", media);

    return 0;
}
