#include <stdio.h>
#include <stdlib.h>

/*
Escreva um programa que leia um número inteiro positivo N
e em seguida imprima N linhas do chamado triângulo de
Floyd:
1
2 3
4 5 6
8 9 10
11 12 13 14 15
16 17 18 19 20 21
*/

int main()
{
    int n = 1, qtd_linhas;
    printf("Quantas linhas? ");
    scanf("%d", &qtd_linhas);

    for (int i = 0; i <= qtd_linhas; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%d ", n);
            n++;
        }
        printf("\n");
    }

    return 0;
}