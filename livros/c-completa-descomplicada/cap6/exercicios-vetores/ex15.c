#include <stdio.h>

/*
Leia um vetor com 10 números de ponto ﬂutuante. Em seguida, ordene os
elementos desse vetor e imprima o vetor na tela.
*/

void bubbleSort(float arr[], int n)
{
    int i, j;
    float temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // Troca os elementos
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    float vetor[10];
    int i;

    // Lê os números do usuário
    printf("Digite 10 numeros de ponto flutuante:\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%f", &vetor[i]);
    }

    // Ordena o vetor
    bubbleSort(vetor, 10);

    // Imprime o vetor ordenado
    printf("Vetor ordenado:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%.2f ", vetor[i]);
    }
    printf("\n");

    return 0;
}
