#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[30];
    printf("Digite um nome: ");
    fgets(nome, 30, stdin);

    printf("O nome digitado foi: %s\n", nome);
    return 0;
}
