#include <stdio.h>
#include <stdlib.h>

/*
Sem usar a função strlen(), faça um programa que leia uma string e
imprima quantos caracteres ela possui.
*/

int main()
{
    char str[100];
    printf("Digite sua string: ");
    fgets(str, 100, stdin);

    char ch = str[0];
    int qtd_ch = 0;
    while (ch != '\0')
    {
        if (str[qtd_ch] != '\0')
        {
            qtd_ch++;
            ch = str[qtd_ch];
        }
    }

    qtd_ch--;

    printf("Tem %d caracteres.\n", qtd_ch);

    return 0;
}
