#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);
    if (num > 10)
        printf("O numero e maior do que 10\n");

    // OU
    if (num > 10)
    {
        printf("O numero e maior do que 10\n");
    }
    return 0;
}