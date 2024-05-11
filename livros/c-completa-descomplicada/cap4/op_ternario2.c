#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Digite: ");
    scanf("%d", &num);

    (num == 10) ? printf("O numero eh igual a 10\b") : printf("O numero e diferente de 10");
    return 0;
}