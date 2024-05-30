#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void imprime_log(float x)
{
    if (x <= 0)
        return; // termina a funçao

    printf("Log = %f\n", log(x));
}

int main()
{
    float x;
    printf("Digite x: ");
    scanf("%f", &x);
    imprime_log(x);

    return 0;
}