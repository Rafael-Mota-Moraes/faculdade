#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    printf("Digite uma string: ");
    fgets(str1, 100, stdin);

    printf("Digite outra string: ");
    fgets(str2, 100, stdin);

    if (strcmp(str1, str2) == 0)
        printf("Strings são iguais\n");
    else
        printf("Strings são diferentes\n");

    return 0;
}
