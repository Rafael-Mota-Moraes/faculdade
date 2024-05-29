#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Usando a estrutura “atleta” do exercício anterior, escreva um programa
que leia os dados de cinco atletas e os exiba por ordem de idade, do mais
velho para o mais novo.
*/

#define NUM_ATLETAS 5

// Definição da estrutura do Atleta
struct Atleta
{
    char nome[100];
    char esporte[50];
    int idade;
    float altura;
};

// Função para trocar dois atletas de posição
void troca(struct Atleta *a, struct Atleta *b)
{
    struct Atleta temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    struct Atleta atletas[NUM_ATLETAS];

    // Ler dados dos atletas
    for (int i = 0; i < NUM_ATLETAS; i++)
    {
        printf("Digite o nome do atleta %d: ", i + 1);
        scanf(" %[^\n]", atletas[i].nome);
        printf("Digite o esporte de %s: ", atletas[i].nome);
        scanf(" %[^\n]", atletas[i].esporte);
        printf("Digite a idade de %s: ", atletas[i].nome);
        scanf("%d", &atletas[i].idade);
        printf("Digite a altura (em metros) de %s: ", atletas[i].nome);
        scanf("%f", &atletas[i].altura);
    }

    // Ordenar atletas por idade usando bubble sort
    for (int i = 0; i < NUM_ATLETAS - 1; i++)
    {
        for (int j = 0; j < NUM_ATLETAS - i - 1; j++)
        {
            if (atletas[j].idade < atletas[j + 1].idade)
            {
                troca(&atletas[j], &atletas[j + 1]);
            }
        }
    }

    // Exibir atletas em ordem de idade, do mais velho para o mais novo
    printf("\nAtletas em ordem de idade (do mais velho para o mais novo):\n");
    for (int i = 0; i < NUM_ATLETAS; i++)
    {
        printf("Nome: %s, Esporte: %s, Idade: %d, Altura: %.2f metros\n",
               atletas[i].nome, atletas[i].esporte, atletas[i].idade, atletas[i].altura);
    }

    return 0;
}
