#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Implemente um programa que leia o nome, a idade e o endereço de uma
pessoa e armazene esses dados em uma estrutura. Em seguida, imprima na
tela os dados da estrutura lida.
*/

struct endereco
{
    char rua[80];
    int numero;
};

struct pessoa
{
    char nome[80];
    int idade;
    struct endereco ender;
};

int main()
{
    struct pessoa p1;
    printf("Digite o nome da pessoa: ");
    fgets(p1.nome, 80, stdin);
    p1.nome[strcspn(p1.nome, "\n")] = 0;

    printf("Digite a idade da pessoa: ");
    scanf("%d", &p1.idade);
    getchar();

    printf("Digite o nome da rua que a pessoa mora: ");
    fgets(p1.ender.rua, 80, stdin);
    p1.ender.rua[strcspn(p1.ender.rua, "\n")] = 0;

    printf("Digite o numero da casa da pessoa: ");
    scanf("%d", &p1.ender.numero);
    getchar();
    printf(
        "%s tem %d anos, e mora na: %s, numero %d",
        p1.nome, p1.idade, p1.ender.rua, p1.ender.numero);

    return 0;
}