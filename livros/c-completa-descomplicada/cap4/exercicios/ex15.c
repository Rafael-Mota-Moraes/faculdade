#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    printf("Digite A, B e C: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == 0)
    {
        printf("Não é equação de segundo grau\n");
    }
    else
    {
        double delta = b * b - 4 * a * c;

        if (delta < 0)
        {
            printf("Não existe raiz real\n");
        }
        else if (delta == 0)
        {
            double raiz = -b / (2.0 * a);
            printf("Raiz única: %.2lf\n", raiz);
        }
        else
        {
            double raiz1 = (-b + sqrt(delta)) / (2.0 * a);
            double raiz2 = (-b - sqrt(delta)) / (2.0 * a);
            printf("Raiz 1: %.2lf\n", raiz1);
            printf("Raiz 2: %.2lf\n", raiz2);
        }
    }

    return 0;
}
