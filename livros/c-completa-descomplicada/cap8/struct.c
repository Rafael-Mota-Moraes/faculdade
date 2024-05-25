#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cadastro
{
    char nome[50];
    int idade;
    char rua[50];
    int numero;
};

int main()
{
    struct cadastro c;

    // Atribui a string 'Carlos' Para o campo nome
    strcpy(c.nome, "Carlos");

    c.idade = 18;
    strcpy(c.rua, "Av. Brasil");
    c.numero = 1082;

    return 0;
}
