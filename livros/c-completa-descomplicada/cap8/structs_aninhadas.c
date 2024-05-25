#include <stdio.h>
#include <stdlib.h>

struct endereco
{
    char rua[50];
    int numero;
};

struct cadastro
{
    char nome[50];
    int idade;
    struct endereco ender;
};

int main()
{
    struct cadastro c;

    fgets(c.nome, 50, stdin);
    scanf("%d", &c.idade);

    fgets(c.ender.rua, 50, stdin);
    scanf("%d", &c.ender.rua);

    return 0;
}
