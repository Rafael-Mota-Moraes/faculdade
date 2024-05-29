#include <stdio.h>
#include <stdlib.h>

/*
Crie uma estrutura capaz de armazenar o nome e a data de nascimento de
uma pessoa. Agora, escreva um programa que leia os dados de seis
pessoas. Calcule e exiba os nomes da pessoa mais nova e da mais velha.
*/
#define NUM_PEOPLE 6

struct Data
{
    int dia;
    int mes;
    int ano;
};

struct Pessoa
{
    char nome[100];
    struct Data nascimento;
};

int main()
{
    struct Pessoa pessoas[NUM_PEOPLE];

    for (int i = 0; i < NUM_PEOPLE; i++)
    {
        printf("Digite o nome da pessoa %d: ", i + 1);
        scanf(" %[^\n]", pessoas[i].nome);
        printf("Digite a data de nascimento (dd mm aaaa) de %s: ", pessoas[i].nome);
        scanf("%d %d %d", &pessoas[i].nascimento.dia, &pessoas[i].nascimento.mes, &pessoas[i].nascimento.ano);
    }

    int index_mais_velha = 0;
    int index_mais_nova = 0;

    for (int i = 1; i < NUM_PEOPLE; i++)
    {
        // Verifica se a pessoa atual é mais velha
        if ((pessoas[i].nascimento.ano < pessoas[index_mais_velha].nascimento.ano) ||
            (pessoas[i].nascimento.ano == pessoas[index_mais_velha].nascimento.ano &&
             pessoas[i].nascimento.mes < pessoas[index_mais_velha].nascimento.mes) ||
            (pessoas[i].nascimento.ano == pessoas[index_mais_velha].nascimento.ano &&
             pessoas[i].nascimento.mes == pessoas[index_mais_velha].nascimento.mes &&
             pessoas[i].nascimento.dia < pessoas[index_mais_velha].nascimento.dia))
        {
            index_mais_velha = i;
        }

        // Verifica se a pessoa atual é mais nova
        if ((pessoas[i].nascimento.ano > pessoas[index_mais_nova].nascimento.ano) ||
            (pessoas[i].nascimento.ano == pessoas[index_mais_nova].nascimento.ano &&
             pessoas[i].nascimento.mes > pessoas[index_mais_nova].nascimento.mes) ||
            (pessoas[i].nascimento.ano == pessoas[index_mais_nova].nascimento.ano &&
             pessoas[i].nascimento.mes == pessoas[index_mais_nova].nascimento.mes &&
             pessoas[i].nascimento.dia > pessoas[index_mais_nova].nascimento.dia))
        {
            index_mais_nova = i;
        }
    }

    printf("A pessoa mais velha eh: %s\n", pessoas[index_mais_velha].nome);
    printf("A pessoa mais nova eh: %s\n", pessoas[index_mais_nova].nome);

    return 0;
}