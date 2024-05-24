#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Leia uma matriz de tamanho 10 × 3 com as notas de 10 alunos em três
provas. Em seguida, calcule e escreva na tela o número de alunos cuja pior
nota foi na prova 1, o número de alunos cuja pior nota foi na prova 2 e o
número de alunos cuja pior nota foi na prova 3.
*/

int main()
{
    float notas[10][3];
    int pior_nota_prova1 = 0, pior_nota_prova2 = 0, pior_nota_prova3 = 0;

    srand(time(NULL));

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            notas[i][j] = rand() % 11;
        }
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%.1f ", notas[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 10; i++)
    {
        if (notas[i][0] <= notas[i][1] && notas[i][0] <= notas[i][2])
        {
            pior_nota_prova1++;
        }
        else if (notas[i][1] <= notas[i][0] && notas[i][1] <= notas[i][2])
        {
            pior_nota_prova2++;
        }
        else
        {
            pior_nota_prova3++;
        }
    }

    printf("Número de alunos cuja pior nota foi na prova 1: %d\n", pior_nota_prova1);
    printf("Número de alunos cuja pior nota foi na prova 2: %d\n", pior_nota_prova2);
    printf("Número de alunos cuja pior nota foi na prova 3: %d\n", pior_nota_prova3);

    return 0;
}
