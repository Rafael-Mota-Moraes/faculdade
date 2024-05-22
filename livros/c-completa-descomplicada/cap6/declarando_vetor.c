#include <stdio.h>
#include <stdlib.h>

#define N 100

int main()
{
    int n = 5;
    float F[N + 1]; // Correto: Expressão inteira e constante
    char texto[30]; // Correto: Valor inteiro

    int Vetor[n]; // Errado: é variável
    int V[4.5];   // Errado: 4.5 Não é inteiro

    return 0;
}