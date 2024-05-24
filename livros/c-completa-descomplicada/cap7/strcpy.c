#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    printf("Digite uma string: ");
    fgets(str1, 100, stdin);
    for (int i = 0; i < 100; i++)
    {
        if (str1[i] == '\n')
        {
            str1[i] = '\0';
            break;
        }
    }
    strcpy(str2, str1);

    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str2);

    return 0;
}
