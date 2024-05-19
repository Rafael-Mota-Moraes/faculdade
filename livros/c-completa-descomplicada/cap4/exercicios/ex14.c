#include <stdio.h>

/*
Faça um programa para veriﬁcar se determinado número
inteiro lido é divisível por 3 ou 5, mas não simultaneamente
pelos dois.
*/

int main()
{
    int n;
    printf("Digite o número: ");
    scanf("%d", &n);

    if (n % 3 == 0 && n % 5 == 0)
    {
        printf("O número é divisível por 3 e por 5 simultaneamente.\n");
    }
    else if (n % 3 == 0)
    {
        printf("O número é divisível por 3, mas não por 5.\n");
    }
    else if (n % 5 == 0)
    {
        printf("O número é divisível por 5, mas não por 3.\n");
    }
    else
    {
        printf("O número não é divisível por 3 nem por 5.\n");
    }

    return 0;
}
