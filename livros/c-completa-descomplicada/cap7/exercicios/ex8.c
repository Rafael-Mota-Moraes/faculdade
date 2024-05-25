#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Construa um programa que leia duas strings do teclado. Imprima uma
mensagem informando se a segunda string lida está contida dentro da
primeira.
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

    if (strstr(str1, str2) != NULL)
    {
        printf("A segunda string está contida na primeira.\n");
    }
    else
    {
        printf("A segunda string NÃO está contida na primeira.\n");
    }
    return 0;
}
