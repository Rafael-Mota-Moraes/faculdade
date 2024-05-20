#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, c;

    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);

    for (; a < b; a++)
    {
        printf("%d ", a);
    }

    return 0;
}
