#include <stdio.h>

int main()
{
    int op, n1, n2, res;
    printf("Selecione uma das opções:\n");
    printf("1 - Soma\n");
    printf("2 - Subtração\n");
    printf("3 - Divisão\n");
    printf("4 - Multiplicação\n");
    printf("Digite: ");
    scanf("%d", &op);

    printf("Digite os dois números: ");
    scanf("%d %d", &n1, &n2);

    if (op == 1)
    {
        res = n1 + n2;
        printf("Resultado: %d\n", res);
    }
    else if (op == 2)
    {
        res = n1 - n2;
        printf("Resultado: %d\n", res);
    }
    else if (op == 3)
    {
        res = n1 / n2;
        printf("Resultado: %d\n", res);
    }
    else if (op == 4)
    {
        res = n1 * n2;
        printf("Resultado: %d\n", res);
    }
    else
    {
        printf("Operação inválida");
        return 1;
    }

    return 0;
}
