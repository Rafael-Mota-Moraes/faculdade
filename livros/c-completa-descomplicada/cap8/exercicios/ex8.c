#include <stdio.h>
#include <stdlib.h>

#define NUM_ATLETAS 5

/*
Crie uma estrutura representando um atleta. Essa estrutura deve conter o
nome do atleta, seu esporte, idade e altura. Agora, escreva um programa
que leia os dados de cinco atletas. Calcule e exiba os nomes do atleta mais
alto e do mais velho.
*/

// Definição da estrutura do Atleta
struct Atleta
{
    char nome[100];
    char esporte[50];
    int idade;
    float altura;
};

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

    int index_mais_velho = 0;
    int index_mais_alto = 0;

    // Determinar o atleta mais velho e o mais alto
    for (int i = 1; i < NUM_ATLETAS; i++)
    {
        if (atletas[i].idade > atletas[index_mais_velho].idade)
        {
            index_mais_velho = i;
        }
        if (atletas[i].altura > atletas[index_mais_alto].altura)
        {
            index_mais_alto = i;
        }
    }

    // Exibir resultados
    printf("O atleta mais velho eh: %s\n", atletas[index_mais_velho].nome);
    printf("O atleta mais alto eh: %s\n", atletas[index_mais_alto].nome);

    return 0;
}
