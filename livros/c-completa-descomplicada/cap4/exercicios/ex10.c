#include <stdio.h>
#include <math.h>

/*
Faça um programa que leia três números inteiros positivos e
efetue o cálculo de uma das seguintes médias de acordo com
um valor numérico digitado pelo usuário e mostrado na tabela
a seguir:
*/

int main()
{
    int op;
    double resultado;
    printf("O que você quer calcular?\n");
    printf("1 - Média geométrica\n");
    printf("2 - Média ponderada\n");
    printf("3 - Média harmônica\n");
    printf("4 - Média aritmética\n");
    printf("Digite o número: ");
    scanf("%d", &op);

    double n1, n2, n3;

    printf("Digite 3 números: ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    if (op == 1)
    {
        resultado = cbrt(n1 * n2 * n3);
        printf("A média geométrica é: %lf\n", resultado);
    }
    else if (op == 2)
    {
        resultado = (n1 + 2 * n2 + 3 * n3) / 6;
        printf("A média ponderada é: %lf\n", resultado);
    }
    else if (op == 3)
    {
        resultado = (1) / ((1 / n1) + (1 / n2) + (1 / n3));
        printf("A média harmônica é: %lf\n", resultado);
    }
    else if (op == 4)
    {
        resultado = (n1 + n2 + n3) / 3;
        printf("A média aritmética é: %lf\n", resultado);
    }
    else
    {
        printf("Operação inválidao\n");
    }

    return 0;
}