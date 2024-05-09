#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 10, y = 20;
    x *= y - 10;
    printf("x = %d\n", x);

    x -= 5 + y;
    printf("x = %d\n", x);
    return 0;
}