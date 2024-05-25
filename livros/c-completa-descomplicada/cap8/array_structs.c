#include <stdio.h>
#include <stdlib.h>

struct cadastro
{
    char nome[50];
    int idade;
    char rua[50];
    int numero;
};

int main()
{
    struct cadastro c[4];

    for (int i = 0; i < 4; i++)
    {
        fgets(c[i].nome, 50, stdin);
        scanf("%d", &c[i].idade);
        fgets(c[i].rua, 50, stdin);
        scanf("%d", &c[i].numero);
    }

    return 0;
}
