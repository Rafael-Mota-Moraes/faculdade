#include <stdio.h>
#include <stdlib.h>

int main()
{
    // pré incremento
    int x = 10;
    printf("x = %d\n", ++x);
    x = 10;
    printf("x = %d\n", x++);
    printf("x = %d\n", x);

    x = 10;

    return 0;
}