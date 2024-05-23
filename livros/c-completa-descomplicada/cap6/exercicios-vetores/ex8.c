#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que preencha um vetor com 10 números reais. Em
seguida, calcule e mostre na tela a quantidade de números negativos e a
soma dos números positivos desse vetor.
*/

int main()
{
    int v[10], qtd_negativos = 0, soma_positivos = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um valor: ");
        scanf("%d", &v[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if (v[i] < 0)
        {
            qtd_negativos++;
        }
        else
        {
            soma_positivos += v[i];
        }
    }

    printf("Foram digitados %d números negativos.\n", qtd_negativos);
    printf("A soma dos números positivos é: %d\n", soma_positivos);
    return 0;
}
