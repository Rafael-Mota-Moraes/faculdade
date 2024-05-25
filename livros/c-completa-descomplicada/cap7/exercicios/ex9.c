#include <stdio.h>
#include <string.h>

/*
Construa um programa que leia duas strings do teclado. Imprima uma
mensagem informando quantas vezes a segunda string lida está contida
dentro da primeira.
*/

int main()
{
    char str1[100];
    char str2[100];

    printf("Digite a primeira string: ");
    fgets(str1, 100, stdin);

    size_t len1 = strlen(str1);
    if (len1 > 0 && str1[len1 - 1] == '\n')
    {
        str1[len1 - 1] = '\0';
    }

    printf("Digite a segunda string: ");
    fgets(str2, 100, stdin);

    size_t len2 = strlen(str2);
    if (len2 > 0 && str2[len2 - 1] == '\n')
    {
        str2[len2 - 1] = '\0';
    }

    int count = 0;
    char *pos = str1;

    while ((pos = strstr(pos, str2)) != NULL)
    {
        count++;
        pos += strlen(str2);
    }

    printf("A segunda string está contida %d vezes na primeira.\n", count);

    return 0;
}
