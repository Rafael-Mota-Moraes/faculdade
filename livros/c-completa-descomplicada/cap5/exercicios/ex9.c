#include <stdio.h>
#include <stdlib.h>

/*
Escreva um programa que leia 10 números e escreva o menor
valor lido e o maior valor lido.
*/

int main()
{
    int menor, maior, num;

    printf("Digite um numero: ");
    scanf("%d", &num);
    menor = num;
    maior = num;

    for (int i = 0; i < 9; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &num);

        if (num <= menor)
        {
            menor = num;
        }

        if (num >= maior)
        {
            maior = num;
        }
    }

    printf("Maior: %d\nMenor: %d\n", maior, menor);

    return 0;
}