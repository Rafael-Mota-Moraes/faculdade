#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Faça um programa que leia uma string e a inverta. A string invertida deve
ser armazenada na mesma variável. Em seguida, imprima a string
invertida.
*/

int main()
{
    char str[100];
    printf("Digite sua string: ");
    fgets(str, 100, stdin);

    str[strcspn(str, "\n")] = '\0';
    int tam = strlen(str);
    for (int i = 0; i < tam / 2; i++)
    {
        char temp = str[i];
        str[i] = str[tam - 1 - i];
        str[tam - 1 - i] = temp;
    }

    printf("String invertida: %s\n", str);

    return 0;
}
