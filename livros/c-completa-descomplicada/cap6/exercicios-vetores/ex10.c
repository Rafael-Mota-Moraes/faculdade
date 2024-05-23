#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que preencha um vetor de tamanho 100 com os 100
primeiros números naturais que não são múltiplos de 7. Ao ﬁnal, imprima
esse vetor na tela.
*/

int main()
{
    int qtd_multiplos = 0, i = 0;
    int v[100];
    while (qtd_multiplos <= 100)
    {
        if (i % 7 == 0)
        {
            v[qtd_multiplos] = i;
            qtd_multiplos++;
        }

        i++;
    }

    for (int i = 0; i < 100; i++)
    {
        printf("%d\n", v[i]);
    }
    return 0;
}
