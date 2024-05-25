#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Faça um programa que leia uma string e imprima uma mensagem dizendo
se ela é um palíndromo ou não. Um palíndromo é uma palavra que tem a
propriedade de poder ser lida tanto da direita para a esquerda como da
esquerda para a direita. Exemplos: ovo, arara, rever, asa, osso etc.
*/

int main()
{
    char str[100];
    printf("Digite sua string: ");
    fgets(str, 100, stdin);

    // Remove o '\n' se existir
    int tam = strlen(str);
    if (str[tam - 1] == '\n')
    {
        str[tam - 1] = '\0';
        tam--;
    }

    char str2[tam + 1];
    int i2 = 0;
    for (int i = tam - 1; i >= 0; i--)
    {
        str2[i2] = str[i];
        i2++;
    }
    str2[i2] = '\0'; // Adiciona o caractere nulo ao final de str2

    int is_errado = 0;

    for (int i = 0; i < tam; i++)
    {
        if (str[i] != str2[i])
        {
            is_errado = 1;
        }
    }

    if (is_errado == 1)
    {
        printf("Não é um palíndromo.\n");
    }
    else
    {
        printf("É um palíndromo.\n");
    }

    return 0;
}
