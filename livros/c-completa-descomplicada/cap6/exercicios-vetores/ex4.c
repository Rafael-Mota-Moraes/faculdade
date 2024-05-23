#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que possua um array de nome A que armazene seis
números inteiros. O programa deve executar os seguintes passos:
a) Atribua os seguintes valores a esse array: 1, 0, 5, –2, –5, 7.
b) Armazene em uma variável a soma dos valores das posições
A[0], A[1] e A[5] do array e mostre na tela essa soma.
c) Modiﬁque o array na posição 4, atribuindo a essa posição o valor
100.
d) Mostre na tela cada valor do array A, um em cada linha.]
*/

int main()
{
    int A[] = {1, 0, 5, -2, -5, 7};
    int soma = A[0] + A[1] + A[5];
    printf("Resultado da soma: %d\n", soma);
    A[4] = 100;

    for (int i = 0; i < 6; i++)
    {
        printf("A[%d] = %d\n", i, A[i]);
    }

    return 0;
}
