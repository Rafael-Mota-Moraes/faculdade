#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que leia um vetor de oito posições. Em seguida, leia
também dois valores X e Y quaisquer correspondentes a duas posições no
vetor. Seu programa deverá exibir a soma dos valores encontrados nas
respectivas posições X e Y.
*/

int main()
{
    int v[8];
    for (int i = 0; i < 8; i++)
    {
        printf("Digite um numero para v[%d]: ", i);
        scanf("%d", &v[i]);
    }

    int soma, x, y;
    printf("Digite as 2 posições que deseja somar: ");
    scanf("%d %d", &x, &y);

    if (x > 7 || x < 0 || y > 7 || y < 0)
    {
        printf("Digite valores válidos.\n");
        return 1;
    }

    soma = v[x] + v[y];
    printf("Resultado da soma: %d\n", soma);

    return 0;
}
