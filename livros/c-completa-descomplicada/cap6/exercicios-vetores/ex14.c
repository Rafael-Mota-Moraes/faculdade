#include <stdio.h>
#include <math.h>

#define N 10

/*
Faça um programa que calcule o desvio-padrão d de um vetor V contendo
n números
*/

int main()
{
    int V[N];
    int i, sum = 0;
    float mean, variance, std_deviation;

    // Lendo os valores do vetor do usuário
    printf("Digite %d numeros para preencher o vetor:\n", N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &V[i]);
        sum += V[i];
    }

    // Calculando a média
    mean = (float)sum / N;

    // Calculando a variância
    variance = 0;
    for (i = 0; i < N; i++)
    {
        variance += pow(V[i] - mean, 2);
    }
    variance /= N;

    // Calculando o desvio padrão
    std_deviation = sqrt(variance);

    // Exibindo o resultado
    printf("O desvio-padrao do vetor V eh: %.2f\n", std_deviation);

    return 0;
}
