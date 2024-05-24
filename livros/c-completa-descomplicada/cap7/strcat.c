#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str1[15] = "Bom";
    char str2[15] = " dia.";

    strcat(str1, str2);
    printf("%s\n", str1);
    return 0;
}
