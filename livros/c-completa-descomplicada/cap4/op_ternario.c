#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, z;
    printf("Digite x e y: ");
    scanf("%d %d", &x, &y);

    z = x > y ? x : y;
    printf("Maior = %d\n", z);
    return 0;
}