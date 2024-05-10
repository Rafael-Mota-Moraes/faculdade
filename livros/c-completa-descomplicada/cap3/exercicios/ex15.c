#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa para ler um número inteiro positivo de
três dígitos. Em seguida, calcule e mostre o número formado
pelos dígitos invertidos do número lido. Exemplo:
Número lido = 123 Número gerado = 321
*/

int main()
{
    int num;
    printf("Digite o numero: ");
    scanf("%d", &num);
    int centena, dezena, unidade;
    unidade = num / 100;
    dezena = (num / 10) % 10;
    centena = num % 10;
    printf("%d%d%d", centena, dezena, unidade);

    return 0;
}