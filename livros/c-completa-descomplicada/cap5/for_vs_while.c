#include <stdio.h>

int main()
{
    // FOR

    int i, s = 0;

    for (i = 1; i <= 10; i++)
    {
        s = s + i;
    }

    printf("Resultado da soma no for: %d\n", s);

    // WHILE
    s = 0;
    i = 1;
    while (i <= 10)
    {
        s = s + i;
        i++;
    }
    printf("Resultado da soma no while: %d\n", s);

    return 0;
}
