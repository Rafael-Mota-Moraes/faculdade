#include <stdio.h>
#include <stdlib.h>

/*
Escreva um programa que leia do teclado um vetor de 10 posições. Escreva
na tela quantos valores pares foram armazenados nesse vetor.
*/

int main()
{
    int v[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Digite um número: ");
        scanf("%d", &v[i]);
    }

    int qtd_pares = 0;

    for (int i = 0; i < 10; i++)
    {
        if (v[i] % 2 == 0)
        {
            qtd_pares++;
        }
    }

    printf("%d números pares foram digitados.\n", qtd_pares);

    return 0;
}
