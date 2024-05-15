#include <stdio.h>
#include <math.h>

/*
Faça um programa que leia um número e, caso ele seja positivo, calcule e mostre:
• O número digitado ao quadrado.
• A raiz quadrada do número digitado.
*/

int main()
{
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("Quadrado do número: %d\n", (num * num));
        printf("A raiz quadrado do número: %lf\n", sqrt((double)num));
    }
    else
    {
        printf("Número é negativo\n");
    }
}
