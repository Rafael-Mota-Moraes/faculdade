#include <stdio.h>
#include <string.h>

/*
Escreva um programa que leia uma string do teclado e converta todos os
seus caracteres em maiúscula. Dica: subtraia 32 dos caracteres cujo código
ASCII está entre 97 e 122.
*/

int main()
{
    char str[100];

    printf("Digite uma string: ");
    fgets(str, 100, stdin);

    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n')
    {
        str[len - 1] = '\0';
    }

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
    }

    printf("String convertida para maiúsculas: %s\n", str);

    return 0;
}
