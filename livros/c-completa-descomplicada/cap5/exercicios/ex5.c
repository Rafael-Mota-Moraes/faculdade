#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0, i = 0;

    while (n <= 50)
    {
        if (i % 2 == 0)
        {
            printf("%d eh par.\n", i);
            n++;
        }
        i++;
    }

    return 0;
}