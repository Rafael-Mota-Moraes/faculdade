#include <stdio.h>
#include <stdlib.h>

/*
Crie uma união contendo dois tipos básicos diferentes. Agora, escreva um
programa que inicialize um dos tipos dessa união e exiba em tela o valor
do outro tipo.
*/

union int_float
{
    int i;
    float f;
};

int main()
{
    union int_float valor;

    valor.f = 3.14;

    printf("Valor inicializado como float: %f\n", valor.f);
    printf("Valor exibido como int: %d\n", valor.i);

    valor.i = 42;

    printf("Valor inicializado como int: %d\n", valor.i);
    printf("Valor exibido como float: %f\n", valor.f);

    return 0;
}