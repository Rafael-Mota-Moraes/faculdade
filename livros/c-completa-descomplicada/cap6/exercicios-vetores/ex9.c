#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que receba do usuário dois arrays, A e B, com 10
números inteiros cada. Crie um novo array C calculando C = A – B. Mostre
na tela os dados do array C.
*/

int main()
{
    int a[10], b[10], c[10];
    int tamanho_c = 0;

    printf("Preenchendo primeiro vetor: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("Digite um número: ");
        scanf("%d", &a[i]);
    }

    printf("Preenchendo segundo vetor: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("Digite um número: ");
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        int esta_em_b = 0;

        for (int j = 0; j < 10; j++)
        {
            if (a[i] == b[j])
            {
                esta_em_b = 1;
                break;
            }
        }

        if (!esta_em_b)
        {
            c[tamanho_c] = a[i];
            tamanho_c++;
        }
    }

    printf("Diferença entre os vetores: \n");
    for (int i = 0; i < tamanho_c; i++)
    {
        printf("%d ", c[i]);
    }

    return 0;
}
