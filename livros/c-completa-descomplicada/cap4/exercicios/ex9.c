#include <stdio.h>

/*
Faça um programa que leia a altura e o peso de uma pessoa.
De acordo com a tabela a seguir, veriﬁque e mostre qual a
classiﬁcação dessa pessoa.
*/

int main()
{
    int altura;
    float peso;
    printf("Digite a altura em cm: ");
    scanf("%d", &altura);
    char categoria;

    printf("Digite o peso: ");
    scanf("%f", &peso);

    if (altura < 120)
    {
        if (peso < 60)
        {
            categoria = 'A';
        }
        else if (peso >= 60 && peso <= 90)
        {
            categoria = 'D';
        }
        else
        {
            categoria = 'G';
        }
    }
    else if (altura >= 120 && altura <= 170)
    {
        if (peso < 60)
        {
            categoria = 'B';
        }
        else if (peso >= 60 && peso <= 90)
        {
            categoria = 'E';
        }
        else
        {
            categoria = 'H';
        }
    }
    else
    {
        if (peso < 60)
        {
            categoria = 'C';
        }
        else if (peso >= 60 && peso <= 90)
        {
            categoria = 'F';
        }
        else
        {
            categoria = 'I';
        }
    }

    printf("Categoria: %c\n", categoria);

    return 0;
}
