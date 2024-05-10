#include <stdio.h>

int main()
{
    int num1, num2;

    // Solicita ao usuário que insira dois números inteiros
    printf("Insira o primeiro número inteiro: ");
    scanf("%d", &num1);
    printf("Insira o segundo número inteiro: ");
    scanf("%d", &num2);

    // Calcula os resultados das operações
    int xor_result = num1 ^ num2;
    int or_result = num1 | num2;
    int and_result = num1 & num2;

    // Exibe os resultados
    printf("Resultado da operação 'ou exclusivo' entre %d e %d: %d\n", num1, num2, xor_result);
    printf("Resultado da operação 'ou bit a bit' entre %d e %d: %d\n", num1, num2, or_result);
    printf("Resultado da operação 'e bit a bit' entre %d e %d: %d\n", num1, num2, and_result);

    return 0;
}
